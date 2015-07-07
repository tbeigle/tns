<?php
/**
 * @file
 * tns_misc.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function tns_misc_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: band member.
  $roles['band member'] = array(
    'name' => 'band member',
    'weight' => 3,
  );

  return $roles;
}
