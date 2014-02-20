<?php
/**
 * @file
 * Bibliotek info plugin.
 */

$plugin = array(
  'title' => t('Bibliotek info'),
  'description' => t('Pane showing various textual information.'),
  'category' => t('Ding!'),
  'single' => TRUE,
  'render callback' => 'ding_bibliotek_info_bibliotek_info_render',
  'edit form' => 'ding_bibliotek_info_bibliotek_info_render_edit_form',
);

/**
 * Plugin renderer.
 */
function ding_bibliotek_info_bibliotek_info_render($subtype, $conf, $panel_args, $context) {
  $query = arg(2);
  $content = new stdClass();
  $content->title = '';

  if (arg(0) == 'search' && arg(1) == 'ting') {
    $content->content = t(
      'Try to search for !phrase on bibliotek.dk.',
      array(
        '!phrase' => l(
          $query,
          'http://bibliotek.dk/search/work/' . $query,
          array(
            'attributes' => array(
              'target' => '_blank',
            ),
          )
        )
      )
    );
  }

  // @todo
  // Unfortunately there is no fast way to detect empty search result,
  // so remove the pane forcibly via script.
  drupal_add_js(drupal_get_path('module', 'ding_bibliotek_info') . '/js/ding_bibliotek_info.scripts.js', array('type' => 'file', 'scope' => 'footer'));

  return $content;
}

/**
 * Plugin edit form.
 */
function ding_bibliotek_info_bibliotek_info_render_edit_form($form, &$form_state) {

  return $form;
}
