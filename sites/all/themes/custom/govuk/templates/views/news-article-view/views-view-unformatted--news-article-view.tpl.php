<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>

<section class="organisation-news featured-news items-6 " id="featured-documents">
<?php foreach ($rows as $id => $row): ?>
    <article<?php 
    print ' class="';
    
    if ($id == 0)
    {
      print 'feature first ';
    }
    if ($classes_array[$id]) 
    { 
      print $classes_array[$id];  
    } 
  
    print '"';
  
  ?>><div class="content">
    <?php print $row; ?>
    </div>
  </article>
<?php endforeach; ?>
</section>