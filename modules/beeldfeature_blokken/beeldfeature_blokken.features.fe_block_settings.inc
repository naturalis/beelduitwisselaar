<?php
/**
 * @file
 * beeldfeature_blokken.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function beeldfeature_blokken_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-bu_admin_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'bu_admin_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'admin*',
    'roles' => array(
      'administrator' => 3,
    ),
    'themes' => array(
      'nlsoort2016' => array(
        'region' => 'left_sidebar',
        'status' => 1,
        'theme' => 'nlsoort2016',
        'weight' => -23,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-bu_fotograaf_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'bu_fotograaf_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'admin*',
    'roles' => array(
      'fotograaf' => 4,
    ),
    'themes' => array(
      'nlsoort2016' => array(
        'region' => 'left_sidebar',
        'status' => 1,
        'theme' => 'nlsoort2016',
        'weight' => -21,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-bu_inlog_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'bu_inlog_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'admin*',
    'roles' => array(
      'anonymous user' => 1,
    ),
    'themes' => array(
      'nlsoort2016' => array(
        'region' => 'left_sidebar',
        'status' => 1,
        'theme' => 'nlsoort2016',
        'weight' => -24,
      ),
    ),
    'title' => 'Menu',
    'visibility' => 0,
  );

  $export['block-bu_logout_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'bu_logout_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'admin*',
    'roles' => array(),
    'themes' => array(
      'nlsoort2016' => array(
        'region' => 'left_sidebar',
        'status' => 1,
        'theme' => 'nlsoort2016',
        'weight' => -23,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-bu_validator_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'bu_validator_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'admin*',
    'roles' => array(
      'validator' => 5,
    ),
    'themes' => array(
      'nlsoort2016' => array(
        'region' => 'left_sidebar',
        'status' => 1,
        'theme' => 'nlsoort2016',
        'weight' => -22,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-nlsoorten_menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'nlsoorten_menu',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'nlsoort2016' => array(
        'region' => 'menucontainer',
        'status' => 1,
        'theme' => 'nlsoort2016',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
