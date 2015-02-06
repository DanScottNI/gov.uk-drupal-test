<?php
/**
 * @file
 * features_publications.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function features_publications_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_publication_type'
  $field_bases['field_publication_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_publication_type',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Corporate Report' => 'Corporate Report',
        'Correspondence' => 'Correspondence',
        'Decision' => 'Decision',
        'Form' => 'Form',
        'Freedom of Information (FOI) Release' => 'Freedom of Information (FOI) Release',
        'Guidance' => 'Guidance',
        'Impact Assessment' => 'Impact Assessment',
        'Independent Report' => 'Independent Report',
        'Notice' => 'Notice',
        'Policy Paper' => 'Policy Paper',
        'Promotional Material' => 'Promotional Material',
        'Regulations' => 'Regulations',
        'Research and Analysis' => 'Research and Analysis',
        'Statutory Guidance' => 'Statutory Guidance',
        'Transparency Data' => 'Transparency Data',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
