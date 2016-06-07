<?php

/**
 * @file
 * Default theme implementation to display the front page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $secondary_menu_heading: The title of the menu used by the secondary links.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['branding']: Items for the branding region.
 * - $page['header']: Items for the header region.
 * - $page['navigation']: Items for the navigation region.
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['hero']: Items for the hero content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 */
?> 
<div class="l-page">
	<?php print $messages; ?>
	<header class="l-header" role="banner">
		<a href="<?php print $front_page; ?>" class="sublogo"><img id="" src="/<?php print path_to_theme(); ?>/images/logo-white.png"> </a>
		<div class="social-icons"><a href="https://www.linkedin.com/company/vertical-bridge"><div class="linkedin"></div></a></div>
		<?php print render($page['header']); ?>
		<a href="javascript:;" class="mobile-menu-btn center hidden">&equiv; Menu</a>
		<?php print render($page['navigation']); ?>
	</header>
	<div class="home-site-locator">
		<div class="a">
			<h3>Site Locator <br><span class="f14px font2" style="font-weight:normal;">Vertical Bridge delivers sites to carriers fast.</span></h3>

		</div>
		<div class="b">
			<form action="http://sitelocator.verticalbridge.com/Home/Index" method="GET" id="home-site-locator">
				<input type="text" id="search-field" class="b-a center loc-btn" name="Search" placeholder="Enter City, County, State, Zip or Coordinates" style="width:73%;padding:14px;">
				<input type="submit" id="site-locator-btn" class="b-c loc-fld" value="Locate" style="background:#8bc540;color:white;padding:14px;border:2px solid #8bc540;width:22%;" />
				<input type="hidden" name="searchtype" value="basic" />
			</form>
		</div>
	</div>	
	<div class="l-main">
		<!--<div class="l-above-content" role="main">
			<?php //print render($page['above_content']); ?>
		</div> -->

		<div class="l-content home-slider-area" role="main">
			<a id="main-content"></a>
			<?php print render($page['content']['views_home_slider-block']); ?>
		</div>
		<div class="newscontainer">
			<div class="home-news-title">News</div>
			<div class="home-news">
					<?php print($page['news']['views_news_marquee-block']['#markup']); ?>
			</div>
			<div class="controller-holder">
				<div class="home-news-controller end"></div>
				<div class="home-news-controller middle"></div>
				<div class="home-news-controller begin"></div>
				<div style="clear:both;"></div>
			</div>
		</div>
		<div class="internal-page notop">
			<div class="services">
				<?php				
				foreach($node->field_service_title['und'] as $key => $value){
				?>
				<div class="service">
					<div class="service-image">
						<?php 
							$url = file_create_url($node->field_service_image['und'][$key]['uri']);
						?>
						<a href="<?php print $node->field_service_link['und'][$key]['value'];?>"><img src="<?php print $url ?>"/></a>
						<h2><?php print $value['value'];?></h2>
					</div>

					<div class="service-description">
						<?php print $node->field_service_description['und'][$key]['value'];?>
					</div>
				</div>
				<?php
				} ?>
			</div>
		  <div style="clear: both"></div>
	      <?php if(!empty($node->field_cta_content) or !empty($node->field_cta_button)){ ?>
	        <div class="call_to_action_block">
	          <div class="call_all"><?php print($node->field_cta_content['und'][0]['value']); ?></div> 
	          <?php if(!empty($node->field_cta_button)){ ?>
	            <p><span class="call_btn"><a class="light" href="<?php print($node->field_cta_button['und'][0]['url']); ?>"><?php print($node->field_cta_button['und'][0]['title']); ?></a></span></p>
	          <?php } ?>
	        </div>
	      <?php } ?> 
		</div>
	</div>
	<div style="clear: both"></div>
	<footer class="l-footer" role="contentinfo">
		<br />
		<?php print render($page['footer']); ?>
		<div class="lower-footer">
			&copy; <?php echo date('Y'); ?> Vertical Bridge, LLC. All rights reserved | <a href="/terms-of-use">Terms of Use</a>
		</div>
	</footer>
</div>
