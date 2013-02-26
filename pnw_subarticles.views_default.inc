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
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
