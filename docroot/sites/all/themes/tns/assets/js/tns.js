(function($) {
  Drupal.behaviors.tns = {
    attach: function(context, settings) {
      var $socialMedia = $("ul.social-media");
      var $footer = $("div.region-footer");
      var footerPosition = $socialMedia.offset().top + $socialMedia.outerHeight() - $(window).scrollTop();
      var footerHeight = $footer.height();
      var windowHeight = $(window).height();
      var footerFixed = false;
      var headerHeight = $("div#headerwrap").height();
      var $navWrap = $('#primary-navigation');
      var $headerMenu = $("#block-system-main-menu");
      var menuMargin;
      var $headerLogo = $("#logo");

      function positionFooter() {
        footerPosition = $socialMedia.offset().top + $socialMedia.outerHeight() - $(window).scrollTop();
        
        if ((footerPosition + footerHeight > windowHeight) && (footerFixed == false)) {
          $footer.css({position: "fixed", bottom: "0"});
          footerFixed = true;
          $socialMedia.css({marginBottom: footerHeight});
        }
        else if ((footerPosition + footerHeight < windowHeight) && (footerFixed == true)) {
          $footer.css({position: "static", bottom: ""});
          footerFixed = false;
          $socialMedia.css({marginBottom: 0});
        }
      }
      
      function positionHeaderMenu() {
	      if ($(window).width() < $headerLogo.outerWidth(true) + $headerMenu.outerWidth(true)) {
	        $headerMenu.css({
  	        marginTop: "10px",
  	        float: "left"  	        
  	      });
	      }
	      else {
	        $headerMenu.css({
  	        marginTop: headerHeight - $headerMenu.height(),
  	        float: "right"
  	      });
	      }
      }
      
      $(window).load(function() {
        positionFooter();
        positionHeaderMenu();
      });
      $(window).scroll(function() {
        positionFooter();
      });
      $(window).resize(function() {
        windowHeight = $(window).height();
        footerHeight = $footer.height();
        positionFooter();
        positionHeaderMenu();
      });
      
      // Add the mobile menu link to the main menu
      $navWrap.prepend('<a href="#block-system-main-menu" class="mobile-menu-icon" title="Click/tap to open the main menu">i</a>');
      $('.mobile-menu-icon').click(function(e) {
        e.preventDefault();
        
        var $target = $($(this).attr('href'));
        $target.slideToggle('fast');
        $(this).toggleClass('open');
      });
    }
  }
})(jQuery);
