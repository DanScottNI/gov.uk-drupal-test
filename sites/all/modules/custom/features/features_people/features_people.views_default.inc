<?php
/**
 * @file
 * features_people.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function features_people_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ministers';
  $view->description = 'View that displays the published ministers for a department.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ministers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Ministers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_person_type',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['path']['element_type'] = '0';
  $handler->display->display_options['fields']['path']['element_label_type'] = '0';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Person Title */
  $handler->display->display_options['fields']['field_person_title']['id'] = 'field_person_title';
  $handler->display->display_options['fields']['field_person_title']['table'] = 'field_data_field_person_title';
  $handler->display->display_options['fields']['field_person_title']['field'] = 'field_person_title';
  $handler->display->display_options['fields']['field_person_title']['label'] = '';
  $handler->display->display_options['fields']['field_person_title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_person_title']['element_type'] = '0';
  $handler->display->display_options['fields']['field_person_title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_person_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_person_title']['type'] = 'text_plain';
  /* Field: Content: Responsibility Title */
  $handler->display->display_options['fields']['field_responsibility_title']['id'] = 'field_responsibility_title';
  $handler->display->display_options['fields']['field_responsibility_title']['table'] = 'field_data_field_responsibility_title';
  $handler->display->display_options['fields']['field_responsibility_title']['field'] = 'field_responsibility_title';
  $handler->display->display_options['fields']['field_responsibility_title']['label'] = '';
  $handler->display->display_options['fields']['field_responsibility_title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_responsibility_title']['element_type'] = '0';
  $handler->display->display_options['fields']['field_responsibility_title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_responsibility_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_responsibility_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_responsibility_title']['type'] = 'text_plain';
  /* Field: Content: Person Image */
  $handler->display->display_options['fields']['field_person_image']['id'] = 'field_person_image';
  $handler->display->display_options['fields']['field_person_image']['table'] = 'field_data_field_person_image';
  $handler->display->display_options['fields']['field_person_image']['field'] = 'field_person_image';
  $handler->display->display_options['fields']['field_person_image']['label'] = '';
  $handler->display->display_options['fields']['field_person_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_person_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_person_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_person_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_person_image']['settings'] = array(
    'image_style' => 'people_portrait',
    'image_link' => 'content',
  );
  /* Field: Content: Display Name */
  $handler->display->display_options['fields']['field_display_name']['id'] = 'field_display_name';
  $handler->display->display_options['fields']['field_display_name']['table'] = 'field_data_field_display_name';
  $handler->display->display_options['fields']['field_display_name']['field'] = 'field_display_name';
  $handler->display->display_options['fields']['field_display_name']['label'] = '';
  $handler->display->display_options['fields']['field_display_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_display_name']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_display_name']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_display_name']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_display_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_display_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_display_name']['hide_empty'] = TRUE;
  /* Field: Content: Person Type */
  $handler->display->display_options['fields']['field_person_type']['id'] = 'field_person_type';
  $handler->display->display_options['fields']['field_person_type']['table'] = 'field_data_field_person_type';
  $handler->display->display_options['fields']['field_person_type']['field'] = 'field_person_type';
  $handler->display->display_options['fields']['field_person_type']['label'] = '';
  $handler->display->display_options['fields']['field_person_type']['element_type'] = '0';
  $handler->display->display_options['fields']['field_person_type']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_person_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_type']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Weight (field_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'person' => 'person',
  );
  /* Filter criterion: Content: Person Type (field_person_type) */
  $handler->display->display_options['filters']['field_person_type_value']['id'] = 'field_person_type_value';
  $handler->display->display_options['filters']['field_person_type_value']['table'] = 'field_data_field_person_type';
  $handler->display->display_options['filters']['field_person_type_value']['field'] = 'field_person_type_value';
  $handler->display->display_options['filters']['field_person_type_value']['value'] = array(
    'Minister' => 'Minister',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['ministers'] = $view;

  $view = new view();
  $view->name = 'senior_management';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Senior Management';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Senior Management';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_type'] = '0';
  $handler->display->display_options['fields']['path']['element_label_type'] = '0';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Person Title */
  $handler->display->display_options['fields']['field_person_title']['id'] = 'field_person_title';
  $handler->display->display_options['fields']['field_person_title']['table'] = 'field_data_field_person_title';
  $handler->display->display_options['fields']['field_person_title']['field'] = 'field_person_title';
  $handler->display->display_options['fields']['field_person_title']['label'] = '';
  $handler->display->display_options['fields']['field_person_title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_person_title']['element_type'] = '0';
  $handler->display->display_options['fields']['field_person_title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_person_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_title']['element_default_classes'] = FALSE;
  /* Field: Content: Responsibility Title */
  $handler->display->display_options['fields']['field_responsibility_title']['id'] = 'field_responsibility_title';
  $handler->display->display_options['fields']['field_responsibility_title']['table'] = 'field_data_field_responsibility_title';
  $handler->display->display_options['fields']['field_responsibility_title']['field'] = 'field_responsibility_title';
  $handler->display->display_options['fields']['field_responsibility_title']['label'] = '';
  $handler->display->display_options['fields']['field_responsibility_title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_responsibility_title']['element_type'] = '0';
  $handler->display->display_options['fields']['field_responsibility_title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_responsibility_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_responsibility_title']['element_default_classes'] = FALSE;
  /* Field: Content: Person Image */
  $handler->display->display_options['fields']['field_person_image']['id'] = 'field_person_image';
  $handler->display->display_options['fields']['field_person_image']['table'] = 'field_data_field_person_image';
  $handler->display->display_options['fields']['field_person_image']['field'] = 'field_person_image';
  $handler->display->display_options['fields']['field_person_image']['label'] = '';
  $handler->display->display_options['fields']['field_person_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_person_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_person_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_person_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_person_image']['settings'] = array(
    'image_style' => 'people_portrait',
    'image_link' => 'content',
  );
  /* Field: Content: Display Name */
  $handler->display->display_options['fields']['field_display_name']['id'] = 'field_display_name';
  $handler->display->display_options['fields']['field_display_name']['table'] = 'field_data_field_display_name';
  $handler->display->display_options['fields']['field_display_name']['field'] = 'field_display_name';
  $handler->display->display_options['fields']['field_display_name']['label'] = '';
  $handler->display->display_options['fields']['field_display_name']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_display_name']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_display_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_display_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_display_name']['hide_empty'] = TRUE;
  /* Field: Content: Person Type */
  $handler->display->display_options['fields']['field_person_type']['id'] = 'field_person_type';
  $handler->display->display_options['fields']['field_person_type']['table'] = 'field_data_field_person_type';
  $handler->display->display_options['fields']['field_person_type']['field'] = 'field_person_type';
  $handler->display->display_options['fields']['field_person_type']['label'] = '';
  $handler->display->display_options['fields']['field_person_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_person_type']['element_type'] = '0';
  $handler->display->display_options['fields']['field_person_type']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_person_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_type']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Person Type (field_person_type) */
  $handler->display->display_options['sorts']['field_person_type_value']['id'] = 'field_person_type_value';
  $handler->display->display_options['sorts']['field_person_type_value']['table'] = 'field_data_field_person_type';
  $handler->display->display_options['sorts']['field_person_type_value']['field'] = 'field_person_type_value';
  $handler->display->display_options['sorts']['field_person_type_value']['order'] = 'DESC';
  /* Sort criterion: Content: Weight (field_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'person' => 'person',
  );
  /* Filter criterion: Content: Person Type (field_person_type) */
  $handler->display->display_options['filters']['field_person_type_value']['id'] = 'field_person_type_value';
  $handler->display->display_options['filters']['field_person_type_value']['table'] = 'field_data_field_person_type';
  $handler->display->display_options['filters']['field_person_type_value']['field'] = 'field_person_type_value';
  $handler->display->display_options['filters']['field_person_type_value']['value'] = array(
    'Senior Management' => 'Senior Management',
    'Senior Management (Secondary)' => 'Senior Management (Secondary)',
  );
  $handler->display->display_options['filters']['field_person_type_value']['reduce_duplicates'] = TRUE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['senior_management'] = $view;

  return $export;
}
