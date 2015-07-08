<?php
/**
 * @file
 * tns_front.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function tns_front_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['tns_site-kickstarter'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'kickstarter',
    'module' => 'tns_site',
    'node_types' => array(),
    'pages' => '<front>',
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
        'region' => 'content',
        'status' => 1,
        'theme' => 'tns',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
