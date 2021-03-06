<?php
/**
 * @file
 * pnw_subarticles.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function pnw_subarticles_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|subarticle|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'subarticle';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|subarticle|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function pnw_subarticles_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|subarticle|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'subarticle';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'related_images_related_image',
        1 => 'field_styled_title',
        2 => 'field_body',
        3 => 'links',
      ),
    ),
    'fields' => array(
      'related_images_related_image' => 'ds_content',
      'field_styled_title' => 'ds_content',
      'field_body' => 'ds_content',
      'links' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['node|subarticle|default'] = $ds_layout;

  return $export;
}
