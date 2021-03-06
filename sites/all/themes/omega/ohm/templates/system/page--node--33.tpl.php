<?php

/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type, i.e., "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Article" it would result in "node-article". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. page, article, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode, e.g. 'full', 'teaser'...
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined, e.g. $node->body becomes $body. When needing to access
 * a field's raw values, developers/themers are strongly encouraged to use these
 * variables. Otherwise they will have to explicitly specify the desired field
 * language, e.g. $node->body['en'], thus overriding any language negotiation
 * rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */
?>
<script src="/sites/all/themes/omega/ohm/js/raphael.js"></script>
<script src="/sites/all/themes/omega/ohm/js/jquery.usmap.js"></script>
<div class="l-page">
  <?php print $messages; ?>
  <header class="l-header" role="banner">
    <a href="<?php print $front_page; ?>" class="sublogo"><img id="" src="/<?php print path_to_theme(); ?>/images/logo-white.png"> </a>
    <?php print render($page['header']); ?>
    <a href="javascript:;" class="mobile-menu-btn center hidden">&equiv; Menu</a>
    <?php print render($page['navigation']); ?>
  </header>
  <div class="l-main">
  <div class="l-above-content" role="main">
    <?php print render($page['above_content']); ?>
  </div>
  <div class="internal-header" style="background-image: url(<?php print file_create_url($node->field_internal_header['und'][0]['uri']); ?>)">
    <a href="<?php print $front_page; ?>" class="sublogo"><img src="/sites/default/files/slider-logo.png" alt="Vertical Bridge" /></a>
  </div>
  <?php print render($page['subnav']); ?>
    <div class="l-content internal-page" role="main">
      <?php print render($page['highlighted']); ?>
      <?php //print $breadcrumb; ?>
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <div class="lsm-header">
      <?php if ($title): ?>
        <h3 class="page-title"><?php print $title; ?></h3>
      <?php endif; ?>
        <h4>Find your Regional Leasing Manager and Regional Site Manager by selecting a state or territory from the map.</h4>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      </div>
      <div id="lsm_info"></div>
      <div id="us_map" style="width: 1024px; height: 600px;"></div>
      <div class="lsm-additional-info">
        <div class="lsm-info-block">
          <h5>Corporate Headquarters:</h5>
        </div>
        <div class="lsm-info-block">
          <p>
            Vertical Bridge Holdings, LLC<br />
            750 Park of Commerce Drive, Suite 200<br />
            Boca Raton, Florida 33487<br />
            (561) 948-6367
          </p>
        </div>
        <div class="lsm-info-block">
          <p>
            NOC/Emergency Phone: (877) 589-6411<br />
            NOC/Emergency Email: <a href="mailto:operations@verticalbridge.com">operations@verticalbridge.com</a>
          </p>
        </div>
      </div>
    </div>
  </div>
  <footer class="l-footer" role="contentinfo">
    <br />
    <?php print render($page['footer']); ?>
    <div class="lower-footer">
      &copy; <?php echo date('Y'); ?> Vertical Bridge, LLC. All rights reserved | <a href="/terms-of-use">Terms of Use</a>
    </div>
  </footer>
</div>
<script>
  (function($) {
    $(document).ready(function() {
      $('#us_map').usmap({
        stateStyles: {fill: '#838783'},
        stateHoverStyles: {fill: '#8bc540'},
        stateHoverAnimation: 250,
        showLabels: true,
        useAllLabels: true
      });
    });
  })(jQuery);
</script>