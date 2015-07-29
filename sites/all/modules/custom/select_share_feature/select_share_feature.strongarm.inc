<?php
/**
 * @file
 * select_share_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function select_share_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'share_selection_content_types';
  $strongarm->value = array(
    'article' => 'article',
    'page' => 'page',
    'business' => 'business',
    'sports' => 'sports',
    'top_stories' => 'top_stories',
    'world_stories' => 'world_stories',
  );
  $export['share_selection_content_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'share_selection_custom';
  $strongarm->value = array(
    'google_plus' => array(
      'client_id' => '203275849410-ksmj76ud4h0uoqaa08lvnnddt3petvv0.apps.googleusercontent.com',
      'contenturl' => '',
    ),
    'linkedin' => array(
      'apikey' => '',
    ),
  );
  $export['share_selection_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'share_selection_display_style';
  $strongarm->value = 'image_and_text';
  $export['share_selection_display_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'share_selection_exclude_roles';
  $strongarm->value = array(
    1 => 0,
    2 => 0,
    3 => 0,
  );
  $export['share_selection_exclude_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'share_selection_images_replacement_path';
  $strongarm->value = 'sites/default/files/share-selection';
  $export['share_selection_images_replacement_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'share_selection_paths';
  $strongarm->value = 'trending
business
sports-news
top-stories
world-news';
  $export['share_selection_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'share_selection_paths_behavior';
  $strongarm->value = '1';
  $export['share_selection_paths_behavior'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'share_selection_paths_or_content';
  $strongarm->value = 'paths';
  $export['share_selection_paths_or_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'share_selection_show';
  $strongarm->value = array(
    'twitter' => 1,
    'google_plus' => 0,
    'linkedin' => 0,
  );
  $export['share_selection_show'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'share_selection_weight';
  $strongarm->value = array(
    'twitter' => '0',
    'google_plus' => '0',
    'linkedin' => '0',
  );
  $export['share_selection_weight'] = $strongarm;

  return $export;
}
