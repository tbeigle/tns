(function($) {
  Drupal.behaviors.tns = {
    attach: function(context, settings) {
      var isFront = $('body').hasClass('front');
      var $socialMedia = $("ul.social-media");
      var $footer = $("div.region-footer");
      var footerPosition = $socialMedia.offset().top + $socialMedia.outerHeight() - $(window).scrollTop();
      var footerHeight = $footer.height();
      var windowHeight = $(window).height();
      var footerFixed = false;
      var headerHeight = $("div#headerwrap").height();
      var $headerMenu = $("#block-system-main-menu");
      var menuMargin;
      var $headerLogo = $("#logo");
      var mobileWidth = 910;

      function positionFooter() {
        footerPosition = $socialMedia.offset().top + $socialMedia.outerHeight() - $(window).scrollTop();
        if ($(window).width() > mobileWidth && (footerPosition + footerHeight > windowHeight) && (footerFixed == false)) {
          $footer.css({position: "fixed", bottom: "0"});
          footerFixed = true;
          $socialMedia.css({marginBottom: footerHeight});
        }
        else if ($(window).width() <= mobileWidth || ((footerPosition + footerHeight < windowHeight) && (footerFixed == true))) {
          $footer.css({position: "static", bottom: ""});
          footerFixed = false;
          $socialMedia.css({marginBottom: 0});
        }
      }
      
      function positionHeaderMenu() {
        if (isFront) return;
        if ($(window).width() < mobileWidth) {
          $headerMenu.css({
            marginTop: 0,
            float: "none"
          });
        }
	      else if ($(window).width() < $headerLogo.outerWidth(true) + $headerMenu.outerWidth(true)) {
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
      var $mobileNavButton = '<a href="#block-system-main-menu" class="mobile-menu-icon" title="Click/tap to open the main menu" data-target="#block-system-main-menu .block-content > .menu">i</a>';
      if (isFront) {
        $headerMenu.prepend($mobileNavButton);
      }
      else {
        $('#primary-navigation').prepend($mobileNavButton);
      }
      
      $('.mobile-menu-icon').click(function(e) {
        e.preventDefault();
        var $this = $(this);
        
        //$('body').toggleClass('mobile-open');
        
        var $target = isFront ? $($this.attr('data-target')) : $($this.attr('href'));
        
        $this.toggleClass('open');
        if (isFront && $this.hasClass('open')) {
          $('#logo').hide();
        }
        $target.slideToggle('fast', function() {
          if (isFront && !$this.hasClass('open')) {
            $('#logo').show();
          }
        });
      });
    }
  }
})(jQuery);
