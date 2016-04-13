<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the Ohm
 * theme.
 */

/**
 * Check if a block is a menu block or not.
 *
 * @param stdClass $block
 *   A block object.
 *
 * @return bool
 *   Given block is a menu block.
 */
function _ohm_is_menu_block($block) {
  $modules = array('menu', 'menu_block');
  if (in_array($block->module, $modules)) {
    return TRUE;
  }

  $modules = array('help', 'powered-by', 'main');
  if ($block->module == 'system' && !in_array($block->delta, $modules)) {
    return TRUE;
  }

  return FALSE;
}

function ohm_preprocess_page(&$vars) {
  $view = views_get_page_view();
  if(($view && $view->name == 'site_locator')) {
    drupal_add_js(drupal_get_path('theme', 'ohm') . '/js/jquery.cookie.js');
	}
 
  if (isset($vars['node']->type)) {
    $vars['theme_hook_suggestions'][] = 'page__' . $vars['node']->type;   
  }
}