<?php
/**
 * @file
 * tns_press.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tns_press_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'press';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Press';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['css_class'] = 'press-view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'press--list__row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'press--list no-style';
  $handler->display->display_options['style_options']['wrapper_class'] = 'press-wrapper';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: PR Image */
  $handler->display->display_options['fields']['field_press_item_image']['id'] = 'field_press_item_image';
  $handler->display->display_options['fields']['field_press_item_image']['table'] = 'field_data_field_press_item_image';
  $handler->display->display_options['fields']['field_press_item_image']['field'] = 'field_press_item_image';
  $handler->display->display_options['fields']['field_press_item_image']['label'] = '';
  $handler->display->display_options['fields']['field_press_item_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_item_image']['element_wrapper_class'] = 'press--list__image';
  $handler->display->display_options['fields']['field_press_item_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_press_item_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_press_item_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_press_item_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'press--list__title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_press_item_body']['id'] = 'field_press_item_body';
  $handler->display->display_options['fields']['field_press_item_body']['table'] = 'field_data_field_press_item_body';
  $handler->display->display_options['fields']['field_press_item_body']['field'] = 'field_press_item_body';
  $handler->display->display_options['fields']['field_press_item_body']['label'] = '';
  $handler->display->display_options['fields']['field_press_item_body']['alter']['max_length'] = '212';
  $handler->display->display_options['fields']['field_press_item_body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['field_press_item_body']['alter']['more_link_text'] = 'Read More »';
  $handler->display->display_options['fields']['field_press_item_body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['field_press_item_body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_press_item_body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_press_item_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_item_body']['element_wrapper_class'] = 'press--list__body';
  $handler->display->display_options['fields']['field_press_item_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_press_item_body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_press_item_body']['settings'] = array(
    'trim_length' => '212',
  );
  /* Sort criterion: Content: Publish Date (field_press_item_date) */
  $handler->display->display_options['sorts']['field_press_item_date_value']['id'] = 'field_press_item_date_value';
  $handler->display->display_options['sorts']['field_press_item_date_value']['table'] = 'field_data_field_press_item_date';
  $handler->display->display_options['sorts']['field_press_item_date_value']['field'] = 'field_press_item_date_value';
  $handler->display->display_options['sorts']['field_press_item_date_value']['order'] = 'DESC';
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
    'press_item' => 'press_item',
  );

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'press.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'recent_press');
  $handler->display->display_options['block_description'] = 'TNS Press';
  $export['press'] = $view;

  return $export;
}
