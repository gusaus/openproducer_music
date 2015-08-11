<?php
/**
 * @file
 * openproducer_music.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openproducer_music_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function openproducer_music_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function openproducer_music_image_default_styles() {
  $styles = array();

  // Exported image style: artwork_huge.
  $styles['artwork_huge'] = array(
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 1200,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'artwork_huge',
  );

  // Exported image style: artwork_large.
  $styles['artwork_large'] = array(
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 550,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'artwork_large',
  );

  // Exported image style: artwork_medium.
  $styles['artwork_medium'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 450,
          'height' => 450,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'artwork_medium',
  );

  // Exported image style: artwork_small.
  $styles['artwork_small'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 225,
          'height' => 225,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'artwork_small',
  );

  // Exported image style: artwork_thumbnail.
  $styles['artwork_thumbnail'] = array(
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'artwork_thumbnail',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function openproducer_music_node_info() {
  $items = array(
    'album' => array(
      'name' => t('Album'),
      'base' => 'node_content',
      'description' => t('Create an album release with tracks and artwork.'),
      'has_title' => '1',
      'title_label' => t('Album title'),
      'help' => '',
    ),
    'track' => array(
      'name' => t('Track'),
      'base' => 'node_content',
      'description' => t('A single audio track or song.'),
      'has_title' => '1',
      'title_label' => t('Track name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
