<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php foreach ($rows as $id => $row): ?>
  <ol class="document-list <?php if ($classes_array[$id]) { print ' ' . $classes_array[$id] ;  } ?>">
    <?php print $row; ?>
  </ol>
<?php endforeach; ?>