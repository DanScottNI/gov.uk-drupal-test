<?php
/**
 * @file
 * features_consultations.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function features_consultations_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|consultations|form';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'consultations';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '35',
    'children' => array(
      0 => 'field_consultation_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-metadata field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_metadata|node|consultations|form'] = $field_group;

  return $export;
}
