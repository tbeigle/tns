<?php
/**
 * @file
 * tns_tour.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tns_tour_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
