<?php
/**
 * @file
 * tns_media.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function tns_media_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-tns_media_images-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'tns_media_images-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'node/13',
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
        'weight' => -10,
      ),
    ),
    'title' => 'Images',
    'visibility' => 1,
  );

  $export['views-tns_media_videos-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'tns_media_videos-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'node/13',
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
        'weight' => -11,
      ),
    ),
    'title' => 'Videos',
    'visibility' => 1,
  );

  return $export;
}
