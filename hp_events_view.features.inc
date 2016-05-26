<?php
/**
 * @file
 * hp_events_view.features.inc
 */

/**
 * Implements hook_views_api().
 */
function hp_events_view_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function hp_events_view_image_default_styles() {
  $styles = array();

  // Exported image style: hp_event_list_thumbnail.
  $styles['hp_event_list_thumbnail'] = array(
    'label' => 'hp_event list thumbnail',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 350,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
