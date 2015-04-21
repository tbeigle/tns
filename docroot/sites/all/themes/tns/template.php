<?php
/**
 * @file template.php
 *
 * template.php file for the custom tns (The New Schematics) theme.
 */

/**
 * Implements template_preprocess_html().
 */
function tns_preprocess_html(&$vars) {
  if (empty($vars['classes_array'])) $vars['classes_array'] = array();
  $tns_path = $vars['tns_path'] = drupal_get_path('theme', 'tns');
  $icons_path = '/' . $tns_path . '/assets/images/icons/';
  
  // Meta viewport header
  $element = array(
    '#tag' => 'meta',
    '#attributes' => array(
      'name' => 'viewport',
      'content' => 'width=device-width, initial-scale=1',
    ),
  );
  
  drupal_add_html_head($element, 'meta_viewport');
  
  // Font Source Sans Pro
  $link = array(
    'href' => 'http://fonts.googleapis.com/css?family=Source+Sans+Pro:200,300,400,600,700,900',
    'rel' => 'stylesheet',
    'type' => 'text/css',
  );
  
  drupal_add_html_head_link($link);
  
  // Apple touch icons
  $sizes = array(57,60,72,76,114,120,144,152,180);
  foreach ($sizes as $size) {
    $size .= 'x' . $size;
    $attributes = array(
      'rel' => 'apple-touch-icon',
      'sizes' => $size,
      'href' => $icons_path . 'apple-icon-' . $size . '.png',
    );
    
    drupal_add_html_head_link($attributes);
  }
  
  // Miscellaneous favicons
  $icons = array('android-' => 192,32,96,16);
  foreach ($icons as $index => $size) {
    $size .= 'x' . $size;
    $href_pre = is_string($index) && !is_numeric($index) ? $index : 'fav';    
    $attributes = array(
      'rel' => 'icon',
      'type' => 'image/png',
      'sizes' => $size,
      'href' => $icons_path . $href_pre . 'icon-' . $size . '.png',
    );
    
    drupal_add_html_head_link($attributes);
  }
  
  // Microsoft
  $attributes = array(
    'rel' => 'manifest',
    'href' => $icons_path . 'manifest.json',
  );
  
  drupal_add_html_head_link($attributes);
  
  $ms_metas = array(
    'msapplication-TileColor' => '#ffffff',
    'msapplication-TileImage' => $icons_path . 'ms-icon-144x144.png',
    'theme-color' => '#ffffff',
  );
  
  foreach ($ms_metas as $name => $content) {
    $element = array(
      '#tag' => 'meta',
      '#attributes' => array(
        'name' => $name,
        'content' => $content,
      ),
    );
    
    drupal_add_html_head($element, $name);
  }
}

/**
 * Implements template_preprocess_page().
 */
function tns_preprocess_page(&$vars) {
  $vars['show_title'] = (empty($vars['node']) || $vars['node']->title != '<none>');
  $vars['tns_path'] = drupal_get_path('theme', 'tns');
}
