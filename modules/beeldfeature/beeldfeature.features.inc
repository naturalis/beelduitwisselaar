<?php
/**
 * @file
 * beeldfeature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function beeldfeature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function beeldfeature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function beeldfeature_node_info() {
  $items = array(
    'beelduitwisselaar' => array(
      'name' => t('Beelduitwisselaar'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel - Gefotografeerd object en naam fotograaf'),
      'help' => t('Plaatsing van beelden geschiedt onder de voorwaarden zoals beschreven op deze site.'),
    ),
  );
  return $items;
}
