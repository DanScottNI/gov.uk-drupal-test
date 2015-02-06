<?php
/**
 * @file
 * features_social_media_setup.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function features_social_media_setup_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'view_social_media_links';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'View: Social Media Links';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'View: Social Media Links';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Uri */
  $handler->display->display_options['fields']['field_uri_link']['id'] = 'field_uri_link';
  $handler->display->display_options['fields']['field_uri_link']['table'] = 'field_data_field_uri_link';
  $handler->display->display_options['fields']['field_uri_link']['field'] = 'field_uri_link';
  $handler->display->display_options['fields']['field_uri_link']['label'] = '';
  $handler->display->display_options['fields']['field_uri_link']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_uri_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_uri_link']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_uri_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_uri_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_uri_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_uri_link']['type'] = 'link_plain';
  /* Field: Content: Application Type */
  $handler->display->display_options['fields']['field_application_type']['id'] = 'field_application_type';
  $handler->display->display_options['fields']['field_application_type']['table'] = 'field_data_field_application_type';
  $handler->display->display_options['fields']['field_application_type']['field'] = 'field_application_type';
  $handler->display->display_options['fields']['field_application_type']['label'] = '';
  $handler->display->display_options['fields']['field_application_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_application_type']['element_type'] = '0';
  $handler->display->display_options['fields']['field_application_type']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_application_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_application_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_application_type']['type'] = 'list_key';
  /* Field: Content: Uri */
  $handler->display->display_options['fields']['field_uri_link_1']['id'] = 'field_uri_link_1';
  $handler->display->display_options['fields']['field_uri_link_1']['table'] = 'field_data_field_uri_link';
  $handler->display->display_options['fields']['field_uri_link_1']['field'] = 'field_uri_link';
  $handler->display->display_options['fields']['field_uri_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_uri_link_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_uri_link_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_uri_link_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_uri_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_uri_link_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_uri_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_uri_link_1']['type'] = 'link_title_plain';
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
    'social_media_link' => 'social_media_link',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['view_social_media_links'] = $view;

  return $export;
}
