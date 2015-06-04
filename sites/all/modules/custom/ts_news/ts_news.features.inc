<?php
/**
 * @file
 * ts_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ts_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ts_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ts_news_node_info() {
  $items = array(
    'top_stories' => array(
      'name' => t('Top stories'),
      'base' => 'node_content',
      'description' => t('to show top stories'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'world_stories' => array(
      'name' => t('World stories'),
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