<?php
/**
 * @file
 * openproducer_music.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function openproducer_music_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__preview__file_field_media_large_icon';
  $file_display->weight = 50;
  $file_display->status = TRUE;
  $file_display->settings = '';
  $export['audio__preview__file_field_media_large_icon'] = $file_display;

  return $export;
}
