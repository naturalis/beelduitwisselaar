<?php
/**
 * @file
 * beelduitwisselaar_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function beelduitwisselaar_feature_default_fe_block_settings() {
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
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'nlsoort2016' => array(
        'region' => 'left_sidebar',
        'status' => 1,
        'theme' => 'nlsoort2016',
        'weight' => -23,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
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
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'nlsoort2016' => array(
        'region' => 'left_sidebar',
        'status' => 1,
        'theme' => 'nlsoort2016',
        'weight' => -21,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
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
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'nlsoort2016' => array(
        'region' => 'left_sidebar',
        'status' => 1,
        'theme' => 'nlsoort2016',
        'weight' => -24,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
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
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'nlsoort2016' => array(
        'region' => 'left_sidebar',
        'status' => 1,
        'theme' => 'nlsoort2016',
        'weight' => -23,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
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
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'nlsoort2016' => array(
        'region' => 'left_sidebar',
        'status' => 1,
        'theme' => 'nlsoort2016',
        'weight' => -22,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
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
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'nlsoort2016' => array(
        'region' => 'menucontainer',
        'status' => 1,
        'theme' => 'nlsoort2016',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-nlsoorter_footer'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'nlsoorter_footer',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'nlsoort2016' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'nlsoort2016',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
