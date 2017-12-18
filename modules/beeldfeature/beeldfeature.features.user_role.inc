<?php
/**
 * @file
 * beeldfeature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function beeldfeature_user_default_roles()
{
    $roles = array();

    // Exported role: author.
    $roles['author'] = array(
        'name' => 'author',
        'weight' => 3,
    );

    // Exported role: expert.
    $roles['expert'] = array(
        'name' => 'expert',
        'weight' => 4,
    );

    return $roles;
}
