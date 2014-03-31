<?php
/**
 * @file
 * ding_bibliotek_info_settings.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ding_bibliotek_info_settings_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|content|new-10|configuration"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|content|new-10|panel"] = 'main_content';
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|content|new-10|position"] = 6;
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|content|new-10|subtype"] = 'bibliotek_info';
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|content|new-10|type"] = 'bibliotek_info';
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|content|new-11"] = (object) array(
      'pid' => 'new-11',
      'panel' => 'right_sidebar',
      'type' => 'campaign',
      'subtype' => 'campaign',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'ding_campaign_count' => 3,
        'ding_campaign_offset' => 0,
        'context' => array(
          0 => 'empty',
          1 => 'empty',
          2 => 'argument_string_1',
          3 => 'empty',
        ),
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => '',
    );
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|panels|main_content|6"] = 'new-10';
  $overrides["page_manager_handlers.search_ting_search_panel_context.conf|display|panels|right_sidebar|0"] = 'new-11';

 return $overrides;
}
