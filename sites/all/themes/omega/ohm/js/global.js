;(function(e,t,n,r){e.fn.doubleTapToGo=function(r){if(!("ontouchstart"in t)&&!navigator.msMaxTouchPoints&&!navigator.userAgent.toLowerCase().match(/windows phone os 7/i))return false;this.each(function(){var t=false;e(this).on("click",function(n){var r=e(this);if(r[0]!=t[0]){n.preventDefault();t=r}});e(n).on("click touchstart MSPointerDown",function(n){var r=true,i=e(n.target).parents();for(var s=0;s<i.length;s++)if(i[s]==t[0])r=false;if(r)t=false})});return this}})(jQuery,window,document);
jQuery(document).ready(function($){
	$('.mobile-menu-btn').click(function(){
		var me = $(this);
		var menu = $('.l-region--navigation .menu');
		if (menu.hasClass('visible')) {
			menu.removeClass('visible');
			me.html("&equiv; Menu");
		} else {
			menu.addClass('visible');
			me.html("&equiv; Close Menu");
		}
	});
	
	$('.l-region--navigation .menu li:has(ul)').doubleTapToGo();
	
	if ($('.news-marquee').length > 0) {
		var news_marquee_text = $('.news-marquee').text();
		var news_marquee_classes = $('.news-marquee').attr('class');
		$('.news-marquee').replaceWith('<marquee class="' + news_marquee_classes + '">' + news_marquee_text + '</marquee>');
	}
  
  
});