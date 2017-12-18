<?php
/**
 * @file
 * beeldfeature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function beeldfeature_user_default_permissions()
{
    $permissions = array();

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

    return $permissions;
}
