<?php
/**
 * @file
 * features_menu_setup.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function features_menu_setup_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_announcements:https://www.gov.uk/government/announcements
  $menu_links['main-menu_announcements:https://www.gov.uk/government/announcements'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.gov.uk/government/announcements',
    'router_path' => '',
    'link_title' => 'Announcements',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_announcements:https://www.gov.uk/government/announcements',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: main-menu_consultations:https://www.gov.uk/government/publications?publication_filter_option=consultations
  $menu_links['main-menu_consultations:https://www.gov.uk/government/publications?publication_filter_option=consultations'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.gov.uk/government/publications?publication_filter_option=consultations',
    'router_path' => '',
    'link_title' => 'Consultations',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_consultations:https://www.gov.uk/government/publications?publication_filter_option=consultations',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_departments:https://www.gov.uk/government/organisations
  $menu_links['main-menu_departments:https://www.gov.uk/government/organisations'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.gov.uk/government/organisations',
    'router_path' => '',
    'link_title' => 'Departments',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_departments:https://www.gov.uk/government/organisations',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_get-involved:https://www.gov.uk/government/get-involved
  $menu_links['main-menu_get-involved:https://www.gov.uk/government/get-involved'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.gov.uk/government/get-involved',
    'router_path' => '',
    'link_title' => 'Get involved',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_get-involved:https://www.gov.uk/government/get-involved',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_how-government-works:https://www.gov.uk/government/how-government-works
  $menu_links['main-menu_how-government-works:https://www.gov.uk/government/how-government-works'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.gov.uk/government/how-government-works',
    'router_path' => '',
    'link_title' => 'How government works',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_how-government-works:https://www.gov.uk/government/how-government-works',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_policies:https://www.gov.uk/government/policies
  $menu_links['main-menu_policies:https://www.gov.uk/government/policies'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.gov.uk/government/policies',
    'router_path' => '',
    'link_title' => 'Policies',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'clear-child',
        'style' => '',
      ),
      'identifier' => 'main-menu_policies:https://www.gov.uk/government/policies',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_publications:https://www.gov.uk/government/publications
  $menu_links['main-menu_publications:https://www.gov.uk/government/publications'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.gov.uk/government/publications',
    'router_path' => '',
    'link_title' => 'Publications',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_publications:https://www.gov.uk/government/publications',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_statistics:https://www.gov.uk/government/statistics
  $menu_links['main-menu_statistics:https://www.gov.uk/government/statistics'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.gov.uk/government/statistics',
    'router_path' => '',
    'link_title' => 'Statistics',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_statistics:https://www.gov.uk/government/statistics',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_worldwide:https://www.gov.uk/government/world
  $menu_links['main-menu_worldwide:https://www.gov.uk/government/world'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.gov.uk/government/world',
    'router_path' => '',
    'link_title' => 'Worldwide',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_worldwide:https://www.gov.uk/government/world',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Announcements');
  t('Consultations');
  t('Departments');
  t('Get involved');
  t('How government works');
  t('Policies');
  t('Publications');
  t('Statistics');
  t('Worldwide');


  return $menu_links;
}
