<?php
/**
 * @file
 * service_learning.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function service_learning_user_default_roles() {
  $roles = array();

  // Exported role: Coordinator.
  $roles['Coordinator'] = array(
    'name' => 'Coordinator',
    'weight' => 5,
  );

  return $roles;
}
