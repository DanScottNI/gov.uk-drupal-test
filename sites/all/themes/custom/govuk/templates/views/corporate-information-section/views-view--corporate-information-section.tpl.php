<?php

/**
 * @file
 * Main view template.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */
?>

<section class="corporate-information" id="corporate-info">
                <h1>Corporate information</h1>
  <div class="corporate-information-block">
      <?php if ($rows): ?>
    
      <?php print $rows; ?>
    
  <?php elseif ($empty): ?>
    
      <?php print $empty; ?>
    
  <?php endif; ?>

  </div>
  <p class="information">
                  Read about the types of information we routinely publish in our <a href="/government/organisations/department-for-education/about/publication-scheme">Publication scheme</a>.
                  Our <a href="/government/organisations/department-for-education/about/personal-information-charter">Personal information charter</a> explains how we treat your personal information.
                  Read our policy on <a href="/government/organisations/department-for-education/about/social-media-use">Social media use</a>.
                </p>
</section>
<?php /* class view */ ?>