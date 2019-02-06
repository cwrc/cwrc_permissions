<?php
/**
 * @file
 * cwrc_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function cwrc_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Documentation.
  $roles['Documentation'] = array(
    'name' => 'Documentation',
    'weight' => 6,
  );

  // Exported role: Orlando User.
  $roles['Orlando User'] = array(
    'name' => 'Orlando User',
    'weight' => 7,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
