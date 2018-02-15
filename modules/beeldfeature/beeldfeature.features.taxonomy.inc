<?php
/**
 * @file
 * beeldfeature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function beeldfeature_taxonomy_default_vocabularies() {
  return array(
    'groep' => array(
      'name' => 'Group',
      'machine_name' => 'groep',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'licentie' => array(
      'name' => 'License',
      'machine_name' => 'licentie',
      'description' => 'License',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
