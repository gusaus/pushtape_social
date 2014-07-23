<?php
/**
 * @file
 * pushtape_social.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function pushtape_social_defaultconfig_features() {
  return array(
    'pushtape_social' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function pushtape_social_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'follow_site_alignment';
  $strongarm->value = 'horizontal';
  $export['follow_site_alignment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'follow_site_block_title';
  $strongarm->value = '2';
  $export['follow_site_block_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'follow_site_icon_style';
  $strongarm->value = 'large';
  $export['follow_site_icon_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_link_view_modes';
  $strongarm->value = array(
    'full' => 'full',
    'teaser' => 0,
    'rss' => 0,
    'search_index' => 0,
    'search_result' => 0,
    'featured' => 0,
    'token' => 0,
  );
  $export['service_links_link_view_modes'] = $strongarm;

  return $export;
}
