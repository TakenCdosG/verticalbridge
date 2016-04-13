(function($){
  var lat_lng_stuff = {
    formgo: false,
    delay: 100,
    maxtries: 5,
    attempts: 0,
    init: function() {
      this.geocoder = new google.maps.Geocoder();
      this.address = $.trim($('#edit-street').val());
      this.city = $.trim($('#edit-city').val());
      this.state = $.trim($('#edit-state').val());
      this.zip = $.trim($('#edit-postal-code').val());
    },
    resubmit: function(){
      this.formgo = true;
      $('#edit-submit-site-locator').attr('disabled', 'disabled');
      $('.views-exposed-form-site-locator-site-search').submit();
    },
    clearlatlng: function(){
      $('#edit-distance-latitude,#edit-distance-longitude').val('');
    },
    clearaddressfields: function(){
      $('#edit-street,#edit-city,#edit-state,#edit-postal-code').val('');
    },
    clearcookies: function(){
      $.removeCookie('street');
      $.removeCookie('city');
      $.removeCookie('state');
      $.removeCookie('zip');
    },
    cookieaddresses: function(){
      $.cookie('street', this.address);
      $.cookie('city', this.city);
      $.cookie('state', this.state);
      $.cookie('zip', this.zip);
    },
    applycookies: function(){
      if ($.cookie('street')) {
        $('#edit-street').val($.cookie('street'));
      }
      if ($.cookie('city')) {
        $('#edit-city').val($.cookie('city'));
      }
      if ($.cookie('state')) {
        $('#edit-state').val($.cookie('state'));
      }
      if ($.cookie('zip')) {
        $('#edit-postal-code').val($.cookie('zip'));
      }
    },
    doit: function(){
      // have to do this edge case of state search only
      if ($.trim(this.state) !== '' && $.trim(this.address) === '' && $.trim(this.city) === '' && $.trim(this.zip) === '') {
        //this.clearcookies();
        this.resubmit();
        return;
      }
      this.attempts++;
      var _address = $.trim(this.address + ' ' + this.city + ' ' + this.state + ' ' + this.zip);
      if (typeof this.geocoder !== 'undefined' && _address !== '') {
        this.clearlatlng();
        var self = this;
        this.geocoder.geocode({
          'address': _address
        }, function(results, status) {
          if (status == google.maps.GeocoderStatus.OK) {
            //console.log(results);
            if (results[0]) {
              //console.log(results[0].geometry.location.lat());
              //console.log(results[0].geometry.location.lng());
              $('#edit-distance-latitude').val(results[0].geometry.location.lat());
              $('#edit-distance-longitude').val(results[0].geometry.location.lng());
              //self.clearcookies();
              self.cookieaddresses();
              self.clearaddressfields();
              self.resubmit();
            }
          } else {
            if (self.attempts === self.maxtries) {
              self.resubmit();
            } else {
              setTimeout(self.doit, self.delay);
              self.delay += 20;
            }
          }
        });
      } else {
        this.resubmit();
      }
    }
  }
  $(document).ready(function(){
    lat_lng_stuff.clearlatlng();
    lat_lng_stuff.applycookies();
    lat_lng_stuff.clearcookies();
    $('.views-exposed-form-site-locator-site-search').submit(function(e){
      if (!lat_lng_stuff.formgo && $.trim($('#edit-distance-latitude').val()) === '' && $.trim($('#edit-distance-longitude').val()) === ''/* &&
      $.trim($('#edit-street').val()) !== '' && $.trim($('#edit-city').val()) !== '' && $.trim($('#edit-state').val()) && $.trim($('#edit-postal-code').val())*/) {
        e.preventDefault();
        lat_lng_stuff.init();
        lat_lng_stuff.doit();
      } else {
        return true;
      }
    });
  });
})(jQuery);