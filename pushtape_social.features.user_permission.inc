<?php
/**
 * @file
 * pushtape_social.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pushtape_social_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access service links'.
  $permissions['access service links'] = array(
    'name' => 'access service links',
    'roles' => array(),
    'module' => 'service_links',
  );

  // Exported permission: 'change follow link titles'.
  $permissions['change follow link titles'] = array(
    'name' => 'change follow link titles',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'follow',
  );

  // Exported permission: 'edit own follow links'.
  $permissions['edit own follow links'] = array(
    'name' => 'edit own follow links',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'follow',
  );

  // Exported permission: 'edit site follow links'.
  $permissions['edit site follow links'] = array(
    'name' => 'edit site follow links',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'follow',
  );

  return $permissions;
}
