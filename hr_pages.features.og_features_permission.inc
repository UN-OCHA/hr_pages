<?php
/**
 * @file
 * hr_pages.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function hr_pages_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:hr_space:create hr_page content'
  $permissions['node:hr_space:create hr_page content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:hr_space:delete any hr_page content'
  $permissions['node:hr_space:delete any hr_page content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:hr_space:delete own hr_page content'
  $permissions['node:hr_space:delete own hr_page content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:hr_space:update any hr_page content'
  $permissions['node:hr_space:update any hr_page content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:hr_space:update own hr_page content'
  $permissions['node:hr_space:update own hr_page content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  return $permissions;
}
