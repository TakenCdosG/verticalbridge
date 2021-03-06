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
<div class="l-page">
  <header class="l-header" role="banner">
    <a href="<?php print $front_page; ?>" class="sublogo"><img id="" src="/<?php print path_to_theme(); ?>/images/logo-white.png"> </a>
    <div class="social-icons"><a href="https://www.linkedin.com/company/vertical-bridge"><div class="linkedin"></div></a></div>
    <?php print render($page['header']); ?>
	<a href="javascript:;" class="mobile-menu-btn center hidden">&equiv; Menu</a>
    <?php print render($page['navigation']); ?>
  </header>

  <div class="l-main">
	<!-- <div class="l-above-content" role="main">

	</div> -->
	<div class="internal-header" style="background-image: url(<?php isset($node) ? print file_create_url($node->field_internal_header['und'][0]['uri']) : print $base_path.'sites/all/themes/omega/ohm/images/sub-header.jpg' ?>)">
    <?php 
    if (isset($node)) {
      $type_node = $node->type;
    }else{
      $type_node = "";
    }

    switch ($type_node) {
    case 'press_release':
        echo '<h3 class="page-title">News</h3>';
        $no_type = false;
        break;
    case 'events':
        echo '<h3 class="page-title">Events</h3>';
        $no_type = false;
        break;
    case 'press':
        echo '<h3 class="page-title">Press</h3>';
        $no_type = false;
        break;
    default:
        echo '<h3 class="page-title">'.$title.'</h3>';
        $no_type = true;
    }
     ?>
        
	</div>
    <div class="l-content internal-page" role="main">
      <?php print render($page['highlighted']); ?>
      <?php //print $breadcrumb; ?>
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php print render($tabs); ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php if($no_type == true){}else{print('<h3>'.$title.'</h3>');}?>
      <?php print render($page['content']); ?>
      <?php print $feed_icons; ?>
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
    <?php //print render($page['sidebar_first']); ?>
    <?php //print render($page['sidebar_second']); ?>
  </div>
  <div style="clear: both"></div>
  <footer class="l-footer" role="contentinfo">
		<?php print render($page['footer']); ?>
		<div class="lower-footer">
			&copy; <?php echo date('Y'); ?> Vertical Bridge, LLC. All rights reserved | <a href="/terms-of-use">Terms of Use</a>
		</div>
  </footer>
</div>
