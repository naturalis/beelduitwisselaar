<?php
/**
 * @file
 * beeldfeature_blokken.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function beeldfeature_blokken_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Admin menu';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'bu_admin_block';
  $fe_block_boxes->body = '<fieldset class="block addon">
<div class="formrow">
<label for="admin">Admin</label>
</div>
<div class="filter">
<ul>
<li><a href="/grid-afbeeldingen"><i class="ion-android-apps"></i></a> <a href="/afbeeldingen">Nieuwe beelden</a> <?php $sqlnew = "select count(*) from {field_data_field_status} where field_status_value = 0";
echo "<span class=\'count\'>(" . db_query($sqlnew)->FetchField() . ")</span>";?></li>
<li><a href="/grid-afbeeldingen-expert-all"><i class="ion-android-apps"></i></a> 
<a href="/afbeeldingen-expert-all">Beelden bij validator</a> <?php $sqlnew = "select count(*) from {field_data_field_status} where field_status_value = 1";
echo "<span class=\'count\'>(" . db_query($sqlnew)->FetchField() . ")</span>";?></li>
<li><a href="/grid-afbeeldingen-geevalueerd-all"><i class="ion-android-apps"></i></a>
<a href="/afbeeldingen-geevalueerd-all">Gevalideerde beelden</a> <?php $sqlnew = "select count(*) from {field_data_field_status} where (field_status_value = 2) OR  (field_status_value = 3)";
echo "<span class=\'count\'>(" . db_query($sqlnew)->FetchField() . ")</span>";?></li>
<li><a href="/grid-afbeeldingen-wachtrij"><i class="ion-android-apps"></i></a> 
<a href="/afbeeldingen-wachtrij">Wachtrij</a> <?php $sqlnew = "select count(*) from {field_data_field_status} where field_status_value = 4";
echo "<span class=\'count\'>(" . db_query($sqlnew)->FetchField() . ")</span>";?></li>

<li><a href="/email-expert"><i class="ion-edit"></i> Lijst validatoren</a></li>
<li><a href="/email-fotograaf"><i class="ion-edit"></i> Lijst fotografen</a></li>
<li><a href="/mail-templates"><i class="ion-edit"></i> Mailsjablonen</a></li>
<li><a href="/mails"><i class="ion-edit"></i> Verstuurde mails</a></li>
</ul>
</div>

</fieldset>';

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
<label for="admin">Fotograaf</label>
</div>
<div class="filter">
<ul>
<li><a href="/node/add/beelduitwisselaar"><i class="ion-plus-circled"></i> Beelden toevoegen</a></li>
<li><a href="/afbeeldingen-user"><i class="ion-camera"></i> Beelden in behandeling</a>  <?php
  $sqlnew = "SELECT count(*) from {field_data_field_fotograaf} f, {field_data_field_status} s  WHERE f.entity_id = s.entity_id AND s.field_status_value < 5 AND f.field_fotograaf_target_id = " . $user->uid;
  echo "<span style=\'color:gray;font-size:9pt;\'>(" . db_query($sqlnew)->fetchField() . ")</span>";
?></li>
<li><a target="_blank" href="http://www.nederlandsesoorten.nl/linnaeus_ng/app/views/search/nsr_search_pictures.php?photographer=<?php echo($user->name); ?>&validator="><i class="ion-easel"></i> Gepubliceerde beelden</a></li>
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
  $fe_block_boxes->body = '<img src="/sites/all/files/icon/login.png" class="gridicon" border="no" /> <a href="/?q=user/login">Inloggen</a><br />
<img src="/sites/all/files/icon/details.png" class="gridicon" border="no" /> <a href="/?q=user/register">Registreren</a><br />
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
<li><a href="/user<?php echo($user->uid); ?>/edit"><i class="ion-edit"></i> Profiel aanpassen</a></li>
<li><a href="/user/logout"><i class="ion-paper-airplane"></i> Uitloggen</a></li>
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
?>
<fieldset class="block addon">
<div class="formrow">
<label for="admin">Validator</label>
</div>
<div class="filter">
<ul>
<li><a href="/afbeeldingen-expert"><i class="ion-camera"></i> Nieuwe beelden</a>
<?php
  $sqlnew = "select count(*) from {field_data_field_beeldexpert} b, {field_data_field_status} s where b.entity_id = s.entity_id AND  b.field_beeldexpert_target_id = " . $user->uid . " AND s.field_status_value = 1";
  echo "<span class=\'count\'>(" . db_query($sqlnew)->FetchField() . ")</span>";
?></li>
<li><a href="/afbeeldingen-geevalueerd"><i class="ion-camera"></i> Gevalideerde beelden</a> <?php
  $sqlnew = "select count(*) from {field_data_field_beeldexpert} b, {field_data_field_status} s where b.entity_id = s.entity_id AND b.field_beeldexpert_target_id = " . $user->uid . " AND (s.field_status_value = 2 OR s.field_status_value = 3)";
  echo "<span class=\'count\'>(" . db_query($sqlnew)->FetchField() . ")</span>";
?></li>
<li><a target="_blank" href="http://www.nederlandsesoorten.nl/linnaeus_ng/app/views/search/nsr_search_pictures.php?photographer=&validator=<?= $user->name ?>"><i class="ion-camera"></i> Gepubliceerde beelden</a></li><?php

}
?>
</ul>
</fieldset>';

  $export['bu_validator_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'nlsoorten menu';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'nlsoorten_menu';
  $fe_block_boxes->body = ' <div id="block-nlsoort-components-nlsoort-components-main-menu" class="block block-nlsoort-components menuHolder"> <a href="#" class="menuToggle"> <img src="/sites/all/themes/nlsoort2016/assets/img/menutoggle.png" alt="" /> <span class="mobileTitle">Nederlands Soortenregister</span> </a> <ul class="menu"><li class="home"><a href="http://www.nederlandsesoorten.nl/">Home</a><li><a href="/content/over-het-soortenregister">Over het Soortenregister</a><a class="toggle-submenu toggle-submenu-js" href="javascript:void(0);"><i class="ion-plus-round plus"></i> <i class="ion-minus-round min"></i></a><ol><li><a href="http://www.nederlandsesoorten.nl/content/doel-en-uitgangspunten">Doel en uitgangspunten</a></li><li><a href="http://www.nederlandsesoorten.nl/content/taxonomie">Taxonomie</a></li><li><a href="http://www.nederlandsesoorten.nl/content/voorkomen">Voorkomen</a></li><li><a href="http://www.nederlandsesoorten.nl/content/dna-barcoding">DNA Barcoding</a></li><li><a href="http://www.nederlandsesoorten.nl/content/wie-wie">Wie is wie?</a></li><li><a href="http://www.nederlandsesoorten.nl/content/citering">Citering</a></li><li><a href="http://natuurinbeeld.nederlandsesoorten.nl">Foto\'s uploaden</a></li><li><a href="http://www.nederlandsesoorten.nl/content/gebruiksvoorwaarden-fotos">Gebruiksvoorwaarden foto\'s</a></li></ol></li><li><a href="/exoten">Exoten</a><a class="toggle-submenu toggle-submenu-js" href="javascript:void(0);"><i class="ion-plus-round plus"></i> <i class="ion-minus-round min"></i></a><ol><li><a href="http://www.nederlandsesoorten.nl/content/inleiding">Inleiding</a></li><li><a href="http://www.nederlandsesoorten.nl/content/samenwerking">Samenwerking</a></li><li><a href="http://www.nederlandsesoorten.nl/content/definitie">Definitie</a></li><li><a href="http://www.nederlandsesoorten.nl/content/lijsten">Lijsten</a></li><li><a href="http://www.nederlandsesoorten.nl/content/soortinformatie">Soortinformatie</a></li><li><a href="http://www.nederlandsesoorten.nl/content/literatuur-en-websites">Literatuur en websites</a></li><li><a href="http://www.nederlandsesoorten.nl/content/exotenpaspoort">Exotenpaspoort</a></li></ol></li><li><a href="/determineren">Determineren</a><a class="toggle-submenu toggle-submenu-js" href="javascript:void(0);"><i class="ion-plus-round plus"></i> <i class="ion-minus-round min"></i></a><ol><li><a href="http://www.nederlandsesoorten.nl/content/dieren-en-rond-huis">Dieren in en rond huis</a></li><li><a href="http://www.nederlandsesoorten.nl/content/soortzoekers">Soortzoekers</a></li><li><a href="http://www.nederlandsesoorten.nl/content/tabellen-en-floras">Tabellen en flora\'s</a></li><li><a href="http://www.nederlandsesoorten.nl/content/zoekkaarten">Zoekkaarten</a></li></ol></li><li><a href="http://www.nederlandsesoorten.nl/linnaeus_ng/app/views/search/nsr_search.php">Zoeken</a><a class="toggle-submenu toggle-submenu-js" href="javascript:void(0);"><i class="ion-plus-round plus"></i> <i class="ion-minus-round min"></i></a><ol><li><a href="http://www.nederlandsesoorten.nl/linnaeus_ng/app/views/search/nsr_search_extended.php">Uitgebreid zoeken</a></li><li><a href="http://www.nederlandsesoorten.nl/linnaeus_ng/app/views/search/nsr_search_pictures.php">Foto\'s zoeken</a></li><li><a href="http://www.nederlandsesoorten.nl/linnaeus_ng/app/views/species/tree.php">Taxonomische boom</a></li></ol></li></li></ul><a href="javascript:void(0)" class="search-toggle search-toggle-js"><img src="/sites/all/themes/nlsoort2016/assets/img/search.svg" class="siteTitle" /></a></div> ';

  $export['nlsoorten_menu'] = $fe_block_boxes;

  return $export;
}
