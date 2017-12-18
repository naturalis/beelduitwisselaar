<?php
/**
 * @file
 * This file contains the footer for the theme.
 */
?>
<div class="row">
  <div class="col-md-12">
    <a class="toggleFooterLinks"><?php print t('In samenwerking met'); ?></a>
    <a class="toggleFooterLinks partners"><?php print t('Een initiatief van'); ?></a>
  </div>
</div>

<div class="row">
  <div class="col-md-12 cooperation">

    <div class="footerLinkContainer">
      <?php foreach ($columns as $column): ?>
      <ul class="footerLinks">
        <?php foreach ($column as $link): ?>
          <li>
            <?php print $link; ?>
          </li>
        <?php endforeach; ?>
      </ul>
      <?php endforeach; ?>
      <div class="logos">
        <a href="http://www.naturalis.nl" target="_blank" alt="Ga naar de website van Naturalis"><img src="<?php print $path_to_assets; ?>/img/naturalis-logo-white.svg" class="naturalis_logo"></a>
        <a href="http://www.eis-nederland.nl/" target="_blank" alt="Ga naar de website van Naturalis"><img src="<?php print $path_to_assets; ?>/img/eis_logo.png" class="eis_logo"></a>
      </div>
    </div>
  </div>
</div>

<div class="row">

  <div class="col-md-4 sitemapLinks mobile">
    <ul>
      <?php foreach ($sitemap as $link): ?>
        <li>
          <?php print $link; ?>
        </li>
      <?php endforeach; ?>
    </ul>
  </div>

  <div class="col-md-4 colofonLinks">
    <div class="colofonContainer">
      <div class="colofon">
        <?php print $colofon[0]; ?>
      </div>
    </div>
  </div>

  <div class="col-md-4 sitemapLinks desktop">
    <ul>
      <?php foreach ($sitemap as $link): ?>
        <li>
          <?php print $link; ?>
        </li>
      <?php endforeach; ?>
    </ul>
  </div>

  <div class="col-md-4 upLink">
    <a href="#" class="blue up"><?php print t('Naar boven'); ?></a>
  </div>
</div>
<div class="row"><span class="copyright">&copy; Naturalis 2005 - <?php print date('Y'); ?></span></div>