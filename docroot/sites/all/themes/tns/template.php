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
  $vars['tns_path'] = drupal_get_path('theme', 'tns');
  
  // Meta viewport header
  $element = array(
    '#tag' => 'meta',
    '#attributes' => array(
      'name' => 'viewport',
      'content' => 'width=device-width, initial-scale=1',
    ),
  );
  
  drupal_add_html_head($element, 'meta_viewport');
}

/**
 * Implements template_preprocess_page().
 */
function tns_preprocess_page(&$vars) {
  $vars['show_title'] = (empty($vars['node']) || $vars['node']->title != '<none>');
  $vars['tns_path'] = drupal_get_path('theme', 'tns');
}
