<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>

  <header role="banner" id="global-header" class=" with-proposition">
    <div class="header-wrapper" id="header">
      <div class="header-global">
	  <?php if ($logo): ?>
	    <div class="header-logo">
          <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo" class="content">
          <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" /> GOV.UK
          </a>
		</div>
      <?php endif; ?>
	  </div>
	  <div class="header-proposition" id="main-menu-bar">
      <div class="content">
        <?php print render($page['main-menu-bar']); ?>
		  </div>
    </div>
	</div>  
  </header>

  <div id="global-header-bar">
    <div class="inner-block">
      <div class="header-bar" id="heading-block"></div>
    </div>
  </div>
  <!--end global-header-bar-->
  <div class="header-context group"><!-- deliberately empty --></div>
  
  <div id="whitehall-wrapper">
    <main id="content" role="main" class="whitehall-content">
      <div id="page" class="<?php if ($is_front) { print 'organisations-show'; } ?>">
        <div class="organisation department-for-education department-for-education-brand-colour ministerial-department" id="organisation_6">
          <?php 
  if ($is_front)
  {?>
          <div class="block-1 headings-block">
            <div class="inner-block">
              <header class="page-header">
                <h1>
                  <span class="organisation-logo organisation-logo-stacked-single-identity organisation-logo-stacked-single-identity-large">
                    <span><?php print $site_name; ?></span>
                  </span>
                </h1>
                <aside class="heading-extra" id="heading-block">
                  <?php print render($page['heading-block']); ?>
                </aside>
              </header>
            </div>
          </div>
          <?php 
  } 
          ?>
          <?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
          <?php if ($is_front): ?>
          <div class="block-2 has-social" id="content">
            <div class="inner-block">
              <?php endif; ?>
              <?php print render($page['content']); ?>
            <?php if ($is_front): ?></div>
          </div>
          <?php endif; ?>
          <?php if(!empty($page['content-2'])) : ?> 
            <div class="block-7 heading-block" id="content-2">
              <div class="inner-block">
                <?php print render($page['content-2']); ?>
              </div>
            </div>
          <?php endif; ?>

          <?php if(!empty($page['documents'])) : ?> 
          <div class="block documents-grid">
            <div class="inner-block">
              <h1 class="block-title">Documents</h1>
              <?php print render($page['documents']); ?>
            </div>
          </div>
          <?php endif; ?>
          
          <?php if(!empty($page['people'])) : ?> 
          <div class="block-9">
            <div class="inner-block" >
              <section id="who">
                <?php print render($page['people']); ?>
              </section>
            </div>
          </div>
          <?php endif; ?>

          <?php if(!empty($page['content-3'])) : ?> 
          <div class="block-10">
            <div class="inner-block">
              <?php print render($page['content-3']); ?>
            </div>
          </div>
          <?php endif; ?>
        </div>
      </div>
    </main>
  </div>
  
  <footer class="group js-footer"  role="contentinfo" id="footer">
    <div class="footer-wrapper">
      <div class="footer-categories" id="footer-1">
        <?php print render($page['footer-1']); ?>
      </div>
      <div class="footer-meta" id="footer-2">
        <div class="footer-meta-inner">
        <?php print render($page['footer-2']); ?>
        </div>
        <div class="copyright">
            <a href="https://www.nationalarchives.gov.uk/information-management/our-services/crown-copyright.htm">© Crown copyright</a>
        </div>
        
      </div>
    </div>
  </footer>
  