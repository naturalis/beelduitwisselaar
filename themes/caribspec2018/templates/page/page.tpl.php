<?php
/**
 * @file
 * This file contains the page template.
 */
?>
<div id="top"></div>

<!-- Logo container-->
<div class="logoContainer">
    <div class="container" style="cursor:pointer;" onClick="window.open('/','_top')">
        <img src="<?= $logo ?>" class="logo">
        <div class="siteTitle">
            <h1><?= $site_title ?></h1>
            <h2><?= $site_slogan ?></h2>
        </div>
    </div>
</div>

<!-- Region menu container -->
<div class="topMenuContainer">
  <form id="inlineformsearch" name="inlineformsearch" action="<?= $search_url ?>" method="get">
    <div class="searchInputHolder">
      <input id="name" name="search" type="text" placeholder="<?= t('Snel zoeken op soort/taxon...') ?>" class="searchString" title="<?= t('Zoek op naam') ?>" value="" autocomplete="off">
      <a href="javascript:void(0)" class="close-suggestion-list close-suggestion-list-js">
        <i class="ion-close-round"></i>
      </a>
    </div>
    <div id="name_suggestion" class="suggestList"></div>
    </form>
  <div class="menu-search">
    <?php if (!empty($page['menucontainer'])): ?>
      <?php print render($page['menucontainer']); ?>
    <?php endif; ?>
  </div>
</div>
<!-- End region menu container -->

<!-- Main content area  -->
<div class="scrollContainer">

  <!-- Start of the carousel -->
  <?php if (!empty($page['headercarrousel'])): ?>
    <?php print render($page['headercarrousel']); ?>
  <?php endif; ?>
  <!-- End of the carousel -->

  <!-- Start of search -->
  <?php if (!empty($page['search_container'])): ?>
    <?php print render($page['search_container']); ?>
  <?php endif; ?>
  <!-- End of search -->

  <?php if (!empty($messages)): ?>
    <div id="messages"><div class="section clearfix">
        <?php print $messages; ?>
      </div></div> <!-- /.section, /#messages -->
  <?php endif; ?>

  <!-- Start of the content region -->
  <div class="contentContainer">
    <div class="content subpage">

      <?php if (!empty($page['left_sidebar'])): ?>
        <?php print render($page['left_sidebar']); ?>
      <?php endif; ?>

      <?php if (!empty($page['content'])): ?>
          <div class="whitebox">
              <h1><?= $title ?></h1>
              <?php print render($page['content']); ?>
          </div>
      <?php endif; ?>

    </div>
  </div>

  <!-- Start footer -->
  <div class="footerContainer">
    <div class="footer">
      <?php if (!empty($page['footer'])): ?>
        <?php print render($page['footer']); ?>
      <?php endif; ?>
    </div>
  </div>
  <!-- End footer -->

</div>
<!-- End of Main content area -->
