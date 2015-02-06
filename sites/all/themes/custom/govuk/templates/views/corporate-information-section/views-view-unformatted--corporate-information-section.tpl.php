<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>

   <nav class="group sub_navigation" role="navigation">
                    <ul>
<?php foreach ($rows as $id => $row): ?>
  <li<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php print $row; ?>
  </li>
<?php endforeach; ?>
     </ul>
</nav> 