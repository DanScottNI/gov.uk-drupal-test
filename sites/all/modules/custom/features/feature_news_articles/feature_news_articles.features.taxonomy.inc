<?php
/**
 * @file
 * feature_news_articles.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function feature_news_articles_taxonomy_default_vocabularies() {
  return array(
    'news_article_types' => array(
      'name' => 'News Article Types',
      'machine_name' => 'news_article_types',
      'description' => 'The types of news articles available',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
