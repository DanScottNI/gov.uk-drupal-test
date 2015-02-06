<?php
/**
 * @file
 * features_consultations.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function features_consultations_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-consultations-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'consultations-block',
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
        'region' => 'documents',
        'status' => 1,
        'theme' => 'govuk',
        'weight' => 0,
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
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
