<?php
/**
 * @file
 * Main view template for site locator.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */
?>
<div class="<?php print $classes; ?>">
    <?php if ($footer): ?>
        <div class="view-footer">
            <?php print $footer; ?>
            <div class="advanced-slideout slideout-map">
                <div class="as-list-map">
                    <ul>
                        <li><a href="#" id="listlist">List</a></li>
                        <li><a href="#" id="listmap" class="active">Map</a></li>
                    </ul>
                </div>
                <div class="as-filter-results <?php if (!isset($_GET['distance'])): ?>hidden<?php endif; ?>">
                    
                        <ul>
                            <li><a href="#" onclick="switchMaps('google');" class="mapsGoogle active">Google Map</a></li>
                            <li><a href="#" onclick="switchMaps('bing');" class="mapsBing">Bing Map</a></li>
                            <li><a href="/site-export-kml" class="mapsDownload">Download in Google Earth</a></li>
                        </ul>
                        <a href="#" id="mapsFilterResults" class="filter-button mapsFilterResults">Filter Results</a>
                        <div class="sep-grey total-results">
                            Results: <span id="totalResults"><?php $view = views_get_current_view(); echo $view->total_rows; ?></span> <a href="/site-locator" id="resetFilterAll"><img src="/sites/all/themes/omega/ohm/images/refresh.png" /> Reset Filter</a>
                        </div>
                        <form action="site-locator" method="get" id="filter">
                            <div class="sep">
                                <p>City</p>
                                <div id="arrayCities"></div>
                                <script>
                                    jQuery(document).ready(function(){
                                        jQuery('input[name=city][value="<?php echo $_GET['city']; ?>"]').prop('checked', true);
                                    });                                    
                                </script>
                            </div>
                            <div class="sep-grey">
                                <p>Site Category</p>
                                <?php
                                $arrayTypes = array('building', 'rooftop', 'tower', 'land');
                                foreach ($arrayTypes as $arrayType) {
                                    $checked = ($_GET['category'] == $arrayType) ? 'checked' : '';                                                                            
                                    echo '<input type="radio" name="category" value="'.$arrayType.'" '. $checked .' /><label for="'.$arrayType.'">'.ucfirst($arrayType).'</label><br />';
                                }
                                ?>
                            </div>
                            <?php /*
                              <div class="sep">
                              <p>Site Owner</p>
                              <?php $arrayOwners = array('Vertical Bridge', 'American Tower', 'SBA', 'Crown Castle');
                              foreach($arrayOwners as $arrayOwner) {
                              echo '<input type="checkbox" value="' . $arrayOwner . '" /><label for="' . $arrayOwner . '">' . $arrayOwner . '</label><br />';
                              } ?>
                              </div>
                             * 
                             */ ?>
                            <div class="sep">
                                <a href="#" onclick="jQuery('#filter').submit()" class="mapsFilterResults button">Apply Filter</a>
                                <div class="download-results-links">
                                    <?php if(!empty($_SERVER['QUERY_STRING'])){?><a href="/site-export?<?php echo $_SERVER['QUERY_STRING']; ?>">Download Results</a>&nbsp;|&nbsp;<?php } ?>
                                    <a href="/site-export">Download All Sites</a>
                                </div>
                            </div>
                            <input type="hidden" name="distance[search_distance]" value="<?php echo $_GET['distance']['search_distance']; ?>" />
                            <input type="hidden" name="distance[latitude]" value="<?php echo  $_GET['distance']['latitude']; ?>" />
                            <input type="hidden" name="distance[longitude]" value="<?php echo  $_GET['distance']['longitude']; ?>" />
                        </form>
                </div>
                <div class="as-advanced-search <?php if (isset($_GET['distance'])): ?>hidden<?php endif; ?>">
                    <ul>
                        <li><a href="#" onclick="switchMaps('google');" class="mapsGoogle active">Google Map</a></li>
                        <li><a href="#" onclick="switchMaps('bing');" class="mapsBing">Bing Map</a></li>
                        <li><a href="/site-export-kml" class="mapsDownload">Download in Google Earth</a></li>
                    </ul>
                    <h5 class="as-header">Advanced Locator</h5>
                    <form class="views-exposed-form-site-locator-site-search" action="/site-locator" method="get" id="views-exposed-form-site-locator-site-search" accept-charset="UTF-8">
                        <p>
                            Please choose a method to search<br />
                            <input type="submit" id="edit-submit-site-locator" name="" value="Locate" class="form-submit">
                        </p>
                        <div class="accordian" id="accSection1">
                            <div class="accordian-header"><span>Latitude/Longitude</span><i class="fa fa-chevron-down"></i></div>
                            <div class="accordian-content" style="display:none;">
                                <div class="accordian-wrapper">
                                    <input type="text" id="edit-distance-latitude" name="distance[latitude]" value="" size="60" maxlength="128" class="form-text" placeholder="Latitude">
                                    <input type="text" id="edit-distance-longitude" name="distance[longitude]" value="" size="60" maxlength="128" class="form-text" placeholder="Longitude">
                                </div>
                            </div>
                        </div>
                        <div class="accordian" id="accSection2">
                            <div class="accordian-header"><span>Site Category and Site Type</span><i class="fa fa-chevron-down"></i></div>
                            <div class="accordian-content" style="display:none;">
                                <div class="accordian-wrapper">
                                    <select id="edit-category" name="category" class="form-select"><option value="All" selected="selected">- Site Category -</option><option value="land">Land</option><option value="rooftop">Rooftop</option><option value="tower">Tower</option><option value="All">View All</option></select>
                                    <select id="edit-type" name="type" class="form-select"><option value="All" selected="selected">- Site Type -</option><option value="apts">Apartments</option><option value="bank">Bank</option><option value="bldg">Building</option><option value="chimney">Chimney</option><option value="church">Church</option><option value="condo">Condo</option><option value="cross">Cross</option><option value="das">DAS</option><option value="das-ip">DAS-IP</option><option value="flagpole">Flagpole</option><option value="flex">Flex</option><option value="flex-m">Flex-m</option><option value="garage">Garage</option><option value="guyed">Guyed</option><option value="guyed mono">Guyed Mono</option><option value="hosp">Hospital</option><option value="hotel">Hotel</option><option value="house">House</option><option value="indust">Industrial</option><option value="land">Land</option><option value="light pole">Light Pole</option><option value="Mono}mono">Mono}mono</option><option value="mono broadleaf">Mono Broadleaf</option><option value="mono cypress">Mono Cypress</option><option value="mono palm">Mono Palm</option><option value="mono pine">Mono Pine</option><option value="monopole">Monopole</option><option value="mun">Mun</option><option value="ofc">OFC</option><option value="other">Other</option><option value="recrea">Recreational</option><option value="residential">Residential</option><option value="restr">Restaurant</option><option value="retail">Retail</option><option value="rtts-ip">RTTS-IP</option><option value="school">School</option><option value="sign">Sign</option><option value="sst">SST</option><option value="stack">Stack</option><option value="stealth">Stealth</option><option value="steeple">Steeple</option><option value="storage">Storage</option><option value="transmission tower">Transmission tower</option><option value="triple mono (guyed)">Triple Mono (guyed)</option><option value="twr-ip">TWR-IP</option><option value="util-bldg">Util-bldg</option><option value="w-pole">W-pole</option><option value="wtank">Wtank</option><option value="All">View All</option></select>
                                </div>
                            </div>
                        </div>
                        <div class="accordian" id="accSection3">
                            <div class="accordian-header"><span>Address Locator</span><i class="fa fa-chevron-down"></i></div>
                            <div class="accordian-content" style="display:none;">
                                <div class="accordian-wrapper">
                                    <input type="text" id="edit-street" name="street" value="" size="30" maxlength="128" class="form-text" placeholder="Street Address">
                                    <input type="text" id="edit-city" name="city" value="" size="30" maxlength="128" class="form-text" placeholder="City">
    <?php $stateArray = array('AL', 'AK', 'AZ', 'AR', 'CA', 'CO', 'CT', 'DE', 'FL', 'GA', 'HI', 'ID', 'IL', 'IN', 'IA', 'KS', 'KY', 'LA', 'ME', 'MD', 'MA', 'MI', 'MN', 'MS', 'MO', 'MT', 'NE', 'NV', 'NH', 'NJ', 'NM', 'NY', 'NC', 'ND', 'OH', 'OK', 'OR', 'PA', 'RI', 'SC', 'SD', 'TN', 'TX', 'UT', 'VT', 'VA', 'WA', 'WV', 'WI', 'WY'); ?></select>
                                    <select id="edit-state" name="state" class="form-select"><option value="All" selected="selected">State</option><?php foreach ($stateArray as $state) {
        echo '<option value="'.$state.'">'.$state.'</option>';
    } ?>
                                        <input type="text" id="edit-postal-code" name="postal_code" value="" size="30" maxlength="128" class="form-text" placeholder="Zip Code">
                                        <input type="text" id="edit-distance-search-distance" name="distance[search_distance]" value="100" size="60" maxlength="128" class="form-text required" placeholder="Radius"><span>Miles</span>
                                </div>
                            </div>
                        </div>
                        <div class="accordian" id="accSection4">
                            <div class="accordian-header"><span>Site Name, Number, or ASR Number</span><i class="fa fa-chevron-down"></i></div>
                            <div class="accordian-content" style="display:none;">
                                <div class="accordian-wrapper">
                                    <input type="text" id="edit-name-number" name="name_number" value="" size="30" maxlength="128" class="form-text" placeholder="Site Name Or Number">
                                    <input type="text" id="edit-asr-number" name="asr" value="" size="30" maxlength="128" class="form-text" placeholder="ASR Number">
                                </div>
                            </div>
                        </div>
                        <div class="download-results-links">
                            <?php if(!empty($_SERVER['QUERY_STRING'])){?><a href="/site-export?<?php echo $_SERVER['QUERY_STRING']; ?>">Download Results</a>&nbsp;|&nbsp;<?php } ?>
                            <a href="/site-export">Download All Sites</a>
                        </div>
                    </form>
                </div>
            </div>
        </div>
        <?php endif; ?>

    <?php if ($header): ?>
        <div class="view-header" <?php if (!isset($_GET['distance'])): ?>style="display:none;visibility:hidden;"<?php endif; ?>>
        <?php print $header; ?>
        </div>    
        <?php endif; ?>

    <?php if ($attachment_before): ?>
        <div class="attachment attachment-before">
        <?php print $attachment_before; ?>
        </div>
        <?php endif; ?>

    <?php if ($rows): ?>
        <div class="view-content view-map-view">
            <?php print $rows; ?>
        </div>
    <?php elseif ($empty): ?>
        <div class="view-empty">
        <?php print $empty; ?>
        </div>
    <?php endif; ?>

    <?php if ($pager): ?>
            <?php print $pager; ?>
        <?php endif; ?>

    <?php if ($attachment_after): ?>
        <div class="attachment attachment-after">
        <?php print $attachment_after; ?>
        </div>
    <?php endif; ?>

    <?php if ($more): ?>
        <?php print $more; ?>
    <?php endif; ?>

    <?php /* if ($feed_icon): ?>
      <div class="feed-icon">
      <?php print $feed_icon; ?>
      </div>
      <?php endif; */ ?>

</div><?php /* class view */ ?>

<script type="text/javascript" src="<?php echo $directory; ?>/js/site-locator-ui.js"></script>