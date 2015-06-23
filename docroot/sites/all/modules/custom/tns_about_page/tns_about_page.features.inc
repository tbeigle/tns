<?php
/**
 * @file
 * tns_about_page.features.inc
 */

/**
 * Implements hook_node_info().
 */
function tns_about_page_node_info() {
  $items = array(
    'about_page' => array(
      'name' => t('About Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
