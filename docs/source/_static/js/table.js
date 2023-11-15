document.addEventListener('DOMContentLoaded', function(event) {
	$('th').hover(function() {
		let self = $(this);
		let index = self.index();
		if(index) {
			self.parent().parent().find('td:nth-child(' + (index + 1).toString() + ')').addClass('hd');
		}else {
			self.siblings().addClass('hd');
		}
		self.addClass('hr');
	}, function() {
		let self = $(this);
		let index = self.index();
		if(index) {
			self.parent().parent().find('td:nth-child(' + (index + 1).toString() + ')').removeClass('hd');
		}else {
			self.siblings().removeClass('hd');
		}
		self.removeClass('hr');
	});
	
	$('td:not(:has(\'a\')):not(:first-child)').mouseover(function(e) {
		let prefix = $(this).closest('table').attr('title') == 'isa-ext' ? 'B7 ' : '';
		if($(this).attr('desc') == '') {
			$('.tooltip').remove();
			$('<div class="tooltip"><b>Opcode:</b> ' + (prefix + '0123456789ABCDEF'.charAt($(this).parent().index() - 1) + '0123456789ABCDEF'.charAt($(this).index() - 1)) + '<br><b>UNDEFINED</b><br></div>').css({'left': e.pageX + 10, 'top': e.pageY + 20}).appendTo('body > div');
			return;
		}
		var val = $(this).attr('desc').split('|');
		var C = val[0].charAt(0);
		var IDC = val[0].charAt(1);
		var OVF = val[0].charAt(2);
		var CC = val[0].charAt(3);
		var CC_text = 'Unchanged';
		if(CC == '1') CC_text = '<br>&emsp;&emsp;  00: = 0<br>&emsp;&emsp;  01: > 0<br>&emsp;&emsp;  10: < 0';
		else if(CC == '2') CC_text = '<br>&emsp;&emsp;  00: r0 = r<br>&emsp;&emsp;  01: r0 > r<br>&emsp;&emsp;  10: r0 < r';
		else if(CC == '5') CC_text = '<br>&emsp;&emsp;  00: r = V<br>&emsp;&emsp;  01: r > V<br>&emsp;&emsp;  10: r < V';
		else if(CC == '3') CC_text = '<br>&emsp;&emsp;  00: All selected bits 1<br>&emsp;&emsp;  01: Not all selected bits 1<br>&emsp;&emsp;';
		else if(CC == '4') CC_text = 'Loaded from r0';
		else if(CC == '6') CC_text = "Loaded from stack";
		var indir = val[2] == 'T';
		var indexed = val[3] == 'T';
		
		$('.tooltip').remove();
		$('<div class="tooltip"><b>Opcode:</b> ' + (prefix + '0123456789ABCDEF'.charAt($(this).parent().index() - 1) + '0123456789ABCDEF'.charAt($(this).index() - 1)) + '<br><b>Size (bytes):</b> ' + val[1] + '<br><b>C:</b> ' + (C == '+' || C == '1' ? 'Affected as defined' : 'Unchanged') + '<br><b>IDC:</b> ' + (IDC == '+' || IDC == '1' ? 'Affected as defined' : 'Unchanged') + '<br><b>OVF:</b> ' + (OVF == '+' || OVF == '1' ? 'Detects Overflow' : 'Unchanged') + '<br><b>CC:</b> ' + CC_text + '<br><b>Indirect:</b> ' + (indir ? 'Available' : 'Not Available') + '<br><b>Indexed:</b> ' + (indexed ? 'Available' : (val[3] == 'R' ? 'Required, r3 is index reg' : (val[3] == 'G' ? 'Required' : 'Not Available'))) + (val[4] == 'T' ? '<br><b>Affected by WC flag.</b>' : (val[4] == 'C' ? '<br><b>Affected by COM flag.</b>' : '')) + '<br><br>' + val[5] + '<br>' + '</div>').css({'left': e.pageX + 10, 'top': e.pageY + 20}).appendTo('body > div');
	}).mousemove(function(e) {
		$('.tooltip').css({'left': e.pageX + 10, 'top': e.pageY + 20});
	});
	
	$('.isa-table').mouseout(function(e) { $('.tooltip').remove(); });

	function updateColoration() {
		let tds = $('td').toArray();
		tds.forEach(t => {
			$(t).removeClass('highlight-red');
			$(t).removeClass('highlight-green');
			$(t).removeClass('highlight-yellow');
		});
		if($('#coloration-size').is(':checked')) {
			tds.forEach(t => {
				let desc = $(t).attr('desc');
				if(!desc || desc == '') return;
				let vals = desc.split('|');
				if(vals[1] == '1') {
					$(t).addClass('highlight-green');
				}
				if(vals[1] == '2') {
					$(t).addClass('highlight-yellow');
				}
				if(vals[1] == '3') {
					$(t).addClass('highlight-red');
				}
			});
		}
		if($('#coloration-addressing').is(':checked')) {
			tds.forEach(t => {
				let desc = $(t).attr('desc');
				if(!desc || desc == '') return;
				let vals = desc.split('|');
				if(vals[2] == 'T' && vals[3] != 'T') {
					$(t).addClass('highlight-green');
				}
				if(vals[2] == 'T' && vals[3] == 'T') {
					$(t).addClass('highlight-yellow');
				}
				if(vals[3] == 'R' || vals[3] == 'G') {
					$(t).addClass('highlight-red');
				}
			});
		}
		if($('#coloration-cc').is(':checked')) {
			tds.forEach(t => {
				let desc = $(t).attr('desc');
				if(!desc || desc == '') return;
				let vals = desc.split('|');
				var CC = vals[0].charAt(3);
				if(CC == '1') {
					$(t).addClass('highlight-green');
				}
				if(CC == '2' || CC == '5') {
					$(t).addClass('highlight-yellow');
				}
				if(CC == '3') {
					$(t).addClass('highlight-red');
				}
			});
		}
	}
	
	$('input[type=\'radio\']').change(_ => {
		updateColoration();
	});
	updateColoration();
});
