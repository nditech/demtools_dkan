<?php
/**
 * @file
 * ndi_language_switcher.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ndi_language_switcher_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}