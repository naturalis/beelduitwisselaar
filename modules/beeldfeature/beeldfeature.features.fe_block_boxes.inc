<?php
/**
 * @file
 * beeldfeature.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function beeldfeature_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Admin menu';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'bu_admin_block';
  $fe_block_boxes->body = '<?php
    $counts = beelduitwisselaar_counts();
?>
<fieldset class="block addon">
<div class="formrow">
<label for="admin">Admin</label>
</div>
<div class="filter">
<ul>
<li><a href="/grid-afbeeldingen?combine=&order=created&sort=desc"><i class="ion-android-apps"></i></a> <a href="/afbeeldingen?combine=&order=created&sort=desc">New images</a> <span class=\'count\'>(<?= $counts[\'new\'] ?>)</span></li>
<li><a href="/grid-afbeeldingen-expert-all?combine=&order=field_created&sort=desc"><i class="ion-android-apps"></i></a> 
<a href="/afbeeldingen-expert-all?combine=&order=field_created&sort=desc">Images being validated</a> <span class=\'count\'>(<?= $counts[\'queued\'] ?>)</span></li>
<li><a href="/grid-afbeeldingen-geevalueerd-all?combine=&order=created&sort=desc"><i class="ion-android-apps"></i></a>
<a href="/afbeeldingen-geevalueerd-all?combine=&order=created&sort=desc">Confirmed images</a> <span class=\'count\'>(<?= $counts[\'validated\'] ?>)</span></li> 
<li><a href="/grid-afbeeldingen-wachtrij?combine=&order=field_created&sort=desc"><i class="ion-android-apps"></i></a> 
<a href="/afbeeldingen-wachtrij?combine=&order=field_created&sort=desc">Queued</a> <span class=\'count\'>(<?= $counts[\'waiting\'] ?>)</span></li> 

<li><a href="/email-expert"><i class="ion-edit"></i> List of validators</a></li>
<li><a href="/email-fotograaf"><i class="ion-edit"></i> List of photographers</a></li>
<li><a href="/mail-templates"><i class="ion-edit"></i> Mailtemplates</a></li>
<li><a href="/mails"><i class="ion-edit"></i> Mails sent</a></li>
</ul>
</div>

</fieldset>
';

  $export['bu_admin_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Fotograaf menu';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'bu_fotograaf_block';
  $fe_block_boxes->body = '<?php
global $user;
if ($user) {
?>
<fieldset class="block addon">
<div class="formrow">
<label for="admin">Photographer</label>
</div>
<div class="filter">
<ul>
<li><a href="/node/add/beelduitwisselaar"><i class="ion-plus-circled"></i> Add Image</a></li>
<li><a href="/afbeeldingen-user"><i class="ion-camera"></i> Images being processed</a>  <?php
  $sqlnew = "SELECT count(*) from {field_data_field_fotograaf} f, {field_data_field_status} s  WHERE f.entity_id = s.entity_id AND s.field_status_value < 5 AND f.field_fotograaf_target_id = " . $user->uid;
  echo "<span style=\'color:gray;font-size:9pt;\'>(" . db_query($sqlnew)->fetchField() . ")</span>";
?></li>
<li><a target="_blank" href="//www.dutchcaribbeanspecies.nl/linnaeus_ng/app/views/search/nsr_search_pictures.php?photographer=<?php echo($user->name); ?>&validator="><i class="ion-easel"></i> Published images</a></li>
</ul>
</fieldset>
<?php
}
?>';

  $export['bu_fotograaf_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'inlogmenu';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'bu_inlog_block';
  $fe_block_boxes->body = '<fieldset class="block addon">
<div class="formrow">
<label for="admin">Login</label>
</div>
<div class="filter">
<ul>
<li><a href="/user/login"><i class="ion-locked"></i> Login</a></li>
<li><a href="/user/register"><i class="ion-person-add"></i> Register</a></li>
</ul>
</div>
';

  $export['bu_inlog_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'uitlogmenu';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'bu_logout_block';
  $fe_block_boxes->body = '<?php 
    global $user;
    drupal_add_library(\'system\', \'jquery.cookie\');
    if ($user->uid) {
?>
<fieldset class="block addon">
<div class="formrow">
<label for="admin"><?= $user->name ?></label>
</div>
<div class="filter">
<ul>
<li><a href="/user/<?php echo($user->uid); ?>/edit"><i class="ion-edit"></i> Edit profile</a></li>
<li><a href="/user/logout"><i class="ion-paper-airplane"></i> Logout</a></li>
</ul>
</div>
</fieldset>
<?php 
} 
?>';

  $export['bu_logout_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Validator menu';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'bu_validator_block';
  $fe_block_boxes->body = '<?php
global $user;
if ($user) {
    $counts = beelduitwisselaar_validator_counts();
?>
<fieldset class="block addon">
<div class="formrow">
<label for="admin">Validator</label>
</div>
<div class="filter">
<ul>
<li><a href="/afbeeldingen-expert?order=created&sort=asc"><i class="ion-camera"></i> New images</a> <span class=\'count\'>(<?= $counts[\'queued\'] ?>)</span></li>
<li><a href="/afbeeldingen-geevalueerd"><i class="ion-camera"></i> Validated images</a> <span class=\'count\'>(<?= $counts[\'validated\'] ?>)</span></li>
<li><a target="_blank" href="//www.dutchcaribbeanspecies.org/linnaeus_ng/app/views/search/nsr_search_pictures.php?photographer=&validator=<?= $user->name ?>"><i class="ion-camera"></i> Published images</a></li><?php

}
?>
</ul>
</fieldset>
';

  $export['bu_validator_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer of Caribbean Species';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'caribspec_footer';
  $fe_block_boxes->body = ' <div id="block-nlsoort-components-nlsoort-components-footer" class="block block-nlsoort-components footerContainer"> <div class="footer"> <div class="row"> <div class="col-md-12"> <a class="toggleFooterLinks">Partner organisations and related websites</a> <a class="toggleFooterLinks partners">An initiative of</a> </div> </div> <div class="row"> <div class="col-md-12 cooperation"> <div class="footerLinkContainer"> <ul class="footerLinks"> <li> <a target="_blank" rel="external" href="http://www.cnsi.nl/">Caribbean Netherlands Science Institute</a> </li> <li> <a target="_blank" rel="external" href="http://www.dcbd.nl/">Dutch Caribbean Biodiversity Database</a> </li> <li> <a target="_blank" rel="external" href="http://www.dcnanature.org/">Dutch Caribbean Nature Alliance</a> </li> <li> <a target="_blank" rel="external" href="http://www.arubanationalpark.org/main/">Parke Nacional Arikok Aruba</a> </li> <li> <a target="_blank" rel="external" href="http://stinapabonaire.org/">STINAPA Bonaire National Parks Foundation</a> </li> <li> <a target="_blank" rel="external" href="http://www.carmabi.org/">CARMABI, Curaçao</a> </li> <li> <a target="_blank" rel="external" href="http://www.sabapark.org/">Saba Conservation Foundation</a> </li> <li> <a target="_blank" rel="external" href="http://www.statiapark.org/">St. Eustatius National Parks</a> </li> <li> <a target="_blank" rel="external" href="http://www.naturefoundationsxm.org/">Sint Maarten Nature Foundation</a> </li> <li> <a target="_blank" rel="external" href="http://www.anemoon.org/">Stichting ANEMOON</a> </li> </ul> <ul class="footerLinks"> <li> <a target="_blank" rel="external" href="/"></a> </li> </ul> <ul class="footerLinks"> <li> <a target="_blank" rel="external" href="/"></a> </li> </ul> <div class="logos"> <a href="http://www.naturalis.nl" target="_blank" alt="Go to Naturalis"><img src="/sites/all/themes/caribbean/assets/img/naturalis-logo-white.svg" class="naturalis_logo" width="50%" /></a> </div> </div> </div> </div> <div class="row"> <div class="col-md-4 sitemapLinks mobile"> <ul> <li> <a href="/sitemap"></a> </li> <li> <a href="/"></a> </li> <li> <a href="/"></a> </li> <li> <a href="/"></a> </li> </ul> </div> <div class="col-md-4 colofonLinks"> <div class="colofonContainer"> <div class="colofon"> <a class="blue" href="/"></a> </div> </div> </div> <div class="col-md-4 sitemapLinks desktop"> <ul> <li> <a href="/sitemap"></a> </li> <li> <a href="/"></a> </li> <li> <a href="/"></a> </li> <li> <a href="/"></a> </li> </ul> </div> <div class="col-md-4 upLink"> <a href="#" class="blue up">Go up</a> </div> </div> <div class="row"><span class="copyright">&copy; Naturalis 2018</span></div> </div> </div> ';

  $export['caribspec_footer'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'nlsoorten menu';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'caribspecies_menu';
  $fe_block_boxes->body = ' <div id="block-nlsoort-components-nlsoort-components-main-menu" class="block block-nlsoort-components menuHolder"> <a href="#" class="menuToggle"> <img src="/sites/all/themes/caribbean/assets/img/menutoggle.png" alt="" /> <span class="mobileTitle">Dutch Caribbean Species Register</span> </a> <ul class="menu"><li class="home"><a href="http://www.dutchcaribbeanspecies.org/">Home</a><li><a href="/content/about-project">About this project</a><a class="toggle-submenu toggle-submenu-js" href="javascript:void(0);"><i class="ion-plus-round plus"></i> <i class="ion-minus-round min"></i></a><ol><li><a href="http://www.dutchcaribbeanspecies.org/content/geography-dutch-caribbean">Geography of the Dutch Caribbean</a></li><li><a href="http://www.dutchcaribbeanspecies.org/content/presence-and-distribution-information">Presence and distribution information</a></li><li><a href="http://www.dutchcaribbeanspecies.org/content/citation">Citation</a></li><li><a href="http://www.dutchcaribbeanspecies.org/content/terms-use-photos">Terms of use for photos</a></li></ol></li><li><a href="/content/getting-involved">Getting involved</a></li><li><a href="http://www.dutchcaribbeanspecies.org/linnaeus_ng/app/views/search/nsr_search_extended.php?epi=1">Search</a><a class="toggle-submenu toggle-submenu-js" href="javascript:void(0);"><i class="ion-plus-round plus"></i> <i class="ion-minus-round min"></i></a><ol><li><a href="http://www.dutchcaribbeanspecies.org/linnaeus_ng/app/views/search/nsr_search_extended.php?epi=1">Extensive search</a></li><li><a href="http://www.dutchcaribbeanspecies.org/linnaeus_ng/app/views/search/nsr_search_pictures.php">Photo search</a></li><li><a href="http://www.dutchcaribbeanspecies.org/linnaeus_ng/app/views/species/tree.php">Taxonomic tree</a></li></ol></li></li></ul><a href="javascript:void(0)" class="search-toggle search-toggle-js"><img src="/sites/all/themes/nlsoort2016/assets/img/search.svg" class="siteTitle" /></a></div> ';

  $export['caribspecies_menu'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer van NL Soorten';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'nlsoorter_footer';
  $fe_block_boxes->body = ' <div id="block-nlsoort-components-nlsoort-components-footer" class="block block-nlsoort-components footerContainer"> <div class="footer"> <div class="row"> <div class="col-md-12"> <a class="toggleFooterLinks">In samenwerking met</a> <a class="toggleFooterLinks partners">Een initiatief van</a> </div> </div> <div class="row"> <div class="col-md-12 cooperation"> <div class="footerLinkContainer"> <ul class="footerLinks"> <li> <a target="_blank" rel="external" href="https://www.rijksoverheid.nl/ministeries/ministerie-van-economische-zaken">Ministerie van Economische Zaken</a> </li> <li> <a target="_blank" rel="external" href="http://www.eol.org/">Ecyclopedia of Life</a> </li> <li> <a target="_blank" rel="external" href="http://www.uva.nl/">Universiteit van Amsterdam</a> </li> <li> <a target="_blank" rel="external" href="http://www.cbs.knaw.nl/">Centraal Bureau voor Schimmelcultures</a> </li> <li> <a target="_blank" rel="external" href="http://www.blwg.nl/">Bryologische en Lichenologische Werkgroep - KNNV</a> </li> <li> <a target="_blank" rel="external" href="http://www.mycologen.nl/">Nederlandse Mycologische Vereniging</a> </li> <li> <a target="_blank" rel="external" href="http://www.ndff.nl/">Nationale Databank Flora en Fauna</a> </li> <li> <a target="_blank" rel="external" href="http://www.wur.nl/marine-research/">Wageningen Marine Research</a> </li> </ul> <ul class="footerLinks"> <li> <a target="_blank" rel="external" href="http://www.faunaeur.org/">Fauna Europaea</a> </li> <li> <a target="_blank" rel="external" href="http://www.marinespecies.org/">World Register of Marine Species</a> </li> <li> <a target="_blank" rel="external" href="https://www.nvwa.nl/">Nederlandse Voedsel- en Warenautoriteit</a> </li> <li> <a target="_blank" rel="external" href="http://www.nlbif.nl/">NLBIF</a> </li> <li> <a target="_blank" rel="external" href="http://www.cbs.nl/">Centraal Bureau voor Statistiek</a> </li> <li> <a target="_blank" rel="external" href="http://www.nev.nl/">Nederlandse Entomologische Vereniging</a> </li> <li> <a target="_blank" rel="external" href="http://www.spirula.nl/">Nederlandse Malacologische Vereniging</a> </li> </ul> <ul class="footerLinks"> <li> <a target="_blank" rel="external" href="http://waarneming.nl/">Waarneming.nl</a> </li> <li> <a target="_blank" rel="external" href="http://www.floron.nl/">FLORON</a> </li> <li> <a target="_blank" rel="external" href="http://www.anemoon.org/">Stichting Anemoon</a> </li> <li> <a target="_blank" rel="external" href="http://www.vlinderstichting.nl/">De Vlinderstichting</a> </li> <li> <a target="_blank" rel="external" href="http://www.sovon.nl/">Sovon Vogelonderzoek Nederland</a> </li> <li> <a target="_blank" rel="external" href="http://www.eis-nederland.nl">EIS Kenniscentrum Insecten en andere ongewervelden</a> </li> <li> <a target="_blank" rel="external" href="http://www.ravon.nl/">RAVON</a> </li> <li> <a target="_blank" rel="external" href="http://www.zoogdiervereniging.nl/">Zoogdiervereniging</a> </li> </ul> <div class="logos"> <a href="http://www.naturalis.nl" target="_blank" alt="Ga naar de website van Naturalis"><img src="/sites/all/themes/nlsoort2016/assets/img/naturalis-logo-white.svg" class="naturalis_logo" /></a> <a href="http://www.eis-nederland.nl/" target="_blank" alt="Ga naar de website van Naturalis"><img src="/sites/all/themes/nlsoort2016/assets/img/eis_logo.png" class="eis_logo" /></a> </div> </div> </div> </div> <div class="row"> <div class="col-md-4 sitemapLinks mobile"> <ul> <li> <a href="/content/sitemap">Sitemap</a> </li> <li> <a href="/content/links">Links</a> </li> <li> <a href="/content/english">English</a> </li> <li> <a href="/content/contact">Contact</a> </li> </ul> </div> <div class="col-md-4 colofonLinks"> <div class="colofonContainer"> <div class="colofon"> <a class="blue" href="/content/colofon">Colofon & Disclaimer</a> </div> </div> </div> <div class="col-md-4 sitemapLinks desktop"> <ul> <li> <a href="/content/sitemap">Sitemap</a> </li> <li> <a href="/content/links">Links</a> </li> <li> <a href="/content/english">English</a> </li> <li> <a href="/content/contact">Contact</a> </li> </ul> </div> <div class="col-md-4 upLink"> <a href="#" class="blue up">Naar boven</a> </div> </div> <div class="row"><span class="copyright">&copy; Naturalis 2005 - 2017</span></div> </div> </div> ';

  $export['nlsoorter_footer'] = $fe_block_boxes;

  return $export;
}
