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
    'styled_title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => 'h2',
        'ctools' => '',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
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
        0 => 'title',
        1 => 'styled_title',
        2 => 'related_images_related_image',
        3 => 'field_styled_title',
        4 => 'field_body',
        5 => 'links',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'styled_title' => 'ds_content',
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
