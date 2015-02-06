<?php
/**
 * @file
 * feature_news_articles.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function feature_news_articles_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Press Release',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '3c70b156-3216-47e5-b5c3-aab3330c9611',
    'vocabulary_machine_name' => 'news_article_types',
  );
  $terms[] = array(
    'name' => 'Policy',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => 'aa686287-3d51-4d07-acc9-35e87a32fe2e',
    'vocabulary_machine_name' => 'news_article_types',
  );
  $terms[] = array(
    'name' => 'Guidance',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'c59abdb4-a164-407a-8cd5-152ce0ad8b20',
    'vocabulary_machine_name' => 'news_article_types',
  );
  $terms[] = array(
    'name' => 'Speech',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => 'd4b4dec8-701a-46b4-a707-37957b185ed7',
    'vocabulary_machine_name' => 'news_article_types',
  );
  $terms[] = array(
    'name' => 'Collection',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e8fb54a8-6b16-4478-81d8-334541e844ab',
    'vocabulary_machine_name' => 'news_article_types',
  );
  return $terms;
}
