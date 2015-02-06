<?php 

function govuk_preprocess_page(&$vars, $hook) {
  if (isset($vars['node']->type)) {
    // If the content type's machine name is "my_machine_name" the file
    // name will be "page--my-machine-name.tpl.php".
    $vars['theme_hook_suggestions'][] = 'page__' . $vars['node']->type;
  }
}

 function govuk_preprocess_html(&$variables) {
  $variables['classes_array'][] = 'website';
  $variables['classes_array'][] = 'government';
}

function govuk_menu_link__menu_top_links(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li>' . $output . $sub_menu . "</li>\n";
}

function govuk_menu_tree__menu_top_links($variables) {
  return '<ul class="top-tasks featured-links">' . $variables['tree'] . '</ul>';
}

/*
  These functions are related to theming the main menu (which is the menu at the top of the page)
*/
function govuk_menu_tree__main_menu($variables) {
/*<nav id="proposition-menu" class="no-proposition-name"><ul id="proposition-links">
<li><a href="/government/organisations" class="active">Departments</a></li>
      <li><a href="/government/world" class="">Worldwide</a></li>
      <li><a href="/government/how-government-works" class="">How government works</a></li>
      <li><a href="/government/get-involved" class="">Get involved</a></li>
      <li class="clear-child"><a href="/government/policies" class="">Policies</a></li>
      <li><a href="/government/publications" class="">Publications</a></li>
      <li><a href="/government/publications?publication_filter_option=consultations" class="">Consultations</a></li>
      <li><a href="/government/statistics" class="">Statistics</a></li>
      <li><a href="/government/announcements" class="">Announcements</a></li>
    </ul></nav>*/

  return '<nav id="proposition-menu" class="no-proposition-name"><ul id="proposition-links">' . $variables['tree'] . '</ul></nav>';
}

function govuk_menu_link__main_menu(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);

  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}