<?php
/**
 * @file
 * twitter_integration.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function twitter_integration_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['twitter_block-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 1,
    'module' => 'twitter_block',
    'node_types' => array(),
    'pages' => '<front>
world-news
top-stories',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'blogger_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'blogger_theme',
        'weight' => -8,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Latest News',
    'visibility' => 1,
  );

  $export['twitter_block-2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 2,
    'module' => 'twitter_block',
    'node_types' => array(),
    'pages' => 'sports-news',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'blogger_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'blogger_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Sports trending',
    'visibility' => 1,
  );

  $export['twitter_block-3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 3,
    'module' => 'twitter_block',
    'node_types' => array(),
    'pages' => 'business',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'blogger_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'blogger_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Fortune Trending',
    'visibility' => 1,
  );

  return $export;
}
