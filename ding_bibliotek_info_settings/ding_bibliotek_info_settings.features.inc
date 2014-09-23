<?php
/**
 * @file
 * ding_bibliotek_info_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ding_bibliotek_info_settings_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function ding_bibliotek_info_settings_default_page_manager_handlers_alter(&$data) {
  if (isset($data['search_ting_search_panel_context'])) {
    $data['search_ting_search_panel_context']->conf['display']->content['new-10']->cache['method'] = 'rules'; /* WAS: '' */
    $data['search_ting_search_panel_context']->conf['display']->content['new-10']->cache['settings'] = array(
      'granularity' => 'args',
      'language' => 1,
      'language_content' => 1,
      'advanced' => array(),
      'cache_key' => '5343caa7bd0ae',
      'substitute' => 0,
      'new' => TRUE,
    ); /* WAS: '' */
    $data['search_ting_search_panel_context']->conf['display']->content['new-10']->configuration = ''; /* WAS: array(
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
    ) */
    $data['search_ting_search_panel_context']->conf['display']->content['new-10']->panel = 'main_content'; /* WAS: 'right_sidebar' */
    $data['search_ting_search_panel_context']->conf['display']->content['new-10']->position = 6; /* WAS: 0 */
    $data['search_ting_search_panel_context']->conf['display']->content['new-10']->subtype = 'bibliotek_info'; /* WAS: 'campaign' */
    $data['search_ting_search_panel_context']->conf['display']->content['new-10']->type = 'bibliotek_info'; /* WAS: 'campaign' */
    $data['search_ting_search_panel_context']->conf['display']->content['new-11'] = (object) array(
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
        ); /* WAS: '' */
    $data['search_ting_search_panel_context']->conf['display']->panels['main_content']['6'] = 'new-10'; /* WAS: '' */
    $data['search_ting_search_panel_context']->conf['display']->panels['right_sidebar']['0'] = 'new-11'; /* WAS: 'new-10' */
  }
}
