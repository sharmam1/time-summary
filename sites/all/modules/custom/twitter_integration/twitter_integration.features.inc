<?php
/**
 * @file
 * twitter_integration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function twitter_integration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
