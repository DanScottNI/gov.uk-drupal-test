<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php foreach ($rows as $id => $row): ?>
<div class="contact <?php if ($id == 0) { print ' contact-clear'; } ?> postal-address <?php if ($classes_array[$id]) { print ' ' . $classes_array[$id];  } ?>">
  <div class="content">
      
    <?php print $row; ?>
  </div>
</div>
<?php endforeach; ?>