<?php
/**
 * @file
 * This file contains the html for the front page template.
 */
?>
<div id="top"></div>

<!-- Logo container-->
<div class="logoContainer">
    <div class="container">
        <img src="<?= $logo ?>" alt="Naturalis" class="logo">
        <div class="siteTitle">
            <h1><?= $site_name ?></h1>
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

  <!-- Start of the content region -->
  <div class="contentContainer">
    <div class="content subpage">
      <?php if (!empty($page['left_sidebar'])): ?>
            <?php print render($page['left_sidebar']); ?>
      <?php endif; ?>

      <?php if (!empty($page['content'])): ?>
          <div class="whitebox">
            <?php print render($page['content']); ?>
          </div>
      <?php endif; ?>

      <!-- Newest photo and statistics -->
      <div class="statisticsNewestPhoto">
        <!-- <div class="row">
          <div class="col-md-4"> -->
            <?php if (!empty($page['below_content_left'])): ?>
              <?php print render($page['below_content_left']); ?>
            <?php endif; ?>
          <!-- </div> -->
          <div class="newestPhoto">
            <?php if (!empty($page['below_content_right'])): ?>
              <?php print render($page['below_content_right']); ?>
            <?php endif; ?>
          </div>
          <!-- </div> -->
        <!-- </div> -->
      </div>
      <!-- End of newest photo and statistics -->

    </div>
  </div>
  <!-- End of the content region -->

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
