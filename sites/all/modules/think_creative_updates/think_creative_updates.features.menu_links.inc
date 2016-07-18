<?php
/**
 * @file
 * think_creative_updates.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function think_creative_updates_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about:node/1.
  $menu_links['main-menu_about:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_about:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_careers:node/15390.
  $menu_links['main-menu_careers:node/15390'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/15390',
    'router_path' => 'node/%',
    'link_title' => 'Careers',
    'options' => array(
      'attributes' => array(),
      'node_type' => 'careers',
      'identifier' => 'main-menu_careers:node/15390',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_contact-us:node/7',
  );
  // Exported menu link: main-menu_co-location-application:node/15391.
  $menu_links['main-menu_co-location-application:node/15391'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/15391',
    'router_path' => 'node/%',
    'link_title' => 'Co-location Application',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_co-location-application:node/15391',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_contact-us:node/7',
  );
  // Exported menu link: main-menu_contact-us:node/7.
  $menu_links['main-menu_contact-us:node/7'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/7',
    'router_path' => 'node/%',
    'link_title' => 'Contact Us',
    'options' => array(
      'node_type' => 'webform',
      'attributes' => array(),
      'identifier' => 'main-menu_contact-us:node/7',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_development-directors-bts:node/15441.
  $menu_links['main-menu_development-directors-bts:node/15441'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/15441',
    'router_path' => 'node/%',
    'link_title' => 'Development Directors (BTS)',
    'options' => array(
      'node_type' => 'leasing_agents',
      'identifier' => 'main-menu_development-directors-bts:node/15441',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_contact-us:node/7',
  );
  // Exported menu link: main-menu_events:events.
  $menu_links['main-menu_events:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_events:events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_news:about-us/newsroom',
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_investors:node/15392.
  $menu_links['main-menu_investors:node/15392'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/15392',
    'router_path' => 'node/%',
    'link_title' => 'Investors',
    'options' => array(
      'attributes' => array(),
      'node_type' => 'basic_page_with_images',
      'identifier' => 'main-menu_investors:node/15392',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_about:node/1',
  );
  // Exported menu link: main-menu_leasing-managers:node/15403.
  $menu_links['main-menu_leasing-managers:node/15403'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/15403',
    'router_path' => 'node/%',
    'link_title' => 'Leasing Managers',
    'options' => array(
      'attributes' => array(),
      'node_type' => 'leasing_agents',
      'identifier' => 'main-menu_leasing-managers:node/15403',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_contact-us:node/7',
  );
  // Exported menu link: main-menu_news:about-us/newsroom.
  $menu_links['main-menu_news:about-us/newsroom'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about-us/newsroom',
    'router_path' => 'about-us/newsroom',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_news:about-us/newsroom',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_our-partners:node/15398.
  $menu_links['main-menu_our-partners:node/15398'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/15398',
    'router_path' => 'node/%',
    'link_title' => 'Our Partners',
    'options' => array(
      'attributes' => array(),
      'node_type' => 'basic_page_with_tabs',
      'identifier' => 'main-menu_our-partners:node/15398',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_our-work:node/15395',
  );
  // Exported menu link: main-menu_our-tenants:node/15399.
  $menu_links['main-menu_our-tenants:node/15399'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/15399',
    'router_path' => 'node/%',
    'link_title' => 'Our Tenants',
    'options' => array(
      'attributes' => array(),
      'node_type' => 'basic_page_with_tabs',
      'identifier' => 'main-menu_our-tenants:node/15399',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_our-work:node/15395',
  );
  // Exported menu link: main-menu_our-work:node/15395.
  $menu_links['main-menu_our-work:node/15395'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/15395',
    'router_path' => 'node/%',
    'link_title' => 'Our Work',
    'options' => array(
      'attributes' => array(),
      'node_type' => 'basic_page_with_images',
      'identifier' => 'main-menu_our-work:node/15395',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_press-releases:press.
  $menu_links['main-menu_press-releases:press'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'press',
    'router_path' => 'press',
    'link_title' => 'Press Releases',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_press-releases:press',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_news:about-us/newsroom',
  );
  // Exported menu link: main-menu_senior-management:node/2.
  $menu_links['main-menu_senior-management:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Senior Management',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_senior-management:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_about:node/1',
  );
  // Exported menu link: main-menu_site-locator:http://sitelocatorstage.verticalbridge.com.
  $menu_links['main-menu_site-locator:http://sitelocatorstage.verticalbridge.com'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://sitelocatorstage.verticalbridge.com',
    'router_path' => '',
    'link_title' => 'Site Locator',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_site-locator:http://sitelocatorstage.verticalbridge.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_vertical-bridge-charitable-network:node/15408.
  $menu_links['main-menu_vertical-bridge-charitable-network:node/15408'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/15408',
    'router_path' => 'node/%',
    'link_title' => 'Vertical Bridge Charitable Network',
    'options' => array(
      'node_type' => 'basic_page_with_images',
      'identifier' => 'main-menu_vertical-bridge-charitable-network:node/15408',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_about:node/1',
  );
  // Exported menu link: main-menu_what-we-do:node/15396.
  $menu_links['main-menu_what-we-do:node/15396'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/15396',
    'router_path' => 'node/%',
    'link_title' => 'What We Do',
    'options' => array(
      'attributes' => array(),
      'node_type' => 'basic_page_with_tabs',
      'identifier' => 'main-menu_what-we-do:node/15396',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_our-work:node/15395',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Careers');
  t('Co-location Application');
  t('Contact Us');
  t('Development Directors (BTS)');
  t('Events');
  t('Home');
  t('Investors');
  t('Leasing Managers');
  t('News');
  t('Our Partners');
  t('Our Tenants');
  t('Our Work');
  t('Press Releases');
  t('Senior Management');
  t('Site Locator');
  t('Vertical Bridge Charitable Network');
  t('What We Do');

  return $menu_links;
}
