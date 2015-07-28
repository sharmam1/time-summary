<?php
/**
 * @file
 * twitter_integration.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function twitter_integration_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'twitter';
  $context->description = 'for twitter';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'business' => 'business',
        'sports' => 'sports',
        'top_stories' => 'top_stories',
        'world_stories' => 'world_stories',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('for twitter');
  $export['twitter'] = $context;

  return $export;
}
