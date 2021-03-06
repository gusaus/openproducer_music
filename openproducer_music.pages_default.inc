<?php
/**
 * @file
 * openproducer_music.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function openproducer_music_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'albums';
  $page->task = 'page';
  $page->admin_title = 'Albums';
  $page->admin_description = '';
  $page->path = 'discography/albums';
  $page->access = array();
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Releases',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_albums__panel_context_765eb2d6-918c-41a9-be30-9ee5c43dc089';
  $handler->task = 'page';
  $handler->subtask = 'albums';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'discography',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bowie';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => array(
        'region_title' => '',
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
    ),
    'contentmain' => array(
      'style' => 'bootstrap_styles:well',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a67e8300-f14d-410e-aee5-cf6ea209ad94';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1fecf142-0a93-4077-8725-7e2257988ec3';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'releases-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '10',
    'fields_override' => array(
      'field_artwork' => 1,
      'title' => 1,
      'field_artist' => 0,
    ),
    'exposed' => array(
      'sort_order' => 'DESC',
      'sort_by' => 'field_release_date_value',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Releases',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1fecf142-0a93-4077-8725-7e2257988ec3';
  $display->content['new-1fecf142-0a93-4077-8725-7e2257988ec3'] = $pane;
  $display->panels['contentmain'][0] = 'new-1fecf142-0a93-4077-8725-7e2257988ec3';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-1fecf142-0a93-4077-8725-7e2257988ec3';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['albums'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'discography';
  $page->task = 'page';
  $page->admin_title = 'Discography';
  $page->admin_description = '';
  $page->path = 'discography';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Discography',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_discography__panel_context_3d6eb29c-1db7-449e-a842-9773e620b7ef';
  $handler->task = 'page';
  $handler->subtask = 'discography';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'discography',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bowie';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => array(
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
    'contentmain' => array(
      'style' => 'bootstrap_styles:well',
    ),
  );
  $display->cache = array();
  $display->title = 'Discography';
  $display->uuid = 'f4875b02-d0db-4d5c-bdae-4813e694dd8e';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ad85dac8-3c39-463d-b6b2-a8ad3d20a760';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'releases-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '10',
    'fields_override' => array(
      'field_artwork' => 1,
      'title' => 1,
    ),
    'exposed' => array(
      'sort_order' => 'DESC',
      'sort_by' => 'field_release_date_value',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'view_mode' => 'teaser',
    'widget_title' => '',
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
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ad85dac8-3c39-463d-b6b2-a8ad3d20a760';
  $display->content['new-ad85dac8-3c39-463d-b6b2-a8ad3d20a760'] = $pane;
  $display->panels['contentmain'][0] = 'new-ad85dac8-3c39-463d-b6b2-a8ad3d20a760';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ad85dac8-3c39-463d-b6b2-a8ad3d20a760';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['discography'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'tracks';
  $page->task = 'page';
  $page->admin_title = 'Tracks';
  $page->admin_description = '';
  $page->path = 'discography/tracks';
  $page->access = array();
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Tracks',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_tracks_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'tracks';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'discography',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bowie';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => array(
        'region_title' => '',
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
    ),
    'contentmain' => array(
      'style' => 'bootstrap_styles:well',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7c31bd25-7d1e-4bd4-a475-2b1dbb27b8d6';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ba00814e-8527-49ba-9c00-ada3a1e53335';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'tracks-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ba00814e-8527-49ba-9c00-ada3a1e53335';
  $display->content['new-ba00814e-8527-49ba-9c00-ada3a1e53335'] = $pane;
  $display->panels['contentmain'][0] = 'new-ba00814e-8527-49ba-9c00-ada3a1e53335';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-ba00814e-8527-49ba-9c00-ada3a1e53335';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['tracks'] = $page;

  return $pages;

}
