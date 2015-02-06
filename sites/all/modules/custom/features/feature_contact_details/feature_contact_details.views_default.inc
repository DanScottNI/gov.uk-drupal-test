<?php
/**
 * @file
 * feature_contact_details.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_contact_details_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'contact_information_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Contact Information View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contact Information View';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<br>';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Email / Uri / Website Address / Other */
  $handler->display->display_options['fields']['field_email_uri_other']['id'] = 'field_email_uri_other';
  $handler->display->display_options['fields']['field_email_uri_other']['table'] = 'field_data_field_email_uri_other';
  $handler->display->display_options['fields']['field_email_uri_other']['field'] = 'field_email_uri_other';
  $handler->display->display_options['fields']['field_email_uri_other']['label'] = '';
  $handler->display->display_options['fields']['field_email_uri_other']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_email_uri_other']['alter']['preserve_tags'] = '<a> <br>';
  $handler->display->display_options['fields']['field_email_uri_other']['element_type'] = '0';
  $handler->display->display_options['fields']['field_email_uri_other']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_email_uri_other']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email_uri_other']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Contact Weight (field_contact_weight) */
  $handler->display->display_options['sorts']['field_contact_weight_value']['id'] = 'field_contact_weight_value';
  $handler->display->display_options['sorts']['field_contact_weight_value']['table'] = 'field_data_field_contact_weight';
  $handler->display->display_options['sorts']['field_contact_weight_value']['field'] = 'field_contact_weight_value';
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
    'contact_information' => 'contact_information',
  );
  /* Filter criterion: Content: Is FoI Address (field_is_foi_address) */
  $handler->display->display_options['filters']['field_is_foi_address_value']['id'] = 'field_is_foi_address_value';
  $handler->display->display_options['filters']['field_is_foi_address_value']['table'] = 'field_data_field_is_foi_address';
  $handler->display->display_options['filters']['field_is_foi_address_value']['field'] = 'field_is_foi_address_value';
  $handler->display->display_options['filters']['field_is_foi_address_value']['value'] = array(
    0 => '0',
  );

  /* Display: General Enquiries */
  $handler = $view->new_display('block', 'General Enquiries', 'block');
  $export['contact_information_view'] = $view;

  $view = new view();
  $view->name = 'contact_information_view_foi';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Contact Information View (FoIs)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'FoI Request Contact Details';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<br>';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Email / Uri / Website Address / Other */
  $handler->display->display_options['fields']['field_email_uri_other']['id'] = 'field_email_uri_other';
  $handler->display->display_options['fields']['field_email_uri_other']['table'] = 'field_data_field_email_uri_other';
  $handler->display->display_options['fields']['field_email_uri_other']['field'] = 'field_email_uri_other';
  $handler->display->display_options['fields']['field_email_uri_other']['label'] = '';
  $handler->display->display_options['fields']['field_email_uri_other']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_email_uri_other']['alter']['preserve_tags'] = '<a> <br>';
  $handler->display->display_options['fields']['field_email_uri_other']['element_type'] = '0';
  $handler->display->display_options['fields']['field_email_uri_other']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_email_uri_other']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email_uri_other']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Contact Weight (field_contact_weight) */
  $handler->display->display_options['sorts']['field_contact_weight_value']['id'] = 'field_contact_weight_value';
  $handler->display->display_options['sorts']['field_contact_weight_value']['table'] = 'field_data_field_contact_weight';
  $handler->display->display_options['sorts']['field_contact_weight_value']['field'] = 'field_contact_weight_value';
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
    'contact_information' => 'contact_information',
  );
  /* Filter criterion: Content: Is FoI Address (field_is_foi_address) */
  $handler->display->display_options['filters']['field_is_foi_address_value']['id'] = 'field_is_foi_address_value';
  $handler->display->display_options['filters']['field_is_foi_address_value']['table'] = 'field_data_field_is_foi_address';
  $handler->display->display_options['filters']['field_is_foi_address_value']['field'] = 'field_is_foi_address_value';
  $handler->display->display_options['filters']['field_is_foi_address_value']['value'] = array(
    1 => '1',
  );

  /* Display: FoI Request Contact Details */
  $handler = $view->new_display('block', 'FoI Request Contact Details', 'block');
  $export['contact_information_view_foi'] = $view;

  return $export;
}
