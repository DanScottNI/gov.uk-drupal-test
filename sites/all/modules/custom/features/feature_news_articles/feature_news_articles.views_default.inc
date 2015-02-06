<?php
/**
 * @file
 * feature_news_articles.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_news_articles_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'news_article_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News Article View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Department for Education - GOV.UK';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: News Article Type */
  $handler->display->display_options['fields']['field_news_article_type']['id'] = 'field_news_article_type';
  $handler->display->display_options['fields']['field_news_article_type']['table'] = 'field_data_field_news_article_type';
  $handler->display->display_options['fields']['field_news_article_type']['field'] = 'field_news_article_type';
  $handler->display->display_options['fields']['field_news_article_type']['label'] = '';
  $handler->display->display_options['fields']['field_news_article_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_news_article_type']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_article_type']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_news_article_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_article_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_article_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['label'] = '';
  $handler->display->display_options['fields']['field_publish_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_publish_date']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_publish_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publish_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'long_format',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Article Image */
  $handler->display->display_options['fields']['field_article_image']['id'] = 'field_article_image';
  $handler->display->display_options['fields']['field_article_image']['table'] = 'field_data_field_article_image';
  $handler->display->display_options['fields']['field_article_image']['field'] = 'field_article_image';
  $handler->display->display_options['fields']['field_article_image']['label'] = '';
  $handler->display->display_options['fields']['field_article_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_article_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Sort criterion: Content: Is Sticky (field_is_sticky) */
  $handler->display->display_options['sorts']['field_is_sticky_value']['id'] = 'field_is_sticky_value';
  $handler->display->display_options['sorts']['field_is_sticky_value']['table'] = 'field_data_field_is_sticky';
  $handler->display->display_options['sorts']['field_is_sticky_value']['field'] = 'field_is_sticky_value';
  $handler->display->display_options['sorts']['field_is_sticky_value']['order'] = 'DESC';
  /* Sort criterion: Content: Sticky Weight (field_sticky_weight) */
  $handler->display->display_options['sorts']['field_sticky_weight_value']['id'] = 'field_sticky_weight_value';
  $handler->display->display_options['sorts']['field_sticky_weight_value']['table'] = 'field_data_field_sticky_weight';
  $handler->display->display_options['sorts']['field_sticky_weight_value']['field'] = 'field_sticky_weight_value';
  /* Sort criterion: Content: Publish Date (field_publish_date) */
  $handler->display->display_options['sorts']['field_publish_date_value']['id'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['sorts']['field_publish_date_value']['field'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['order'] = 'DESC';
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
    'news_article' => 'news_article',
  );

  /* Display: News Articles Block */
  $handler = $view->new_display('block', 'News Articles Block', 'block');
  $handler->display->display_options['display_comment'] = 'This block is used to display the news articles on the main page. You need to look in the theme directory, as the style for this block is completely overridden there.';
  $handler->display->display_options['display_description'] = 'Block that is used to display news articles on the front page.';
  $handler->display->display_options['block_description'] = 'Views: News Article Block';

  /* Display: News Articles Page */
  $handler = $view->new_display('page', 'News Articles Page', 'page_1');
  $handler->display->display_options['path'] = 'home';
  $export['news_article_view'] = $view;

  return $export;
}
