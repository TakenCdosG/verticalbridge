<?php

/**
 * Implements hook_views_data_alter().
 */
function verticalbridge_views_data_alter(&$data) {
  $data['node']['omnisearch']['title'] = 'Omni Search';
  $data['node']['omnisearch']['help'] = 'Search all VerticalBridge fields.';
  $data['node']['omnisearch']['filter']['handler'] = 'verticalbridge_handler_filter_omnisearch';
}
