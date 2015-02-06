<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<ol class="policies document-list">
<?php foreach ($rows as $id => $row): ?>
  <li class="policy document-row " <?php if ($classes_array[$id]) { print ' ' . $classes_array[$id];  } ?>">
    <?php print $row; ?>
  </li>
<?php endforeach; ?>
</ol>