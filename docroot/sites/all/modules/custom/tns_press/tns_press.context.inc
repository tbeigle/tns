<?php
/**
 * @file
 * tns_press.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tns_press_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'press';
  $context->description = '';
  $context->tag = 'pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'press' => 'press',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'press',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('pages');
  $export['press'] = $context;

  return $export;
}
