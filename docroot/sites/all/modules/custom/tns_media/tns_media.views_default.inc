<?php
/**
 * @file
 * tns_media.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tns_media_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'tns_media_images';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'file_managed';
  $view->human_name = 'TNS Media: Images';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Images';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'image-slider bxslider';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['label'] = '';
  $handler->display->display_options['fields']['uri']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uri']['alter']['text'] = '<img src="[uri]">';
  $handler->display->display_options['fields']['uri']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
  /* Sort criterion: File: Show in Gallery (field_image_gallery) */
  $handler->display->display_options['sorts']['field_image_gallery_value']['id'] = 'field_image_gallery_value';
  $handler->display->display_options['sorts']['field_image_gallery_value']['table'] = 'field_data_field_image_gallery';
  $handler->display->display_options['sorts']['field_image_gallery_value']['field'] = 'field_image_gallery_value';
  $handler->display->display_options['sorts']['field_image_gallery_value']['order'] = 'DESC';
  /* Sort criterion: File: Weight (field_image_weight) */
  $handler->display->display_options['sorts']['field_image_weight_value']['id'] = 'field_image_weight_value';
  $handler->display->display_options['sorts']['field_image_weight_value']['table'] = 'field_data_field_image_weight';
  $handler->display->display_options['sorts']['field_image_weight_value']['field'] = 'field_image_weight_value';
  /* Sort criterion: File: Upload date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'file_managed';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Filter criterion: File: Show in Gallery (field_image_gallery) */
  $handler->display->display_options['filters']['field_image_gallery_value']['id'] = 'field_image_gallery_value';
  $handler->display->display_options['filters']['field_image_gallery_value']['table'] = 'field_data_field_image_gallery';
  $handler->display->display_options['filters']['field_image_gallery_value']['field'] = 'field_image_gallery_value';
  $handler->display->display_options['filters']['field_image_gallery_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'media/images';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $export['tns_media_images'] = $view;

  $view = new view();
  $view->name = 'tns_media_videos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'file_managed';
  $view->human_name = 'TNS Media: Videos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Videos';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'video-gallery bxslider';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: File: File ID */
  $handler->display->display_options['fields']['fid']['id'] = 'fid';
  $handler->display->display_options['fields']['fid']['table'] = 'file_managed';
  $handler->display->display_options['fields']['fid']['field'] = 'fid';
  $handler->display->display_options['fields']['fid']['label'] = '';
  $handler->display->display_options['fields']['fid']['element_label_colon'] = FALSE;
  /* Sort criterion: File: Featured (field_video_featured) */
  $handler->display->display_options['sorts']['field_video_featured_value']['id'] = 'field_video_featured_value';
  $handler->display->display_options['sorts']['field_video_featured_value']['table'] = 'field_data_field_video_featured';
  $handler->display->display_options['sorts']['field_video_featured_value']['field'] = 'field_video_featured_value';
  $handler->display->display_options['sorts']['field_video_featured_value']['order'] = 'DESC';
  /* Sort criterion: File: Weight (field_video_weight) */
  $handler->display->display_options['sorts']['field_video_weight_value']['id'] = 'field_video_weight_value';
  $handler->display->display_options['sorts']['field_video_weight_value']['table'] = 'field_data_field_video_weight';
  $handler->display->display_options['sorts']['field_video_weight_value']['field'] = 'field_video_weight_value';
  /* Sort criterion: File: Upload date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'file_managed';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Filter criterion: File: Show in Gallery (field_video_gallery) */
  $handler->display->display_options['filters']['field_video_gallery_value']['id'] = 'field_video_gallery_value';
  $handler->display->display_options['filters']['field_video_gallery_value']['table'] = 'field_data_field_video_gallery';
  $handler->display->display_options['filters']['field_video_gallery_value']['field'] = 'field_video_gallery_value';
  $handler->display->display_options['filters']['field_video_gallery_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'media/videos';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $export['tns_media_videos'] = $view;

  return $export;
}
