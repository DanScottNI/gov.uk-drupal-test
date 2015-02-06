<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php
  $init = '';
  // This is the index within the management types.
  $index = 0;
  
  // This is the modulus calculation. For the first set of management types,
  // this should be set to only two items. The only reason this code exists is
  // because the layout doesn't exactly fit with Drupal's setup. This code probably
  // wouldn't exist on our proper site.
  // There has to be at least one senior management primary user, and at least one
  // senior management secondary user. Otherwise the whole thing won't work. 
  $modulus = 1;
?>


<?php foreach ($rows as $id => $row): ?>
  <?php

  if ($init == '')
  {
    print '<ul class="management-primary">';
    $init = $view->render_field('field_person_type', $id);
  }
  else if ($init != $view->render_field('field_person_type', $id))
  {
    $index = 0;
    print '</ul>';
    print '<ul class="management-secondary">';
    $init = $view->render_field('field_person_type', $id);
    $modulus = 3;
  }

  ?>
  <li class="person person-excerpt <?php if ($index % $modulus ==  0) print " clear-person";
     if ($classes_array[$id]) { print ' ' . $classes_array[$id]; } ?>">
  
    <?php print $row; ?>
  </li>
<?php 
  $index++;
endforeach; ?>
</ul>