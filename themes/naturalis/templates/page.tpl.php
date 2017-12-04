<!--.page -->
<div role="document" class="page">

  <!--.l-header region -->
  <header role="navigation" class="l-header" id="top-bar-wrapper" style="">

    <?php if ($top_bar): ?>
      <!--.top-bar -->
      <?php if ($top_bar_classes): ?>
	  
      <?php if ($header_everywhere): ?>
	  <div class="naturalis-header">
		  <div class="logoContainer" id="naturalis-logo">
			<img class="logo" src="<?php print "/".drupal_get_path('theme', 'naturalis_theme') . "/images/logo-small-pink.png" ?>"/>
		  </div>
          <div class="siteTitle">
		  <?php if ($header_everywhere_title): ?>
            <h1><?php print $header_everywhere_title; ?></h1>
          <?php endif; ?>
          <?php if ($header_everywhere_subtitle): ?>
            <h2 title="<?php print $header_everywhere_subtitle; ?>" class="site-slogan"><?php print $header_everywhere_subtitle; ?></h2>
          <?php endif; ?>
		  </div>
	  </div>
      <?php endif; ?>
      
	  <div class="<?php print $top_bar_classes; ?>">
      <?php endif; ?>
        <nav class="top-bar" data-topbar <?php print $top_bar_options; ?>>
          <ul class="title-area">
            <li class="name"><h1><?php print $linked_site_name; ?></h1></li>
            <li class="toggle-topbar menu-icon"><a href="#"><span><?php print $top_bar_menu_text; ?></span></a></li>
          </ul>
          <section class="top-bar-section">
            <?php if ($top_bar_main_menu) :?>
              <?php print $top_bar_main_menu; ?>
            <?php endif; ?>

            <?php if ($top_bar_secondary_menu) :?>
              <?php print $top_bar_secondary_menu; ?>
            <?php endif; ?>

            <?php if ($language_menu): ?>
                <?php print $language_menu; ?>
            <?php endif; ?>

            <ul class="right" id="help">
              <li>
 			   <?php if (isset($show_help) && $show_help): ?>
               <a href="/help">
                  <span class="icon-help"></span>
                </a>
 			  <?php endif; ?>
             </li>
			  <?php if ($show_search): ?>
              <li>
				<a class="search-toggle search-toggle-js" href="/search">
				   <img src="<?php print $naturalis_searchbutton; ?>">
				</a>
              </li>
			  <?php endif; ?>
            </ul>
          </section>
        </nav>
      <?php if ($top_bar_classes): ?>
      </div>
      <?php endif; ?>
      <!--/.top-bar -->
    <?php endif; ?>
  </header>
  <!--/.l-header -->
  
  <?php if ($header_everywhere): ?>
  <div style="margin-top:100px;" />
  <?php endif; ?>
 
    <!-- NATURALIS header -->
    <?php if ( $is_front ): ?>
      <!--.l-header-region -->
	  <section role="banner" class="l-header-region row show-for-medium-up <?php print $header_background; ?>" id="naturalis-header">
      <?php if ($header_use_image): ?>
			<img style="width:1180px; height:160px;" src="<?php print $header_image; ?>" title="<?php print $header_image_title; ?>" />
 
      <?php else: ?>

        <div class="medium-2 columns <?php print $logo_background; ?>" id="naturalis-logo">
          <img src="<?php print $naturalis_logo; ?>"/>
        </div>

        <div class="medium-6 columns" id="title-and-slogan">

          <?php if ($site_name): ?>
            <h1><?php print $site_name; ?></h1>
          <?php endif; ?>

          <?php if ($site_slogan): ?>
            <h2 title="<?php print $site_slogan; ?>" class="site-slogan"><?php print $site_slogan; ?></h2>
          <?php endif; ?>

        </div>

        <div class="medium-4 columns" id="logo">
        </div>
	  <?php endif; ?>

      </section>
      <!--/.l-header-region -->
    <?php endif; ?>

    <?php if (!empty($page['header'])): ?>
      <!--.l-header-region -->
      <section class="l-header-region row">
        <div class="large-12 columns">
          <?php print render($page['header']); ?>
        </div>
      </section>
      <!--/.l-header-region -->
    <?php endif; ?>



  <?php if (!empty($page['featured'])): ?>
    <!--/.featured -->
    <section class="l-featured row">
      <div class="large-12 columns">
        <?php print render($page['featured']); ?>
      </div>
    </section>
    <!--/.l-featured -->
  <?php endif; ?>

  <?php if ($messages && !$zurb_foundation_messages_modal): ?>
    <!--/.l-messages -->
    <section class="l-messages row">
      <div class="large-12 columns">
        <?php if ($messages): print $messages; endif; ?>
      </div>
    </section>
    <!--/.l-messages -->
  <?php endif; ?>

  <?php if (!empty($page['help'])): ?>
    <!--/.l-help -->
    <section class="l-help row">
      <div class="large-12 columns">
        <?php print render($page['help']); ?>
      </div>
    </section>
    <!--/.l-help -->
  <?php endif; ?>

  <main role="main" class="row l-main" style="margin: 0 auto; max-width: 994px;">
    <div class="<?php print $main_grid; ?> main columns">
      <?php if (!empty($page['highlighted'])): ?>
        <div class="highlight panel callout">
          <?php print render($page['highlighted']); ?>
        </div>
      <?php endif; ?>

      <a id="main-content"></a>


      <?php if (!empty($tabs)): ?>
        <?php if ($title && !$is_front): ?>
          <?php print render($title_prefix); ?>
          <h1 id="page-title" class="title"><?php print $title; ?></h1>
          <?php print render($title_suffix); ?>
        <?php endif; ?>

        <div class="tabs">
          <?php print render($tabs); ?>
          <?php if (!empty($tabs2)): print render($tabs2); endif; ?>
        </div>
      <?php endif; ?>

      <?php if ($action_links): ?>
        <ul class="action-links">
          <?php print render($action_links); ?>
        </ul>
      <?php endif; ?>

      <?php print render($page['content']); ?>
    </div>
    <!--/.main region -->

    <?php if (!empty($page['sidebar_first'])): ?>
      <aside role="complementary" class="<?php print $sidebar_first_grid; ?> sidebar-first columns sidebar">
        <?php print render($page['sidebar_first']); ?>
      </aside>
    <?php endif; ?>

    <?php if (!empty($page['sidebar_second'])): ?>
      <aside role="complementary" class="<?php print $sidebar_sec_grid; ?> sidebar-second columns sidebar">
        <?php print render($page['sidebar_second']); ?>
      </aside>
    <?php endif; ?>
  </main>
  <!--/.main-->

  <?php if (!empty($page['triptych_first']) || !empty($page['triptych_middle']) || !empty($page['triptych_last'])): ?>
    <!--.triptych-->
    <section class="l-triptych row">
      <div class="triptych-first large-4 columns">
        <?php print render($page['triptych_first']); ?>
      </div>
      <div class="triptych-middle large-4 columns">
        <?php print render($page['triptych_middle']); ?>
      </div>
      <div class="triptych-last large-4 columns">
        <?php print render($page['triptych_last']); ?>
      </div>
    </section>
    <!--/.triptych -->
  <?php endif; ?>

  <?php if (!empty($page['footer_firstcolumn']) || !empty($page['footer_secondcolumn']) || !empty($page['footer_thirdcolumn']) || !empty($page['footer_fourthcolumn'])): ?>

    <!--.footer-columns -->
    <section class="row l-footer-columns">
      <?php if (!empty($page['footer_firstcolumn'])): ?>
        <div class="footer-first large-3 columns">
          <?php print render($page['footer_firstcolumn']); ?>
        </div>
      <?php endif; ?>
      <?php if (!empty($page['footer_secondcolumn'])): ?>
        <div class="footer-second large-3 columns">
          <?php print render($page['footer_secondcolumn']); ?>
        </div>
      <?php endif; ?>
      <?php if (!empty($page['footer_thirdcolumn'])): ?>
        <div class="footer-third large-3 columns">
          <?php print render($page['footer_thirdcolumn']); ?>
        </div>
      <?php endif; ?>
      <?php if (!empty($page['footer_fourthcolumn'])): ?>
        <div class="footer-fourth large-3 columns">
          <?php print render($page['footer_fourthcolumn']); ?>
        </div>
      <?php endif; ?>
    </section>
    <!--/.footer-columns-->
  <?php endif; ?>

  <!-- .footer-->
  <?php if (!empty($page['footer'])): ?>
    <footer class="footer panel row" role="contentinfo">
      <div class="copyright large-12 columns">
        <?php print render($page['footer']); ?>
      </div>
    </footer>
  <?php endif; ?>
  <!--/.footer-->

  <!-- .bottom-bar-->
  <footer id="bottom-bar" role="contentinfo">

    <!-- #bottom-bar-top -->
    <?php if ($bottom_bar_top): ?>

      <div>
        <div class="row" id="bottom-bar-top">
          <?php if ($show_crumble && $breadcrumb): ?>
            <div class="medium-9 columns crumble">
              <?php echo(t("You are here") . ":"); ?>
              <?php print $breadcrumb; ?>
            </div>
          <?php endif; ?>

          <?php if ($show_links): ?>
            <div class="medium-3 columns external-links">
              <?php print $external_links_menu; ?>
            </div>
          <?php endif; ?>

        </div>
      </div>

    <?php endif; ?>
    <!-- /#bottom-bar-top -->

    <!-- #bottom-bar-bottom -->
    <?php if ($bottom_bar_bottom): ?>

      <div>
        <div class='row' id="bottom-bar-bottom">
          <?php if ($show_crumble): ?>
            <span class="copyright">
              &copy; Naturalis <?php echo date("Y"); ?>
            </span>
          <?php endif; ?>

          <?php if ($show_service_menu): ?>
            <?php print $service_menu; ?>
          </span>
          <?php endif; ?>

        </div>
      </div>

    <?php endif; ?>
    <!-- /#bottom-bar-top -->




  </footer>
  <!-- / .bottom bar-->



  <?php if ($messages && $zurb_foundation_messages_modal): print $messages; endif; ?>

</div>


<!--/.page -->
