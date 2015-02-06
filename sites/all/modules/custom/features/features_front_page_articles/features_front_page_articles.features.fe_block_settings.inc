<?php
/**
 * @file
 * features_front_page_articles.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function features_front_page_articles_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-61d0e07b18513538c8e489a82ab8ef75'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '61d0e07b18513538c8e489a82ab8ef75',
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
        'weight' => 2,
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

  $export['views-front_page_view-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'front_page_view-block',
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
        'weight' => 2,
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
