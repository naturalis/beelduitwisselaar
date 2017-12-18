<?php
/**
 * @file
 * beeldfeature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function beeldfeature_taxonomy_default_vocabularies()
{
    return array(
        'groep' => array(
            'name' => 'Groep',
            'machine_name' => 'groep',
            'description' => '',
            'hierarchy' => 0,
            'module' => 'taxonomy',
            'weight' => 0,
        ),
        'licentie' => array(
            'name' => 'Licentie',
            'machine_name' => 'licentie',
            'description' => 'Licentie',
            'hierarchy' => 0,
            'module' => 'taxonomy',
            'weight' => 0,
        ),
    );
}
