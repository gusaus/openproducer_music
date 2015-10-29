<?php
/**
 * @file
 * openproducer_music.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openproducer_music_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node album content'.
  $permissions['administer panelizer node album content'] = array(
    'name' => 'administer panelizer node album content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node album layout'.
  $permissions['administer panelizer node album layout'] = array(
    'name' => 'administer panelizer node album layout',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node track content'.
  $permissions['administer panelizer node track content'] = array(
    'name' => 'administer panelizer node track content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node track layout'.
  $permissions['administer panelizer node track layout'] = array(
    'name' => 'administer panelizer node track layout',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  return $permissions;
}
