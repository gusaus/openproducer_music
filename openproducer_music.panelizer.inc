<?php
/**
 * @file
 * openproducer_music.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function openproducer_music_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:album:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'album';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = 'album';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'coltrane_double';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'header' => NULL,
      'middle' => NULL,
      'secondcolumn1' => NULL,
      'secondcolumn2' => NULL,
      'footer' => array(
        'region_title' => '',
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'clearfix' => 'clearfix',
          'pull-left' => 0,
          'pull-right' => 0,
        ),
      ),
    ),
    'footer' => array(
      'style' => 'bootstrap_styles:well',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'daf8daa9-f34a-41a4-a9ab-78acfb690c3d';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0b118915-50e2-42e0-a3b4-aa74da5e6b4d';
  $pane->panel = 'column1';
  $pane->type = 'views_panes';
  $pane->subtype = 'tracklist-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'bootstrap_styles:well',
    'settings' => array(
      'modifier_class' => '',
      'hide_classes' => array(),
      'additional_classes' => array(),
      'collapsible' => FALSE,
      'collapsed' => '',
      'region_title' => '',
    ),
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0b118915-50e2-42e0-a3b4-aa74da5e6b4d';
  $display->content['new-0b118915-50e2-42e0-a3b4-aa74da5e6b4d'] = $pane;
  $display->panels['column1'][0] = 'new-0b118915-50e2-42e0-a3b4-aa74da5e6b4d';
  $pane = new stdClass();
  $pane->pid = 'new-a22c4252-8e25-4bd1-8b21-cd8adc8efb96';
  $pane->panel = 'column1';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_purchase';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a22c4252-8e25-4bd1-8b21-cd8adc8efb96';
  $display->content['new-a22c4252-8e25-4bd1-8b21-cd8adc8efb96'] = $pane;
  $display->panels['column1'][1] = 'new-a22c4252-8e25-4bd1-8b21-cd8adc8efb96';
  $pane = new stdClass();
  $pane->pid = 'new-d885ec42-ee1f-414d-b2a2-3fe4a3df4763';
  $pane->panel = 'column2';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_artwork';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_image_style' => '',
      'colorbox_multivalue_index' => NULL,
      'colorbox_node_style' => 'artwork_medium',
      'image_style' => 'artwork_large',
      'image_link' => '',
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'view_mode' => NULL,
    'widget_title' => NULL,
    'items_per_page' => NULL,
    'exposed' => array(
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'hide_classes' => array(
        'hidden-xs' => 0,
        'hidden-sm' => 0,
        'hidden-md' => 0,
        'hidden-lg' => 0,
      ),
      'additional_classes' => array(
        'pull-left' => 0,
        'pull-right' => 0,
        'clearfix' => 0,
      ),
    ),
    'style' => 'bootstrap_styles:well',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd885ec42-ee1f-414d-b2a2-3fe4a3df4763';
  $display->content['new-d885ec42-ee1f-414d-b2a2-3fe4a3df4763'] = $pane;
  $display->panels['column2'][0] = 'new-d885ec42-ee1f-414d-b2a2-3fe4a3df4763';
  $pane = new stdClass();
  $pane->pid = 'new-bc8886d3-127c-4727-8056-7c3542c548d1';
  $pane->panel = 'column2';
  $pane->type = 'views_panes';
  $pane->subtype = 'albums-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'modifier_class' => '',
      'hide_classes' => array(),
      'additional_classes' => array(),
      'collapsible' => FALSE,
      'collapsed' => '',
      'region_title' => '',
    ),
    'style' => 'bootstrap_styles:well',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'bc8886d3-127c-4727-8056-7c3542c548d1';
  $display->content['new-bc8886d3-127c-4727-8056-7c3542c548d1'] = $pane;
  $display->panels['column2'][1] = 'new-bc8886d3-127c-4727-8056-7c3542c548d1';
  $pane = new stdClass();
  $pane->pid = 'new-ee1e0d22-2eab-4809-bbe1-8c3d2fa0d31f';
  $pane->panel = 'column2';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_credits';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'view_mode' => NULL,
    'widget_title' => NULL,
    'items_per_page' => NULL,
    'exposed' => array(
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'hide_classes' => array(
        'hidden-xs' => 0,
        'hidden-sm' => 0,
        'hidden-md' => 0,
        'hidden-lg' => 0,
      ),
      'additional_classes' => array(
        'pull-left' => 0,
        'pull-right' => 0,
        'clearfix' => 0,
      ),
    ),
    'style' => 'bootstrap_styles:well',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'ee1e0d22-2eab-4809-bbe1-8c3d2fa0d31f';
  $display->content['new-ee1e0d22-2eab-4809-bbe1-8c3d2fa0d31f'] = $pane;
  $display->panels['column2'][2] = 'new-ee1e0d22-2eab-4809-bbe1-8c3d2fa0d31f';
  $pane = new stdClass();
  $pane->pid = 'new-a4173c3b-a45f-4949-bbde-b56f0639ff27';
  $pane->panel = 'column2';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_notes';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'modifier_class' => '',
      'hide_classes' => array(),
      'additional_classes' => array(),
      'collapsible' => FALSE,
      'collapsed' => '',
      'region_title' => '',
    ),
    'style' => 'bootstrap_styles:well',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'a4173c3b-a45f-4949-bbde-b56f0639ff27';
  $display->content['new-a4173c3b-a45f-4949-bbde-b56f0639ff27'] = $pane;
  $display->panels['column2'][3] = 'new-a4173c3b-a45f-4949-bbde-b56f0639ff27';
  $pane = new stdClass();
  $pane->pid = 'new-7cc288e2-206c-47ad-a7c8-94b3f222070c';
  $pane->panel = 'column2';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'build_mode' => 'full',
    'identifier' => '',
    'link' => 1,
    'context' => 'panelizer',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'hide_classes' => array(
        'hidden-xs' => 0,
        'hidden-sm' => 0,
        'hidden-md' => 0,
        'hidden-lg' => 0,
      ),
      'additional_classes' => array(
        'pull-left' => 0,
        'pull-right' => 0,
        'clearfix' => 0,
      ),
    ),
    'style' => 'bootstrap_styles:well',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '7cc288e2-206c-47ad-a7c8-94b3f222070c';
  $display->content['new-7cc288e2-206c-47ad-a7c8-94b3f222070c'] = $pane;
  $display->panels['column2'][4] = 'new-7cc288e2-206c-47ad-a7c8-94b3f222070c';
  $pane = new stdClass();
  $pane->pid = 'new-3bd3e982-7494-44b7-acdb-5b233b98b77c';
  $pane->panel = 'footer';
  $pane->type = 'views_panes';
  $pane->subtype = 'releases-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '4',
    'fields_override' => array(
      'field_artwork' => 1,
      'title' => 1,
    ),
    'exposed' => array(
      'widget_title' => 'Releases',
      'sort_by' => 'field_release_date_value',
      'sort_order' => 'DESC',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'view_mode' => 'teaser',
    'widget_title' => 'Releases',
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
    'view_settings' => 'fields',
    'header_type' => 'none',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3bd3e982-7494-44b7-acdb-5b233b98b77c';
  $display->content['new-3bd3e982-7494-44b7-acdb-5b233b98b77c'] = $pane;
  $display->panels['footer'][0] = 'new-3bd3e982-7494-44b7-acdb-5b233b98b77c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:album:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:album:default:featured';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'album';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'featured';
  $panelizer->css_class = '';
  $panelizer->title_element = '';
  $panelizer->link_to_entity = FALSE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'bowie';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'fa128148-3555-48f7-8f64-af776cc66a91';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0af506cd-9649-46fe-87bd-bd2acfa3cee3';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_artwork';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_link' => 'content',
      'image_style' => 'artwork_small',
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'view_mode' => NULL,
    'widget_title' => NULL,
    'items_per_page' => NULL,
    'exposed' => array(
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0af506cd-9649-46fe-87bd-bd2acfa3cee3';
  $display->content['new-0af506cd-9649-46fe-87bd-bd2acfa3cee3'] = $pane;
  $display->panels['contentmain'][0] = 'new-0af506cd-9649-46fe-87bd-bd2acfa3cee3';
  $pane = new stdClass();
  $pane->pid = 'new-94ed3149-2ed9-42cb-bd0d-43b8a118829d';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_album';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_label',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'link' => 1,
    ),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'view_mode' => NULL,
    'widget_title' => NULL,
    'items_per_page' => NULL,
    'exposed' => array(
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '94ed3149-2ed9-42cb-bd0d-43b8a118829d';
  $display->content['new-94ed3149-2ed9-42cb-bd0d-43b8a118829d'] = $pane;
  $display->panels['contentmain'][1] = 'new-94ed3149-2ed9-42cb-bd0d-43b8a118829d';
  $pane = new stdClass();
  $pane->pid = 'new-78d0f0e8-bdfb-4d1b-8ab9-65e22fe5b863';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_artist';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '78d0f0e8-bdfb-4d1b-8ab9-65e22fe5b863';
  $display->content['new-78d0f0e8-bdfb-4d1b-8ab9-65e22fe5b863'] = $pane;
  $display->panels['contentmain'][2] = 'new-78d0f0e8-bdfb-4d1b-8ab9-65e22fe5b863';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:album:default:featured'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:track:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'track';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = 'track';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'coltrane_double';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header' => NULL,
      'column1' => array(
        'region_title' => '',
        'modifier_class' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'middle' => NULL,
      'secondcolumn1' => NULL,
      'secondcolumn2' => NULL,
      'footer' => array(
        'region_title' => '',
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'clearfix' => 'clearfix',
          'pull-left' => 0,
          'pull-right' => 0,
        ),
      ),
      'column2' => NULL,
    ),
    'footer' => array(
      'style' => 'bootstrap_styles:well',
    ),
    'column1' => array(
      'style' => 'bootstrap_styles:panel',
    ),
    'column2' => array(
      'style' => '0',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '774ea13c-8aac-4e2d-9439-6325b179e10d';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c244efed-e9f2-4dc3-ab64-d87c5371030c';
  $pane->panel = 'column1';
  $pane->type = 'views_panes';
  $pane->subtype = 'tracks-panel_pane_6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'table',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c244efed-e9f2-4dc3-ab64-d87c5371030c';
  $display->content['new-c244efed-e9f2-4dc3-ab64-d87c5371030c'] = $pane;
  $display->panels['column1'][0] = 'new-c244efed-e9f2-4dc3-ab64-d87c5371030c';
  $pane = new stdClass();
  $pane->pid = 'new-e472ada1-2e22-4cdf-a4bf-eec877a3acbd';
  $pane->panel = 'column1';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_lyrics';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'modifier_class' => '',
      'hide_classes' => array(),
      'additional_classes' => array(),
      'collapsible' => FALSE,
      'collapsed' => '',
      'region_title' => '',
    ),
    'style' => 'bootstrap_styles:well',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e472ada1-2e22-4cdf-a4bf-eec877a3acbd';
  $display->content['new-e472ada1-2e22-4cdf-a4bf-eec877a3acbd'] = $pane;
  $display->panels['column1'][1] = 'new-e472ada1-2e22-4cdf-a4bf-eec877a3acbd';
  $pane = new stdClass();
  $pane->pid = 'new-b788ff75-9601-480e-a8e1-5f749fcb7d04';
  $pane->panel = 'column1';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_notes';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'modifier_class' => '',
      'hide_classes' => array(),
      'additional_classes' => array(),
      'collapsible' => FALSE,
      'collapsed' => '',
      'region_title' => '',
    ),
    'style' => 'bootstrap_styles:well',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'b788ff75-9601-480e-a8e1-5f749fcb7d04';
  $display->content['new-b788ff75-9601-480e-a8e1-5f749fcb7d04'] = $pane;
  $display->panels['column1'][2] = 'new-b788ff75-9601-480e-a8e1-5f749fcb7d04';
  $pane = new stdClass();
  $pane->pid = 'new-d3980224-5c9d-498a-94f8-3fe9a2e7df9d';
  $pane->panel = 'column2';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_artwork';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'artwork_large',
      'image_link' => '',
    ),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'modifier_class' => '',
      'collapsible' => 0,
      'collapsed' => 0,
      'hide_classes' => array(
        'hidden-xs' => 0,
        'hidden-sm' => 0,
        'hidden-md' => 0,
        'hidden-lg' => 0,
      ),
      'additional_classes' => array(
        'pull-left' => 0,
        'pull-right' => 0,
        'clearfix' => 0,
      ),
    ),
    'style' => 'bootstrap_styles:panel',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd3980224-5c9d-498a-94f8-3fe9a2e7df9d';
  $display->content['new-d3980224-5c9d-498a-94f8-3fe9a2e7df9d'] = $pane;
  $display->panels['column2'][0] = 'new-d3980224-5c9d-498a-94f8-3fe9a2e7df9d';
  $pane = new stdClass();
  $pane->pid = 'new-1b4f76e0-7218-4579-9ecc-aa3073edaa91';
  $pane->panel = 'column2';
  $pane->type = 'views_panes';
  $pane->subtype = 'tracks-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'modifier_class' => '',
      'hide_classes' => array(),
      'additional_classes' => array(),
      'collapsible' => FALSE,
      'collapsed' => '',
      'region_title' => '',
    ),
    'style' => 'bootstrap_styles:well',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '1b4f76e0-7218-4579-9ecc-aa3073edaa91';
  $display->content['new-1b4f76e0-7218-4579-9ecc-aa3073edaa91'] = $pane;
  $display->panels['column2'][1] = 'new-1b4f76e0-7218-4579-9ecc-aa3073edaa91';
  $pane = new stdClass();
  $pane->pid = 'new-389e6570-e405-4400-b132-0a9b801d1968';
  $pane->panel = 'column2';
  $pane->type = 'views_panes';
  $pane->subtype = 'tracks-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'modifier_class' => '',
      'hide_classes' => array(),
      'additional_classes' => array(),
      'collapsible' => FALSE,
      'collapsed' => '',
      'region_title' => '',
    ),
    'style' => 'bootstrap_styles:well',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '389e6570-e405-4400-b132-0a9b801d1968';
  $display->content['new-389e6570-e405-4400-b132-0a9b801d1968'] = $pane;
  $display->panels['column2'][2] = 'new-389e6570-e405-4400-b132-0a9b801d1968';
  $pane = new stdClass();
  $pane->pid = 'new-41903e2b-f742-4470-8b8e-fdf2f6f3b6cd';
  $pane->panel = 'column2';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_credits';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'hide_classes' => array(
        'hidden-xs' => 0,
        'hidden-sm' => 0,
        'hidden-md' => 0,
        'hidden-lg' => 0,
      ),
      'additional_classes' => array(
        'pull-left' => 0,
        'pull-right' => 0,
        'clearfix' => 0,
      ),
    ),
    'style' => 'bootstrap_styles:well',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '41903e2b-f742-4470-8b8e-fdf2f6f3b6cd';
  $display->content['new-41903e2b-f742-4470-8b8e-fdf2f6f3b6cd'] = $pane;
  $display->panels['column2'][3] = 'new-41903e2b-f742-4470-8b8e-fdf2f6f3b6cd';
  $pane = new stdClass();
  $pane->pid = 'new-57bc497d-a8cc-41ad-a0ce-b4117e183005';
  $pane->panel = 'column2';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'build_mode' => 'full',
    'identifier' => '',
    'link' => 1,
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'hide_classes' => array(
        'hidden-xs' => 0,
        'hidden-sm' => 0,
        'hidden-md' => 0,
        'hidden-lg' => 0,
      ),
      'additional_classes' => array(
        'pull-left' => 0,
        'pull-right' => 0,
        'clearfix' => 0,
      ),
    ),
    'style' => 'bootstrap_styles:well',
  );
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '57bc497d-a8cc-41ad-a0ce-b4117e183005';
  $display->content['new-57bc497d-a8cc-41ad-a0ce-b4117e183005'] = $pane;
  $display->panels['column2'][4] = 'new-57bc497d-a8cc-41ad-a0ce-b4117e183005';
  $pane = new stdClass();
  $pane->pid = 'new-3a49bc7f-c593-4c58-b902-821337dee213';
  $pane->panel = 'footer';
  $pane->type = 'views_panes';
  $pane->subtype = 'releases-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '4',
    'fields_override' => array(
      'field_artwork' => 1,
      'title' => 1,
    ),
    'exposed' => array(
      'widget_title' => 'Releases',
      'sort_by' => 'field_release_date_value',
      'sort_order' => 'DESC',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'view_mode' => 'teaser',
    'widget_title' => 'Releases',
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
    'view_settings' => 'fields',
    'header_type' => 'none',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3a49bc7f-c593-4c58-b902-821337dee213';
  $display->content['new-3a49bc7f-c593-4c58-b902-821337dee213'] = $pane;
  $display->panels['footer'][0] = 'new-3a49bc7f-c593-4c58-b902-821337dee213';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:track:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:track:default:featured';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'track';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'featured';
  $panelizer->css_class = '';
  $panelizer->title_element = '';
  $panelizer->link_to_entity = FALSE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '060333bb-4ef7-44c8-86f6-1043d10579dc';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d56539ed-9175-4238-b9a1-a353cea14aa9';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_artwork';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'artwork_small',
      'image_link' => 'content',
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'view_mode' => NULL,
    'widget_title' => NULL,
    'items_per_page' => NULL,
    'exposed' => array(
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd56539ed-9175-4238-b9a1-a353cea14aa9';
  $display->content['new-d56539ed-9175-4238-b9a1-a353cea14aa9'] = $pane;
  $display->panels['center'][0] = 'new-d56539ed-9175-4238-b9a1-a353cea14aa9';
  $pane = new stdClass();
  $pane->pid = 'new-05857d10-3d9b-4746-8d55-3ade3324a74a';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_album';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_label',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'link' => 1,
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'view_mode' => NULL,
    'widget_title' => NULL,
    'items_per_page' => NULL,
    'exposed' => array(
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '05857d10-3d9b-4746-8d55-3ade3324a74a';
  $display->content['new-05857d10-3d9b-4746-8d55-3ade3324a74a'] = $pane;
  $display->panels['center'][1] = 'new-05857d10-3d9b-4746-8d55-3ade3324a74a';
  $pane = new stdClass();
  $pane->pid = 'new-ef3237dc-9f70-45c1-8141-b5d5c606f0d5';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_audio';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'soundmanager2_inline_player',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'text' => 'title',
      'pause' => 'pause',
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'view_mode' => NULL,
    'widget_title' => NULL,
    'items_per_page' => NULL,
    'exposed' => array(
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'ef3237dc-9f70-45c1-8141-b5d5c606f0d5';
  $display->content['new-ef3237dc-9f70-45c1-8141-b5d5c606f0d5'] = $pane;
  $display->panels['center'][2] = 'new-ef3237dc-9f70-45c1-8141-b5d5c606f0d5';
  $pane = new stdClass();
  $pane->pid = 'new-9914896f-1e94-4bd4-b40b-5cdad03dedba';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_purchase';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'view_mode' => NULL,
    'widget_title' => NULL,
    'items_per_page' => NULL,
    'exposed' => array(
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '9914896f-1e94-4bd4-b40b-5cdad03dedba';
  $display->content['new-9914896f-1e94-4bd4-b40b-5cdad03dedba'] = $pane;
  $display->panels['center'][3] = 'new-9914896f-1e94-4bd4-b40b-5cdad03dedba';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:track:default:featured'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:track:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'track';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'bowie';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '9a3ecee6-7758-4704-9f2e-0008275b3d79';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b56e9907-8377-4a09-a277-8350d319cde1';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_audio';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'soundmanager2_inline_player',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'text' => 'title',
      'pause' => 'pause',
      'inline' => 1,
      'visualization' => 0,
      'waveform' => 1,
      'eq' => 0,
      'amplifier' => 0,
      'diameter' => '25',
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'view_mode' => NULL,
    'widget_title' => NULL,
    'items_per_page' => NULL,
    'exposed' => array(
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b56e9907-8377-4a09-a277-8350d319cde1';
  $display->content['new-b56e9907-8377-4a09-a277-8350d319cde1'] = $pane;
  $display->panels['contentmain'][0] = 'new-b56e9907-8377-4a09-a277-8350d319cde1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-b56e9907-8377-4a09-a277-8350d319cde1';
  $panelizer->display = $display;
  $export['node:track:default:teaser'] = $panelizer;

  return $export;
}
