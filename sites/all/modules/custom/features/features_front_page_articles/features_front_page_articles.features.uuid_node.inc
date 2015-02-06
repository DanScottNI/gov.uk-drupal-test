<?php
/**
 * @file
 * features_front_page_articles.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function features_front_page_articles_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'What We Do',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'f142ecb2-8fb5-43f1-bb71-6b00e713f9ee',
  'type' => 'article',
  'language' => 'und',
  'created' => 1415114839,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7506a0f3-d8c0-44b0-af39-56d1465708b2',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h2>What we do</h2>

The Department for Education is responsible for education and children’s services in England. We work to achieve a highly educated society in which opportunity is equal for children and young people, no matter what their background or family circumstances.

<h2>Responsibilities</h2>

We are responsible for:

<ul>
<li>teaching and learning for children in the early years and in primary schools</li>
<li>teaching and learning for young people under the age of 19 years in secondary schools and in further education</li>
<li>supporting professionals who work with children and young people</li>
<li>helping disadvantaged children and young people to achieve more</li>
<li>making sure that local services protect and support children</li>
</ul>

<h2>Our priorities</h2>

In 2014 to 2015, our priorities are to:

create a self-improving school-led system
develop a great workforce - with strong leadership
increase rigour and expectations of curriculums, assessment and behaviour
protect and increase opportunity for vulnerable children
support schools to prepare well-rounded young people for success in adult life
remove unnecessary regulation and bureaucracy
improve accountability
allocate funding more fairly and effectively

<h2>Who we are</h2>

We are a ministerial department with 3 executive agencies:

Education Funding Agency (EFA)
Standards and Testing Agency (STA)
National College for Teaching and Leadership (NCTL)

Our staff are based at our ministerial offices in London and in a number of other locations around England. We work closely with national and local agencies who look after children, with local authorities, and with the professionals who work in schools, children’s services and health services.',
        'summary' => 'The Department for Education is responsible for education and children’s services in England. We work to achieve a highly educated society in which opportunity is equal for children and young people, no matter what their background or family circumstances.

DfE is a ministerial department, supported by 9 agencies and public bodies.',
        'format' => 'filtered_html',
        'safe_value' => '<h2>What we do</h2>
<p>The Department for Education is responsible for education and children’s services in England. We work to achieve a highly educated society in which opportunity is equal for children and young people, no matter what their background or family circumstances.</p>
<h2>Responsibilities</h2>
<p>We are responsible for:</p>
<ul><li>teaching and learning for children in the early years and in primary schools</li>
<li>teaching and learning for young people under the age of 19 years in secondary schools and in further education</li>
<li>supporting professionals who work with children and young people</li>
<li>helping disadvantaged children and young people to achieve more</li>
<li>making sure that local services protect and support children</li>
</ul><h2>Our priorities</h2>
<p>In 2014 to 2015, our priorities are to:</p>
<p>create a self-improving school-led system<br />
develop a great workforce - with strong leadership<br />
increase rigour and expectations of curriculums, assessment and behaviour<br />
protect and increase opportunity for vulnerable children<br />
support schools to prepare well-rounded young people for success in adult life<br />
remove unnecessary regulation and bureaucracy<br />
improve accountability<br />
allocate funding more fairly and effectively</p>
<h2>Who we are</h2>
<p>We are a ministerial department with 3 executive agencies:</p>
<p>Education Funding Agency (EFA)<br />
Standards and Testing Agency (STA)<br />
National College for Teaching and Leadership (NCTL)</p>
<p>Our staff are based at our ministerial offices in London and in a number of other locations around England. We work closely with national and local agencies who look after children, with local authorities, and with the professionals who work in schools, children’s services and health services.</p>
',
        'safe_summary' => '<p>The Department for Education is responsible for education and children’s services in England. We work to achieve a highly educated society in which opportunity is equal for children and young people, no matter what their background or family circumstances.</p>
<p>DfE is a ministerial department, supported by 9 agencies and public bodies.</p>
',
      ),
    ),
  ),
  'field_is_front_page_content' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'field_appears_under' => array(),
  'rdf_mapping' => array(
    'field_image' => array(
      'predicates' => array(
        0 => 'og:image',
        1 => 'rdfs:seeAlso',
      ),
      'type' => 'rel',
    ),
    'field_tags' => array(
      'predicates' => array(
        0 => 'dc:subject',
      ),
      'type' => 'rel',
    ),
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-11-04 15:27:19 +0000',
);
  return $nodes;
}
