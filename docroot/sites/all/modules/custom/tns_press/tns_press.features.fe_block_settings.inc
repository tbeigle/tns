<?php
/**
 * @file
 * tns_press.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function tns_press_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-press-recent_press'] = array(
    'cache' => -1,
    'css_class' => 'recent-press',
    'custom' => 0,
    'delta' => 'press-recent_press',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'node/9',
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
        'weight' => -13,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
