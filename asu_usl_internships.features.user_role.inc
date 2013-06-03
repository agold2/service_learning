<?php
/**
 * @file
 * asu_usl_internships.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function asu_usl_internships_user_default_roles() {
  $roles = array();

  // Exported role: Coordinator.
  $roles['Coordinator'] = array(
    'name' => 'Coordinator',
    'weight' => 4,
  );

  return $roles;
}
