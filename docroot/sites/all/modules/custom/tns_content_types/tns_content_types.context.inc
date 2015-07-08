<?php
/**
 * @file
 * tns_content_types.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tns_content_types_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'basic_internal';
  $context->description = '';
  $context->tag = 'pages';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'press_item' => 'press_item',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'node/5' => 'node/5',
        'node/13' => 'node/13',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'basic-internal',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('pages');
  $export['basic_internal'] = $context;

  return $export;
}
