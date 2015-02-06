<?php
/**
 * @file
 * features_people.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function features_people_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_responsibility|node|person|form';
  $field_group->group_name = 'group_responsibility';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Responsibility',
    'weight' => '36',
    'children' => array(
      0 => 'field_responsibility_title',
      1 => 'field_responsibility_information',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_responsibility|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_titles|node|person|form';
  $field_group->group_name = 'group_titles';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Titles',
    'weight' => '-10',
    'children' => array(
      0 => 'field_person_title',
      1 => 'field_display_name',
      2 => 'field_sub_heading',
      3 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-titles field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_titles|node|person|form'] = $field_group;

  return $export;
}
