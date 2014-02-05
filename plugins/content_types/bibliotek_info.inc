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
      'Try to search for !placeholder on bibliotek.dk.',
      array(
        '!placeholder' => l(
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


  return $content;
}

/**
 * Plugin edit form.
 */
function ding_bibliotek_info_bibliotek_info_render_edit_form($form, &$form_state) {

  return $form;
}
