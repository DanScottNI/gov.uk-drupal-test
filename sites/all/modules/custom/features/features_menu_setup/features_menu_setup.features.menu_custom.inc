<?php
/**
 * @file
 * features_menu_setup.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function features_menu_setup_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-departments-and-policy.
  $menus['menu-departments-and-policy'] = array(
    'menu_name' => 'menu-departments-and-policy',
    'title' => 'Departments and Policy',
    'description' => 'This contains the links within the Departments and Policy menu at the bottom of the page.',
  );
  // Exported menu: menu-services-and-information.
  $menus['menu-services-and-information'] = array(
    'menu_name' => 'menu-services-and-information',
    'title' => 'Services and Information',
    'description' => 'This contains the links in the Services and Information page at the bottom of the page.',
  );
  // Exported menu: menu-top-links.
  $menus['menu-top-links'] = array(
    'menu_name' => 'menu-top-links',
    'title' => 'Top Links',
    'description' => 'These are links that appear next to the Departmental logo.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Departments and Policy');
  t('Main menu');
  t('Services and Information');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('These are links that appear next to the Departmental logo.');
  t('This contains the links in the Services and Information page at the bottom of the page.');
  t('This contains the links within the Departments and Policy menu at the bottom of the page.');
  t('Top Links');


  return $menus;
}
