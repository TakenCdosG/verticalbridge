<?php

/**
 * @file
 * Contains a pre-process hook for 'node'.
 */

/**
 * Implements hook_preprocess_TEMPLATE().
 */
function ohm_preprocess_node(&$variables)
{
    $node = $variables['node'];

    $date = format_date($variables['created'], 'long');

    $variables['submitted'] = t('@date | <strong>Author:</strong> !author', array('@date' => $date, '!author' => $variables['name']));

    if (isset($node->comment_count)) {
        $comments = l(t('Comments (@comment_count)', array('@comment_count' => $variables['comment_count'])), 'node/'.$node->nid, array('fragment' => 'comments'));
        $variables['submitted'] .= " | $comments";
    }

    if ($node->nid == 23) {
        $pages = db_query("SELECT n.nid, n.title, t.name as ctype FROM {node} n INNER JOIN {node_type} t ON n.type = t.type WHERE n.status = 1 ORDER BY n.type ASC, title ASC");
        if ($pages) {
            $variables['sitemap'] = array();
            foreach ($pages as $page) {
                if (isset($variables['sitemap'][$page->ctype])) {
                    $variables['sitemap'][$page->ctype][] = array('url' => url('node/'.$page->nid, array('absolute' => true)), 'text' => $page->title);
                } else {
                    $variables['sitemap'][$page->ctype] = array(
                        array('url' => url('node/'.$page->nid, array('absolute' => true)), 'text' => $page->title)
                    );
                }
            }
        }
    }


    if (isset($vars['node']->type)) {
        $vars['theme_hook_suggestions'][] = 'node__'.$vars['node']->type;
    }
}
