<?php
/**
 * @file
 * pnw_subarticles.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pnw_subarticles_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'article_subpages';
  $view->description = 'Displays links to related subarticles';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Article subpages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_insect_crop',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Crop */
  $handler->display->display_options['fields']['field_insect_crop']['id'] = 'field_insect_crop';
  $handler->display->display_options['fields']['field_insect_crop']['table'] = 'field_data_field_insect_crop';
  $handler->display->display_options['fields']['field_insect_crop']['field'] = 'field_insect_crop';
  $handler->display->display_options['fields']['field_insect_crop']['label'] = '';
  $handler->display->display_options['fields']['field_insect_crop']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_insect_crop']['element_label_colon'] = FALSE;
  /* Field: Content: Pest */
  $handler->display->display_options['fields']['field_insect_pest']['id'] = 'field_insect_pest';
  $handler->display->display_options['fields']['field_insect_pest']['table'] = 'field_data_field_insect_pest';
  $handler->display->display_options['fields']['field_insect_pest']['field'] = 'field_insect_pest';
  $handler->display->display_options['fields']['field_insect_pest']['label'] = '';
  $handler->display->display_options['fields']['field_insect_pest']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_insect_pest']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_insect_pest']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Crop (field_insect_crop) */
  $handler->display->display_options['sorts']['field_insect_crop_value']['id'] = 'field_insect_crop_value';
  $handler->display->display_options['sorts']['field_insect_crop_value']['table'] = 'field_data_field_insect_crop';
  $handler->display->display_options['sorts']['field_insect_crop_value']['field'] = 'field_insect_crop_value';
  /* Sort criterion: Content: Pest (field_insect_pest) */
  $handler->display->display_options['sorts']['field_insect_pest_value']['id'] = 'field_insect_pest_value';
  $handler->display->display_options['sorts']['field_insect_pest_value']['table'] = 'field_data_field_insect_pest';
  $handler->display->display_options['sorts']['field_insect_pest_value']['field'] = 'field_insect_pest_value';
  /* Contextual filter: Content: Parent article reference (field_parent_article_reference) */
  $handler->display->display_options['arguments']['field_parent_article_reference_nid']['id'] = 'field_parent_article_reference_nid';
  $handler->display->display_options['arguments']['field_parent_article_reference_nid']['table'] = 'field_data_field_parent_article_reference';
  $handler->display->display_options['arguments']['field_parent_article_reference_nid']['field'] = 'field_parent_article_reference_nid';
  $handler->display->display_options['arguments']['field_parent_article_reference_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parent_article_reference_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_parent_article_reference_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parent_article_reference_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parent_article_reference_nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'subarticle' => 'subarticle',
  );

  /* Display: EVA Subpages */
  $handler = $view->new_display('entity_view', 'EVA Subpages', 'eva_subpages');
  $handler->display->display_options['display_description'] = 'Displays list of article subpages';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'article',
  );
  $export['article_subpages'] = $view;

  return $export;
}
