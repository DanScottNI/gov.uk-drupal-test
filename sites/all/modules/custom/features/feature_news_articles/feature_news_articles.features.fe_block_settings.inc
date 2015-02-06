<?php
/**
 * @file
 * feature_news_articles.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function feature_news_articles_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['system-main'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'govuk' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'govuk',
        'weight' => 1,
      ),
      'rubik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-news_article_view-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'news_article_view-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'govuk' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'govuk',
        'weight' => -4,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  return $export;
}
