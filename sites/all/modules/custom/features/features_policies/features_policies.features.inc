<?php
/**
 * @file
 * features_policies.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_policies_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function features_policies_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function features_policies_node_info() {
  $items = array(
    'policy' => array(
      'name' => t('Policy'),
      'base' => 'node_content',
      'description' => t('These are policies by this department.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
