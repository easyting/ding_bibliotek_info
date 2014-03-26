/**
 * @file
 */
(function ($) {
  Drupal.behaviors.ding_bibliotek_info = {
    attach: function (context, settings) {
      if ($('.pane-search-result .search-results').length === 0) {
        $('.pane-bibliotek-info').remove();
      }
    }
  };
}(jQuery));
