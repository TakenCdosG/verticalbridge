(function($){
	$(document).ready(function() {
		$('.film-block').each(function() {
			var currentProcess = $.trim($(this).find('.fb-inner').text());
			var applications = 0;
			$('.views-table tr').each(function() {
				var rowStatus = $.trim($(this).find('.views-field-field-current-status').text());
				if(rowStatus === currentProcess) {
					applications++;
				}
			});
			$(this).find('span').html(applications);
		});
	});

	$('.film-block').click(function() {
		if($(this).hasClass('active')) {
			$('.film-block').removeClass('active');
			$('.views-table tbody tr').each(function() {
				$(this).show();
			});
		} else {
			$('.film-block').removeClass('active');
			$(this).addClass('active');
			var selectedProcess = $.trim($(this).find('.fb-inner').text());
			$('.views-table tbody tr').each(function() {
				var rowToHide = $.trim($(this).find('.views-field-field-current-status').text());
				$(this).show();
				if(rowToHide != selectedProcess) {
					$(this).hide();
				}
			});
		}
	});
})(jQuery);