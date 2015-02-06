<?php
/**
 * @file
 * features_statistics.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_statistics_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function features_statistics_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function features_statistics_node_info() {
  $items = array(
    'statistics' => array(
      'name' => t('Statistics'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
