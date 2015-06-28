<?php
/**
 * @file
 * tns_about_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tns_about_page_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about';
  $context->description = '';
  $context->tag = 'pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/5' => 'node/5',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'about-us',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('pages');
  $export['about'] = $context;

  return $export;
}
