(function ($, Drupal) { Drupal.behaviors.naturalis_theme = { attach: function(context, settings) {
  h = $(window).height();
  $("main").css("min-height",h-150);

  // ----------------------------------------------------------------
  // TOP BAR menu behaviour
  // ----------------------------------------------------------------

  var $_menu_item = $(".top-bar-level-1");
  var $_top_bar = $(".top-bar");

  $_menu_item
    .mouseenter(function(){
      $_top_bar.addClass("expanded");
    });

  $_top_bar
    .mouseleave(function(){
      $_top_bar.removeClass("expanded");
    });

  //$_top_bar.addClass("expanded");


} }; })(jQuery, Drupal);
