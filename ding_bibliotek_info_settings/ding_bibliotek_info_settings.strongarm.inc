<?php
/**
 * @file
 * ding_bibliotek_info_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ding_bibliotek_info_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_search_disabled_ting_search';
  $strongarm->value = FALSE;
  $export['page_manager_search_disabled_ting_search'] = $strongarm;

  return $export;
}
