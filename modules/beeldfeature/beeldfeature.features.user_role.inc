<?php
/**
 * @file
 * beeldfeature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function beeldfeature_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: fotograaf.
  $roles['fotograaf'] = array(
    'name' => 'fotograaf',
    'weight' => 3,
  );

  // Exported role: validator.
  $roles['validator'] = array(
    'name' => 'validator',
    'weight' => 4,
  );

  return $roles;
}
