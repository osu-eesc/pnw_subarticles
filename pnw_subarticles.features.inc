<?php
/**
 * @file
 * pnw_subarticles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pnw_subarticles_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pnw_subarticles_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pnw_subarticles_node_info() {
  $items = array(
    'subarticle' => array(
      'name' => t('Handbook Sub-article'),
      'base' => 'node_content',
      'description' => t('Node-referenced sub articles that display as a list of links on referenced page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
