<?php
/**
 * @file
 * think_creative_updates.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function think_creative_updates_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'about_us_tabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 1;
  $quicktabs->title = 'About Us Tabs';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'block_delta_1',
      'hide_title' => 1,
      'title' => 'What We Do',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'block_delta_2',
      'hide_title' => 1,
      'title' => 'Our Customers',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('About Us Tabs');
  t('Our Customers');
  t('What We Do');

  $export['about_us_tabs'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'team_members';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Senior Management';
  $quicktabs->tabs = array(
    0 => array(
      'nid' => '15370',
      'view_mode' => 'full',
      'hide_title' => 1,
      'title' => 'Marc Ganzi - Executive Chairman',
      'weight' => '-100',
      'type' => 'node',
    ),
    1 => array(
      'nid' => '25',
      'view_mode' => 'full',
      'hide_title' => 1,
      'title' => 'Alex Gellman - Chief Executive Officer and Co-Founder',
      'weight' => '-99',
      'type' => 'node',
    ),
    2 => array(
      'nid' => '26',
      'view_mode' => 'full',
      'hide_title' => 1,
      'title' => 'Bernard Borghei - Senior Vice President – Operations and Co-Founder',
      'weight' => '-98',
      'type' => 'node',
    ),
    3 => array(
      'nid' => '24',
      'view_mode' => 'full',
      'hide_title' => 1,
      'title' => 'Michael Belski - Senior Vice President – Leasing & Marketing and Co-Founder',
      'weight' => '-97',
      'type' => 'node',
    ),
    4 => array(
      'nid' => '15384',
      'view_mode' => 'full',
      'hide_title' => 1,
      'title' => 'Beth Blazek - Controller',
      'weight' => '-96',
      'type' => 'node',
    ),
    5 => array(
      'nid' => '40',
      'view_mode' => 'full',
      'hide_title' => 1,
      'title' => 'Johnny Crawford - Vice President of Development',
      'weight' => '-95',
      'type' => 'node',
    ),
    6 => array(
      'nid' => '15381',
      'view_mode' => 'full',
      'hide_title' => 1,
      'title' => 'Daniela Giannoccoli - Director of Financial Planning and Analysis ',
      'weight' => '-94',
      'type' => 'node',
    ),
    7 => array(
      'nid' => '15369',
      'view_mode' => 'full',
      'hide_title' => 1,
      'title' => 'Bert Lopez - Chief Financial Officer',
      'weight' => '-93',
      'type' => 'node',
    ),
    8 => array(
      'nid' => '37',
      'view_mode' => 'full',
      'hide_title' => 1,
      'title' => 'Daniel Marinberg - Vice President and General Counsel',
      'weight' => '-92',
      'type' => 'node',
    ),
    9 => array(
      'nid' => '162',
      'view_mode' => 'full',
      'hide_title' => 1,
      'title' => 'Jim McCulloch - Vice President of Real Estate',
      'weight' => '-91',
      'type' => 'node',
    ),
    10 => array(
      'nid' => '15372',
      'view_mode' => 'full',
      'hide_title' => 1,
      'title' => 'Buddy Norman - Vice President of Real Estate Development',
      'weight' => '-90',
      'type' => 'node',
    ),
    11 => array(
      'nid' => '39',
      'view_mode' => 'full',
      'hide_title' => 1,
      'title' => 'Robert Paige - Senior Vice President of M&A',
      'weight' => '-89',
      'type' => 'node',
    ),
    12 => array(
      'nid' => '15407',
      'view_mode' => 'full',
      'hide_title' => 1,
      'title' => 'Mark Sanfilippo - Vice President of Information Technology',
      'weight' => '-88',
      'type' => 'node',
    ),
    13 => array(
      'nid' => '15382',
      'view_mode' => 'full',
      'hide_title' => 1,
      'title' => 'Kimberlee Steck - Senior Director of Human Resources',
      'weight' => '-87',
      'type' => 'node',
    ),
  );
  $quicktabs->renderer = 'accordion';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array(
    'history' => 0,
    'jquery_ui' => array(
      'autoHeight' => 1,
      'collapsible' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Alex Gellman - Chief Executive Officer and Co-Founder');
  t('Bernard Borghei - Senior Vice President – Operations and Co-Founder');
  t('Bert Lopez - Chief Financial Officer');
  t('Beth Blazek - Controller');
  t('Buddy Norman - Vice President of Real Estate Development');
  t('Daniel Marinberg - Vice President and General Counsel');
  t('Daniela Giannoccoli - Director of Financial Planning and Analysis ');
  t('Jim McCulloch - Vice President of Real Estate');
  t('Johnny Crawford - Vice President of Development');
  t('Kimberlee Steck - Senior Director of Human Resources');
  t('Marc Ganzi - Executive Chairman');
  t('Mark Sanfilippo - Vice President of Information Technology');
  t('Michael Belski - Senior Vice President – Leasing & Marketing and Co-Founder');
  t('Robert Paige - Senior Vice President of M&A');
  t('Senior Management');

  $export['team_members'] = $quicktabs;

  return $export;
}
