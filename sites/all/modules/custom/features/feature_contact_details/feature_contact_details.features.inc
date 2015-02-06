<?php
/**
 * @file
 * feature_contact_details.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_contact_details_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_contact_details_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_contact_details_node_info() {
  $items = array(
    'contact_information' => array(
      'name' => t('Contact Information'),
      'base' => 'node_content',
      'description' => t('To be used for contact information for the department.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
