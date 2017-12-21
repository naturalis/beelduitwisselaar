<?php
/**
 * @file
 * beeldfeature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function beeldfeature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['beelduitwisselaar-beelduitwisselaar_block'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'beelduitwisselaar_block',
    'module' => 'beelduitwisselaar',
    'node_types' => array(),
    'pages' => 'field-collection/field-afbeeldingen/*/edit',
    'roles' => array(
      'administrator' => 3,
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
        'region' => 'content',
        'status' => 1,
        'theme' => 'nlsoort2016',
        'weight' => -20,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['beelduitwisselaar-beelduitwisselaar_imgblock'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'beelduitwisselaar_imgblock',
    'module' => 'beelduitwisselaar',
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
        'region' => 'content',
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
    'title' => '',
    'visibility' => 0,
  );

  $export['beelduitwisselaar-beelduitwisselaar_userblock'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'beelduitwisselaar_userblock',
    'module' => 'beelduitwisselaar',
    'node_types' => array(),
    'pages' => 'node/add/beelduitwisselaar',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'nlsoort2016' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'nlsoort2016',
        'weight' => -19,
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

  $export['boxes-boxes_add__simple'] = array(
    'cache' => -2,
    'custom' => 0,
    'delta' => 'boxes_add__simple',
    'module' => 'boxes',
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
        'region' => '',
        'status' => 0,
        'theme' => 'nlsoort2016',
        'weight' => -9,
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

  $export['devel-execute_php'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'execute_php',
    'module' => 'devel',
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
        'region' => '',
        'status' => 0,
        'theme' => 'nlsoort2016',
        'weight' => -7,
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

  $export['devel-switch_user'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'switch_user',
    'module' => 'devel',
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
        'region' => '',
        'status' => 0,
        'theme' => 'nlsoort2016',
        'weight' => 5,
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

  $export['locale-language'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'language',
    'module' => 'locale',
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
        'region' => '',
        'status' => 0,
        'theme' => 'nlsoort2016',
        'weight' => 8,
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

  $export['menu-devel'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'devel',
    'module' => 'menu',
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
        'region' => '',
        'status' => 0,
        'theme' => 'nlsoort2016',
        'weight' => 3,
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

  $export['menu-features'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'features',
    'module' => 'menu',
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
        'region' => '',
        'status' => 0,
        'theme' => 'nlsoort2016',
        'weight' => -5,
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

  $export['nlsoort_components-nlsoort_components_footer'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'nlsoort_components_footer',
    'module' => 'nlsoort_components',
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
        'region' => '',
        'status' => 0,
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

  $export['nlsoort_components-nlsoort_components_header'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'nlsoort_components_header',
    'module' => 'nlsoort_components',
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
        'region' => '',
        'status' => 0,
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

  $export['nlsoort_components-nlsoort_components_main_menu'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'nlsoort_components_main_menu',
    'module' => 'nlsoort_components',
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
        'region' => '',
        'status' => 0,
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

  $export['nlsoort_components-nlsoort_components_picture'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'nlsoort_components_picture',
    'module' => 'nlsoort_components',
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
        'region' => '',
        'status' => 0,
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

  $export['nlsoort_components-nlsoort_components_submenu'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'nlsoort_components_submenu',
    'module' => 'nlsoort_components',
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
        'region' => '',
        'status' => 0,
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

  $export['node-recent'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'node',
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
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'nlsoort2016',
        'weight' => -12,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-syndicate'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'syndicate',
    'module' => 'node',
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
        'region' => '',
        'status' => 0,
        'theme' => 'nlsoort2016',
        'weight' => 6,
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

  $export['search-form'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'administrator' => 3,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -1,
      ),
      'nlsoort2016' => array(
        'region' => 'left_sidebar',
        'status' => 1,
        'theme' => 'nlsoort2016',
        'weight' => -20,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => -10,
      ),
    ),
    'title' => 'Zoeken',
    'visibility' => 0,
  );

  $export['system-help'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'help',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'nlsoort2016' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'nlsoort2016',
        'weight' => 7,
      ),
      'seven' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'nlsoort2016' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'nlsoort2016',
        'weight' => -18,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
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
        'region' => '',
        'status' => 0,
        'theme' => 'nlsoort2016',
        'weight' => -1,
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

  $export['system-management'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'management',
    'module' => 'system',
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
        'region' => '',
        'status' => 0,
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

  $export['system-navigation'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'nlsoort2016' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'nlsoort2016',
        'weight' => 1,
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

  $export['system-powered-by'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 10,
      ),
      'nlsoort2016' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'nlsoort2016',
        'weight' => -4,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
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
        'region' => '',
        'status' => 0,
        'theme' => 'nlsoort2016',
        'weight' => 10,
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

  $export['user-login'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'nlsoort2016' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'nlsoort2016',
        'weight' => -3,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-new'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'new',
    'module' => 'user',
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
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'nlsoort2016',
        'weight' => -11,
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

  $export['user-online'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'online',
    'module' => 'user',
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
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'nlsoort2016',
        'weight' => -10,
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

  $export['views-75959a195f86b53962eb05bf38ad00cf'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '75959a195f86b53962eb05bf38ad00cf',
    'module' => 'views',
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
        'region' => '',
        'status' => 0,
        'theme' => 'nlsoort2016',
        'weight' => 11,
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

  $export['views-9d89e0ebbbb3e500a9839b83dbf36715'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '9d89e0ebbbb3e500a9839b83dbf36715',
    'module' => 'views',
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
        'region' => '',
        'status' => 0,
        'theme' => 'nlsoort2016',
        'weight' => -6,
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

  $export['views-afbeeldingen_bij_node-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'afbeeldingen_bij_node-block_1',
    'module' => 'views',
    'node_types' => array(
      0 => 'beelduitwisselaar',
    ),
    'pages' => '',
    'roles' => array(
      'administrator' => 3,
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
        'region' => 'content',
        'status' => 1,
        'theme' => 'nlsoort2016',
        'weight' => -14,
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

  $export['views-afbeeldingen_per_auteur-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'afbeeldingen_per_auteur-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'users/*',
    'roles' => array(
      'administrator' => 3,
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
        'region' => '',
        'status' => 0,
        'theme' => 'nlsoort2016',
        'weight' => -2,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-afbeeldingen_per_expert-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'afbeeldingen_per_expert-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'users/*',
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
        'region' => '',
        'status' => 0,
        'theme' => 'nlsoort2016',
        'weight' => -12,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Beelden per expert',
    'visibility' => 1,
  );

  $export['views-afbeeldingen_per_user-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'afbeeldingen_per_user-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'users/*',
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
        'region' => '',
        'status' => 0,
        'theme' => 'nlsoort2016',
        'weight' => -13,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-expertises-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'expertises-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'beelduitwisselaar/selectexpertise*',
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
        'region' => 'content',
        'status' => 1,
        'theme' => 'nlsoort2016',
        'weight' => -16,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-selectmail-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'selectmail-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'beelduitwisselaar/kiesmail/*',
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
        'region' => 'content',
        'status' => 1,
        'theme' => 'nlsoort2016',
        'weight' => -15,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
