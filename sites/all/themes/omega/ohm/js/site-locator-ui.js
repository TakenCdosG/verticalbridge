
function switchMaps(map) {
    if (map == 'bing') {
        jQuery('.view-display-id-map_bing').show();
        jQuery('.view-display-id-map').hide();
        jQuery('.mapsGoogle').removeClass('active');
        jQuery('.mapsBing').addClass('active');
    } else {
        jQuery('.view-display-id-map_bing').hide();
        jQuery('.view-display-id-map').show();
        jQuery('.mapsGoogle').addClass('active');
        jQuery('.mapsBing').removeClass('active');
    }
}

(function ($) {
    $('.advanced-slideout').css({right: 0});
    var isFilterResultsVisible = (document.location.href.indexOf('distance') > -1);
    var panelToShow = isFilterResultsVisible ? '.as-filter-results' : '.as-advanced-search';

    $(panelToShow).removeClass('hidden');

    $('#advancedLocator').toggle(function (e) {
        e.preventDefault();
        $('.advanced-slideout').stop().animate({right: '-360px'}, "swing", function () {
            $(panelToShow).addClass('hidden');
        });
    }, function (e) {
        e.preventDefault();
        $(panelToShow).removeClass('hidden');
        $('.advanced-slideout').stop().animate({right: '0px'}, "swing");
    });

    var listHtml = '<table class="views-table cols-5">' + $('.views-table').html() + '</table>';
    var mapHtml = $('#geolocation-views-site-locator-map').html();

    $('#listlist').click(function (e) {
        e.preventDefault();
        if (!$(this).hasClass('active')) {
            switchMapViews.switchthem('map', 'list');
            $(this).addClass('active');
        }
    });

    $('#listmap').click(function (e) {
        e.preventDefault();
        if (!$(this).hasClass('active')) {
            switchMapViews.switchthem('list', 'map');
            $(this).addClass('active');
        }
    });

    $('.accordian-header').click(function (e) {
        e.preventDefault();
        $('.accordian-content').slideUp();
        $('.accordian-header i').removeClass('fa-chevron-up').addClass('fa-chevron-down');
        $('.accordian-header').removeClass('accordian-active');

        var accordianIDBare = '#' + $(this).parent().attr('id');
        var accordianID = '#' + $(this).parent().attr('id') + ' .accordian-content';

        if (!$(accordianID).hasClass('accordian-down')) {
            $(accordianID).addClass('accordian-down').slideDown();
            $(accordianIDBare + ' .accordian-header').addClass('accordian-active');
            $(accordianIDBare + ' .accordian-header i').removeClass('fa-chevron-down').addClass('fa-chevron-up');
        } else {
            $('.accordian-content').removeClass('accordian-down');
        }
    });

    /*
     $('.mapsFilterResults').click(function (e) {
     e.preventDefault();
     if ($('input:radio[name=filterCity]').is(':checked')) {
     var newUrl = '/site-locator?city=' + $('input:radio[name=filterCity]:checked').val() + '&distance[search_distance]=100';
     window.location.href = newUrl;
     }
     if ($('input:radio[name=filterType]').is(':checked')) {
     var newUrl = '/site-locator?category=' + $('input:radio[name=filterType]:checked').val() + '&distance[search_distance]=100';
     window.location.href = newUrl;
     }
     });
     */
    $(document).ready(function () {
        switchMaps('google');
        $('.pager').addClass('hidden');

        if (document.location.href.indexOf('page=') > -1) {
            switchMapViews.switchthem('map', 'list');
            $('#listlist').addClass('active');
        }

        if (document.location.href.indexOf('distance') > -1) {
            $('.advanced-slideout').css({"right": "0px"});
        }

        $('#geolocation-views-site-locator-map').height('594px');
        $('.ip-geoloc-map > div').height('594px');

        var mapDownloadLink = '/site-export-kml?' + window.querystring;
        $('.mapsDownload').attr('href', mapDownloadLink);

        if (!window.cities) {
            window.cities = new Array();
            $('.citylist tbody .views-field-field-address-locality').each(function () {
                var text = $(this).text().trim();
                if ((text !== '') && (text !== ' ')) {
                    if (window.cities.indexOf(text) === -1) {
                        window.cities.push(text);
                    }
                }
            });


            $(window.cities).each(function (index, value) {
                $('#arrayCities').append('<input type="radio" name="city" value="' + value + '" /><label for="' + value + '">' + value + '</label><br />');
            });
        }
    });

    var switchMapViews = {
        switchthem: function (oldView, newView) {
            $('.view-content').removeClass('view-' + oldView + '-view').addClass('view-' + newView + '-view');
            $('.advanced-slideout').removeClass('slideout-' + oldView).addClass('slideout-' + newView);

            if (oldView == 'map') {
                $('.pager').removeClass('hidden');
            } else {
                $('.pager').addClass('hidden');
            }

            $('#list' + oldView).removeClass('active');
        }
    }

})(jQuery);