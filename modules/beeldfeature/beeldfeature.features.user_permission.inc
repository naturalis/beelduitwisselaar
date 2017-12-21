<?php
/**
 * @file
 * beeldfeature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function beeldfeature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access private fields'.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'add JS snippets for google analytics'.
  $permissions['add JS snippets for google analytics'] = array(
    'name' => 'add JS snippets for google analytics',
    'roles' => array(),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer CAPTCHA settings'.
  $permissions['administer CAPTCHA settings'] = array(
    'name' => 'administer CAPTCHA settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer autoassignrole'.
  $permissions['administer autoassignrole'] = array(
    'name' => 'administer autoassignrole',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'autoassignrole',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer boxes'.
  $permissions['administer boxes'] = array(
    'name' => 'administer boxes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'boxes',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'administrator' => 'administrator',
      'validator' => 'validator',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer field permissions'.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer fields'.
  $permissions['administer fields'] = array(
    'name' => 'administer fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer google analytics'.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer login destination settings'.
  $permissions['administer login destination settings'] = array(
    'name' => 'administer login destination settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'login_destination',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer menu tree'.
  $permissions['administer menu tree'] = array(
    'name' => 'administer menu tree',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menutree',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer search_api'.
  $permissions['administer search_api'] = array(
    'name' => 'administer search_api',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_api',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer smtp module'.
  $permissions['administer smtp module'] = array(
    'name' => 'administer smtp module',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'smtp',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer usermerge settings'.
  $permissions['administer usermerge settings'] = array(
    'name' => 'administer usermerge settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'usermerge',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create beelduitwisselaar content'.
  $permissions['create beelduitwisselaar content'] = array(
    'name' => 'create beelduitwisselaar content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create field_akkoord'.
  $permissions['create field_akkoord'] = array(
    'name' => 'create field_akkoord',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_created'.
  $permissions['create field_created'] = array(
    'name' => 'create field_created',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_datum_publicatie'.
  $permissions['create field_datum_publicatie'] = array(
    'name' => 'create field_datum_publicatie',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_fotograaf'.
  $permissions['create field_fotograaf'] = array(
    'name' => 'create field_fotograaf',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_fotograafref'.
  $permissions['create field_fotograafref'] = array(
    'name' => 'create field_fotograafref',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_land'.
  $permissions['create field_land'] = array(
    'name' => 'create field_land',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_license'.
  $permissions['create field_license'] = array(
    'name' => 'create field_license',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_soort_taxon'.
  $permissions['create field_soort_taxon'] = array(
    'name' => 'create field_soort_taxon',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_woonplaats'.
  $permissions['create field_woonplaats'] = array(
    'name' => 'create field_woonplaats',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create mail content'.
  $permissions['create mail content'] = array(
    'name' => 'create mail content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any beelduitwisselaar content'.
  $permissions['delete any beelduitwisselaar content'] = array(
    'name' => 'delete any beelduitwisselaar content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any mail content'.
  $permissions['delete any mail content'] = array(
    'name' => 'delete any mail content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own beelduitwisselaar content'.
  $permissions['delete own beelduitwisselaar content'] = array(
    'name' => 'delete own beelduitwisselaar content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own mail content'.
  $permissions['delete own mail content'] = array(
    'name' => 'delete own mail content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in groep'.
  $permissions['delete terms in groep'] = array(
    'name' => 'delete terms in groep',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in licentie'.
  $permissions['delete terms in licentie'] = array(
    'name' => 'delete terms in licentie',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any beelduitwisselaar content'.
  $permissions['edit any beelduitwisselaar content'] = array(
    'name' => 'edit any beelduitwisselaar content',
    'roles' => array(
      'administrator' => 'administrator',
      'validator' => 'validator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any mail content'.
  $permissions['edit any mail content'] = array(
    'name' => 'edit any mail content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit boxes'.
  $permissions['edit boxes'] = array(
    'name' => 'edit boxes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'boxes',
  );

  // Exported permission: 'edit field_akkoord'.
  $permissions['edit field_akkoord'] = array(
    'name' => 'edit field_akkoord',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_created'.
  $permissions['edit field_created'] = array(
    'name' => 'edit field_created',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_datum_publicatie'.
  $permissions['edit field_datum_publicatie'] = array(
    'name' => 'edit field_datum_publicatie',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_fotograaf'.
  $permissions['edit field_fotograaf'] = array(
    'name' => 'edit field_fotograaf',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_fotograafref'.
  $permissions['edit field_fotograafref'] = array(
    'name' => 'edit field_fotograafref',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_land'.
  $permissions['edit field_land'] = array(
    'name' => 'edit field_land',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_license'.
  $permissions['edit field_license'] = array(
    'name' => 'edit field_license',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_soort_taxon'.
  $permissions['edit field_soort_taxon'] = array(
    'name' => 'edit field_soort_taxon',
    'roles' => array(
      'administrator' => 'administrator',
      'validator' => 'validator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_woonplaats'.
  $permissions['edit field_woonplaats'] = array(
    'name' => 'edit field_woonplaats',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own beelduitwisselaar content'.
  $permissions['edit own beelduitwisselaar content'] = array(
    'name' => 'edit own beelduitwisselaar content',
    'roles' => array(
      'administrator' => 'administrator',
      'validator' => 'validator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own field_akkoord'.
  $permissions['edit own field_akkoord'] = array(
    'name' => 'edit own field_akkoord',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_created'.
  $permissions['edit own field_created'] = array(
    'name' => 'edit own field_created',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_datum_publicatie'.
  $permissions['edit own field_datum_publicatie'] = array(
    'name' => 'edit own field_datum_publicatie',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_fotograaf'.
  $permissions['edit own field_fotograaf'] = array(
    'name' => 'edit own field_fotograaf',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_fotograafref'.
  $permissions['edit own field_fotograafref'] = array(
    'name' => 'edit own field_fotograafref',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_land'.
  $permissions['edit own field_land'] = array(
    'name' => 'edit own field_land',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_license'.
  $permissions['edit own field_license'] = array(
    'name' => 'edit own field_license',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_soort_taxon'.
  $permissions['edit own field_soort_taxon'] = array(
    'name' => 'edit own field_soort_taxon',
    'roles' => array(
      'administrator' => 'administrator',
      'validator' => 'validator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_woonplaats'.
  $permissions['edit own field_woonplaats'] = array(
    'name' => 'edit own field_woonplaats',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own mail content'.
  $permissions['edit own mail content'] = array(
    'name' => 'edit own mail content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit terms in groep'.
  $permissions['edit terms in groep'] = array(
    'name' => 'edit terms in groep',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in licentie'.
  $permissions['edit terms in licentie'] = array(
    'name' => 'edit terms in licentie',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'execute php code'.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'merge accounts'.
  $permissions['merge accounts'] = array(
    'name' => 'merge accounts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'usermerge',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'opt-in or out of tracking'.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'skip CAPTCHA'.
  $permissions['skip CAPTCHA'] = array(
    'name' => 'skip CAPTCHA',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'use PHP for settings'.
  $permissions['use PHP for settings'] = array(
    'name' => 'use PHP for settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'php',
  );

  // Exported permission: 'use PHP for title patterns'.
  $permissions['use PHP for title patterns'] = array(
    'name' => 'use PHP for title patterns',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'auto_nodetitle',
  );

  // Exported permission: 'use PHP for tracking visibility'.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(),
    'module' => 'ctools',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format php_code'.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view any unpublished article content'.
  $permissions['view any unpublished article content'] = array(
    'name' => 'view any unpublished article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished beelduitwisselaar content'.
  $permissions['view any unpublished beelduitwisselaar content'] = array(
    'name' => 'view any unpublished beelduitwisselaar content',
    'roles' => array(
      'administrator' => 'administrator',
      'validator' => 'validator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished content'.
  $permissions['view any unpublished content'] = array(
    'name' => 'view any unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished mail content'.
  $permissions['view any unpublished mail content'] = array(
    'name' => 'view any unpublished mail content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished page content'.
  $permissions['view any unpublished page content'] = array(
    'name' => 'view any unpublished page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished webform content'.
  $permissions['view any unpublished webform content'] = array(
    'name' => 'view any unpublished webform content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view field_akkoord'.
  $permissions['view field_akkoord'] = array(
    'name' => 'view field_akkoord',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_created'.
  $permissions['view field_created'] = array(
    'name' => 'view field_created',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_datum_publicatie'.
  $permissions['view field_datum_publicatie'] = array(
    'name' => 'view field_datum_publicatie',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_fotograaf'.
  $permissions['view field_fotograaf'] = array(
    'name' => 'view field_fotograaf',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_fotograafref'.
  $permissions['view field_fotograafref'] = array(
    'name' => 'view field_fotograafref',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_land'.
  $permissions['view field_land'] = array(
    'name' => 'view field_land',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_license'.
  $permissions['view field_license'] = array(
    'name' => 'view field_license',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_soort_taxon'.
  $permissions['view field_soort_taxon'] = array(
    'name' => 'view field_soort_taxon',
    'roles' => array(
      'administrator' => 'administrator',
      'fotograaf' => 'fotograaf',
      'validator' => 'validator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_woonplaats'.
  $permissions['view field_woonplaats'] = array(
    'name' => 'view field_woonplaats',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_akkoord'.
  $permissions['view own field_akkoord'] = array(
    'name' => 'view own field_akkoord',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_created'.
  $permissions['view own field_created'] = array(
    'name' => 'view own field_created',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_datum_publicatie'.
  $permissions['view own field_datum_publicatie'] = array(
    'name' => 'view own field_datum_publicatie',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_fotograaf'.
  $permissions['view own field_fotograaf'] = array(
    'name' => 'view own field_fotograaf',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_fotograafref'.
  $permissions['view own field_fotograafref'] = array(
    'name' => 'view own field_fotograafref',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_land'.
  $permissions['view own field_land'] = array(
    'name' => 'view own field_land',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_license'.
  $permissions['view own field_license'] = array(
    'name' => 'view own field_license',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_soort_taxon'.
  $permissions['view own field_soort_taxon'] = array(
    'name' => 'view own field_soort_taxon',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'fotograaf' => 'fotograaf',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_woonplaats'.
  $permissions['view own field_woonplaats'] = array(
    'name' => 'view own field_woonplaats',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'fotograaf' => 'fotograaf',
      'validator' => 'validator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view site tree'.
  $permissions['view site tree'] = array(
    'name' => 'view site tree',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menutree',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
