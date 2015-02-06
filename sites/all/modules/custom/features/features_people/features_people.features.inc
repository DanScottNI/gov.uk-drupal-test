<?php
/**
 * @file
 * features_people.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_people_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function features_people_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function features_people_image_default_styles() {
  $styles = array();

  // Exported image style: people_portrait.
  $styles['people_portrait'] = array(
    'name' => 'people_portrait',
    'label' => 'People Portrait',
    'effects' => array(
      1 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 216,
          'height' => 140,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function features_people_node_info() {
  $items = array(
    'person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => t('Used to create an entry for Ministers, and members of the senior management team within the department.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
