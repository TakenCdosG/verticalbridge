<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
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
<h3 class="page-title">Application Details for: <span><?php echo $node->field_application_id['und']['0']['value']; ?></span></h3>
<span class="page-subheading"><b>Carrier:</b> <?php echo $node->field_carrier['und']['0']['value']; ?> &nbsp; | &nbsp; <b>Type:</b> <?php echo $node->field_type['und']['0']['value']; ?></span>
<div class="application-header">
  <div class="lm-title">
    Leasing Manager:
  </div>
  <div class="lm-details">
    <?php echo $node->field_leasing_manager['und']['0']['value']; ?><br />
    <?php echo $node->field_leasing_manager_address['und']['0']['thoroughfare'] . ', ' . $node->field_leasing_manager_address['und']['0']['premise'] . ' ' . $node->field_leasing_manager_address['und']['0']['locality'] . ', ' . $node->field_leasing_manager_address['und']['0']['administrative_area'] . ' ' . $node->field_leasing_manager_address['und']['0']['postal_code']; ?><br />
    <a href="mailto:<?php echo $node->field_leasing_manager_email['und']['0']['value']; ?>"><?php echo $node->field_leasing_manager_email['und']['0']['value']; ?></a> &nbsp; <?php echo $node->field_leasing_manager_phone['und']['0']['value']; ?>
  </div>
</div>
<div class="application-details">
  <div class="ad-header">
    <ul>
      <li class="active" id="processDetails"><a href="#">Process Details</a></li>
      <!--<li id="processNotes"><a href="#">Notes</a></li>
      <li id="processDocs"><a href="#">Docs</a></li>-->
    </ul>
  </div>
  <div id="processDetails">
    <table class="process-details">
      <tr>
        <th>Milestone</th>
        <th>Date Completed</th>
        <th>&nbsp;</th>
      </tr>
      <tr>
        <td>Collocation Application Uploaded</td>
        <td><?php echo empty($node->field_collocation_application_up) ? '' : $node->field_collocation_application_up['und']['0']['value']; ?></td>
        <td>&nbsp;</td>
      </tr>
      <tr>
        <td>Due Diligence Completed</td>
        <td><?php echo empty($node->field_due_diligence_completed_da) ? '' : $node->field_due_diligence_completed_da['und']['0']['value']; ?></td>
        <td>&nbsp;</td>
      </tr>
      <tr>
        <td>Structural Analysis Completed</td>
        <td><?php echo empty($node->field_structural_analysis_comple) ? '' : $node->field_structural_analysis_comple['und']['0']['value']; ?></td>
        <td>&nbsp;</td>
      </tr>
      <tr>
        <td>Landlord or Owner Review Completed</td>
        <td><?php echo empty($node->field_landlord_or_owner_review_c) ? '' : $node->field_landlord_or_owner_review_c['und']['0']['value']; ?></td>
        <td>&nbsp;</td>
      </tr>
      <tr>
        <td>Tower Mods Completed</td>
        <td><?php echo empty($node->field_tower_mods_completed_date) ? '' : $node->field_tower_mods_completed_date['und']['0']['value']; ?></td>
        <td>&nbsp;</td>
      </tr>
      <tr>
        <td>Lease Terms Negotiated</td>
        <td><?php echo empty($node->field_lease_terms_negotiated_dat) ? '' : $node->field_lease_terms_negotiated_dat['und']['0']['value']; ?></td>
        <td>&nbsp;</td>
      </tr>
      <tr>
        <td>Legal Review Completed</td>
        <td><?php echo empty($node->field_legal_review_completed_dat) ? '' : $node->field_legal_review_completed_dat['und']['0']['value']; ?></td>
        <td>&nbsp;</td>
      </tr>
      <tr>
        <td>Lease Executed</td>
        <td><?php echo empty($node->field_lease_executed_date) ? '' : $node->field_lease_executed_date['und']['0']['value']; ?></td>
        <td>&nbsp;</td>
      </tr>
      <tr>
        <td>Tenant NTP Issued</td>
        <td><?php echo empty($node->field_tenant_ntp_issued_date) ? '' : $node->field_tenant_ntp_issued_date['und']['0']['value']; ?></td>
        <td>&nbsp;</td>
      </tr>
      <tr>
        <td>TIDA Form Received</td>
        <td><?php echo empty($node->field_tida_form_received_date) ? '' : $node->field_tida_form_received_date['und']['0']['value']; ?></td>
        <td>&nbsp;</td>
      </tr>
    </table>
  </div>
  <div id="processNotes" style="display: none;">

  </div>
  <div id="processDocs" style="display: none;">

  </div>
  <a class="back-button" href="/my-applications"><i class="fa fa-arrow-left"></i> Go Back</a>
</div>