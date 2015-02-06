<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<ul>
<?php foreach ($rows as $id => $row): ?>
  
  <li class="person person-excerpt <?php if ($id % 4 ==  0) print " clear-person";
     if ($classes_array[$id]) { print ' ' . $classes_array[$id]; } ?>">
  
    <?php print $row; ?>
  </li>
<?php endforeach; ?>
</ul>