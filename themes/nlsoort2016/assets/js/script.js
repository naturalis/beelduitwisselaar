(function ($) {
  "use strict";

  Drupal.behaviors.nlsoort = {
    attach: function (context, settings) {

      // Try to fetch flexslider.
      var flexslider = $('.flexslider');

      // If it exists apply flex slider method.
      if (flexslider.length > 0) {
        flexslider.flexslider();
      }

      var body = $('body'),
          menu = $('.menu'),
          menuToggle = $('.menuToggle');
      $('body').on('click', '.menuToggle', function (e) {
        e.preventDefault();
        console.log('test');
        menu.slideToggle('fast', function () {
          $('body').toggleClass('menuOpen');
        });
      });

      $('body').on('click', '.menu li .toggle-submenu-js', function (e) {
        if (menuToggle.css('display') === 'block') {
          e.preventDefault();
          var submenu = $(this).parent().find('ol'),
            plus = $(this).parent().find('i.plus'),
            min = $(this).parent().find('i.min');

          if (submenu.css('display') === 'block') {
            submenu.slideUp('fast');
            plus.fadeIn('fast');
            min.fadeOut('fast');
          } else {
            
            
            if (submenu.css('display')==undefined)
            {
              window.open($(this).attr("href"),"_top");
            }
            else
            {
              menu.find('ol').slideUp('fast');
              menu.find('i.plus').fadeIn('fast');
              min.fadeIn('fast');
              plus.fadeOut('fast');
              submenu.slideDown('fast');
            }
          }
        }
      });

      $('body').on('click', '.toggleFooterLinks', function (e) {
        e.preventDefault();

        if (menuToggle.css('display') === 'block') {
          $('.footerLinkContainer').slideToggle();
        }
      });

      // Open search bar
      $('body').on('click', '.search-toggle-js', function() {
        $('body').toggleClass('search-open');
        $('.menuContainer').find('input').select().focus();
      });

      // Close search bar
      $('body').on('click', '.close-suggestion-list-js', function() {
        $('#name_suggestion').hide();
        $('body').removeClass('search-open');
      });

      // Provide suggestion list
      $('body').on('keyup', '#inlineformsearch #inlineformsearchInput', function(e) {
        if (e.keyCode==27 || $(this).val() == '') {
          $('.simpleSuggestions').hide();
        } else {
          $('.simpleSuggestions').show();
        }

        $('.simpleSuggestions ul').append('<li>Nog een suggestie</li>');
      }); 

    }
  };
})(jQuery);
