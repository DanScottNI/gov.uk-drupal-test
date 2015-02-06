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
<div class="contact-wrapper <?php print $classes; ?>">
  
    <section id="freedom-of-information">
      <h1 class="label">Make an FOI request</h1>
      <ol class="steps">
        <li>
        Read about the Freedom of Information (FOI) Act and <a href="https://www.gov.uk/make-a-freedom-of-information-request/the-freedom-of-information-act">how to make a request</a>
        </li>
        <li>Check <a href="/government/publications?departments%5B%5D=department-for-education&amp;publication_type=foi-releases">our previous releases</a> to see if we’ve already answered your question</li>
        <li>Make a new request by contacting us at:</li>
      </ol>
      <div class="org-contacts">
        <div class="addresses">
  <?php if ($rows): ?>
      <?php print $rows; ?>
  <?php elseif ($empty): ?>
      <?php print $empty; ?>
  <?php endif; ?>
        </div>
      </div>
  </section>
</div>
<?php /* class view */ ?>