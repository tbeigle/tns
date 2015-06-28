<?php
/**
 * @file
 * tns_tour.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tns_tour_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'tour';
  $context->description = '';
  $context->tag = 'pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/6' => 'node/6',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'tour',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('pages');
  $export['tour'] = $context;

  return $export;
}
