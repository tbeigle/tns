<?php
/**
 * @file
 * tns_misc.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function tns_misc_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['tns_site-social'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'social',
    'module' => 'tns_site',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'tns' => array(
        'region' => 'footer_super',
        'status' => 1,
        'theme' => 'tns',
        'weight' => -14,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
