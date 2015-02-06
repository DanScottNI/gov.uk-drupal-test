<?php
/**
 * @file
 * features_social_media_setup.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_social_media_setup_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function features_social_media_setup_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function features_social_media_setup_node_info() {
  $items = array(
    'social_media_link' => array(
      'name' => t('Social Media Link'),
      'base' => 'node_content',
      'description' => t('This is used for links to social media, such as facebook, twitter, etc.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
