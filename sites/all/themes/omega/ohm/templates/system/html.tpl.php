<?php

/**
 * @file
 * Default theme implementation to display the basic html structure of a single
 * Drupal page.
 *
 * Variables:
 * - $css: An array of CSS files for the current page.
 * - $language: (object) The language the site is being displayed in.
 *   $language->language contains its textual representation.
 *   $language->dir contains the language direction. It will either be 'ltr' or 'rtl'.
 * - $rdf_namespaces: All the RDF namespace prefixes used in the HTML document.
 * - $grddl_profile: A GRDDL profile allowing agents to extract the RDF data.
 * - $head_title: A modified version of the page title, for use in the TITLE
 *   tag.
 * - $head_title_array: (array) An associative array containing the string parts
 *   that were used to generate the $head_title variable, already prepared to be
 *   output as TITLE tag. The key/value pairs may contain one or more of the
 *   following, depending on conditions:
 *   - title: The title of the current page, if any.
 *   - name: The name of the site.
 *   - slogan: The slogan of the site, if any, and if there is no title.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $page_top: Initial markup from any modules that have altered the
 *   page. This variable should always be output first, before all other dynamic
 *   content.
 * - $page: The rendered page content.
 * - $page_bottom: Final closing markup from any modules that have altered the
 *   page. This variable should always be output last, after all other dynamic
 *   content.
 * - $classes String of classes that can be used to style contextually through
 *   CSS.
 *
 * @see template_preprocess()
 * @see template_preprocess_html()
 * @see template_process()
 *
 * @ingroup themeable
 */
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN"
  "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language; ?>" version="XHTML+RDFa 1.0" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces; ?>>

<head profile="<?php print $grddl_profile; ?>">
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <?php print $scripts; ?>
  <script src="https://use.typekit.net/gwm5oem.js"></script>
  <script>try{Typekit.load({ async: true });}catch(e){}</script>
  <script>
    /*News marquee script*/
    ( function($) {
      $.extend({
        replaceTag: function (currentElem, newTagObj, keepProps) {
          var $currentElem = $(currentElem);
          var i, $newTag = $(newTagObj).clone();
          if (keepProps) {//{{{
            newTag = $newTag[0];
            newTag.className = currentElem.className;
            $.extend(newTag.classList, currentElem.classList);
            $.extend(newTag.attributes, currentElem.attributes);
          }//}}}
          $currentElem.wrapAll($newTag);
          $currentElem.contents().unwrap();
          // return node; (Error spotted by Frank van Luijn)
          return this; // Suggested by ColeLawrence
        }
      });

      $.fn.extend({
        replaceTag: function (newTagObj, keepProps) {
          // "return" suggested by ColeLawrence
          return this.each(function() {
            jQuery.replaceTag(this, newTagObj, keepProps);
          });
        }
      });

      var number = 0;
      var playstatus;
      var playing = false;
      'use strict';
      $(function() {
        var con = 0;
        if($(window).width()>767){
          con = 220;
        }else{
          con = 100;
        }
        $('.home-news, .news-list').css('width',$('.newscontainer').width()- con);
        var sum=0;
        $('.home-news .view-id-news_marquee div').each( function(){ sum += $(this).width(); });
        $('.view-id-news_marquee').width(sum);
        $('.home-news .view-id-news_marquee div div').each(function (i) {
          $(this).addClass('news-list news-' + i);
        });
        /*controller functions*/
        function changetag() {
          if($('.home-news').prop("tagName") == 'DIV'){
            $('.home-news').replaceTag('<marquee>', true);
            $('.home-news, .news-list').css('width',$('.newscontainer').width()- con);
            $('.news-list').each(function (i) {
              $(this).css('display', 'block');
              $(this).css('width', 'auto');
              $(this).css('margin-left', '60px');
            });
          }
        }
        function stop() {
          $('.home-news-controller.middle').css("background-image","url(../sites/all/themes/omega/ohm/images/arrow-play.png)");
          $('.home-news').replaceTag('<div>', true);
          $('.home-news, .news-list').css('width',$('.newscontainer').width()- con);
          $('.news-list').each(function (i) {
              $(this).css('margin-left', '20px');
          });
            
        }
        function marquee_mobile() {
          if($(window).width()<788){
            changetag();
          }else{
            stop();
          }
        }
        marquee_mobile();
        $( window ).resize(function() {
          marquee_mobile();
        });
        $('.news-list.news-0').css("display", "block");
        var total_news = $('.view-content .news-list').length;
        $('.home-news-controller.end').click(function() {
          stop();
          if(playing == true){
            number = 0;
            playing = false;
          }
          $('.home-news, .news-list').css('width',$('.newscontainer').width()- con);
          if(number<(total_news-1)){
            $('.news-list.news-'+number).css("display", "none");
            number+=1;
          }
        });
        $('.home-news-controller.begin').click(function() {
          stop();
          if(playing == true){
            number = 0;
            playing = false;
          }
          if(number>0){
            number-=1;
          }
          $('.news-list.news-'+number).css("display", "block");
        });
        $('.home-news-controller.middle').click(function() {
          $('.home-news-controller.middle').css("background-image","url(../sites/all/themes/omega/ohm/images/arrow-pause.png)");
          playing = true;
          changetag();
          if(playstatus==0){
            $('.news-list').mouseleave();
          }else{
            $('.news-list').mouseenter();
          }
          $("marquee").hover(function () {
            this.stop();
            playstatus =0;
            $('.home-news-controller.middle').css("background-image","url(../sites/all/themes/omega/ohm/images/arrow-play.png)");
          }, function () {
            this.start();
            playstatus=1;
            $('.home-news-controller.middle').css("background-image","url(../sites/all/themes/omega/ohm/images/arrow-pause.png)");

          });
        });
      });
      $( window ).resize(function() {
        var con = 0;
        if($(window).width()>767){
          con = 220;
        }else{
          con = 100;
        }
        $('.home-news, .news-list').css('width',$('.newscontainer').width()-con);
      });
      /*inner header*/
      $(document).ready(function(){
        var bpath = "<?php  echo !empty($base_path); ?>";
        var p_title = $('.page-title').text();
        if($("body").hasClass("page-events") ||  p_title == "Events"){
          $('.internal-header').css("background-image","url(sites/all/themes/omega/ohm/images/events-bg.jpg)")
        }
        if($("body").hasClass("page-press") || p_title == "Press"){
          $('.internal-header').css("background-image","url(sites/all/themes/omega/ohm/images/press-bg-2.jpg)")
        }
        if($("body").hasClass("page-about-us-newsroom") || p_title == "News"){
          $('.internal-header').css("background-image","url("+bpath+"/sites/all/themes/omega/ohm/images/news-bg-2.jpg)")
        }
      });
    } ) ( jQuery );
  </script>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>
