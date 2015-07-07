<?php
/**
 * @file
 * tns_misc.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tns_misc_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'show_title';
  $context->description = '';
  $context->tag = 'pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/6' => 'node/6',
        'press/*/*' => 'press/*/*',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'show-title',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('pages');
  $export['show_title'] = $context;

  return $export;
}
