<?php
/**
 * @file
 * features_social_media_setup.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function features_social_media_setup_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-view_social_media_links-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'view_social_media_links-block',
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
        'region' => 'content',
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

  return $export;
}
