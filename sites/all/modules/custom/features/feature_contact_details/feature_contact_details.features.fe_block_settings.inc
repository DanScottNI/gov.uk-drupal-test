<?php
/**
 * @file
 * feature_contact_details.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function feature_contact_details_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-89e7a6480bb7f64609f3aa1e4d9eef2e'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '89e7a6480bb7f64609f3aa1e4d9eef2e',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'govuk' => array(
        'region' => 'content-3',
        'status' => 1,
        'theme' => 'govuk',
        'weight' => 3,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-contact_information_view-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'contact_information_view-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'govuk' => array(
        'region' => 'content-3',
        'status' => 1,
        'theme' => 'govuk',
        'weight' => 1,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  return $export;
}
