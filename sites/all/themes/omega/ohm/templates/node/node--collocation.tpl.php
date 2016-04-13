<?php

/**
 * @file
 * Default theme implementation to display a node.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */
?>
<?php
  $collocationData = array
    (
      array('0', '15', 'US Cellular', 'Collocation', 'Collocation Application Updated', 'September 1, 2014'),
      array('1', '45', 'T-Mobile', 'Collocation', 'Due Diligence Completed', 'October 1, 2014'),
      array('2', '23', 'Verizon', 'Collocation', 'Structural Analysis Completed', 'August 15, 2014'),
      array('3', '61', 'AT&T', 'Collocation', 'Landlord or Owner Review Completed', 'October 14, 2014'),
      array('4', '99', 'Sprint', 'Collocation', 'Tower Mods Completed', 'August 31, 2014'),
      array('5', '108', 'Cellular One', 'Collocation', 'Lease Terms Negotiated', 'September 30, 2014'),
      array('6', '72', 'Nextel', 'Collocation', 'Legal Review Completed', 'September 16, 2014'),
      array('7', '18', 'Conterra', 'Collocation', 'Lease Executed', 'September 20, 2014')
    );

  $totalApplications = count($collocationData);
?>
<div class="application-submenu">
  <ul>
    <!--<li><a href="#"><i class="fa fa-folder-open fa-lg"></i> Project Folders</a></li>-->
    <li class="active"><a href="#"><i class="fa fa-wifi fa-lg"></i> Application Tracker</a></li>
    <!--<li><a href="#"><i class="fa fa-book fa-lg"></i> Preferences</a></li>
    <li><a href="#"><i class="fa fa-users fa-lg"></i> Profile</a></li>-->
  </ul>
</div>
<h3 class="page-title">My Applications <span>Total applications: (<?php echo $totalApplications; ?>)</span></h3>
<div class="application-film">
  <div class="film-block"><div class="fb-inner">Collocation Application Uploaded</div><span>0</span></div>
  <div class="film-block" data-application-progress="1"><div class="fb-inner">Due Diligence Completed</div><span>0</span></div>
  <div class="film-block" data-application-progress="2"><div class="fb-inner">Structural Analysis Completed</div><span>0</span></div>
  <div class="film-block" data-application-progress="3"><div class="fb-inner">Landlord or Owner Review Completed</div><span>0</span></div>
  <div class="film-block" data-application-progress="4"><div class="fb-inner">Tower Mods Completed</div><span>0</span></div>
  <div class="film-block" data-application-progress="5"><div class="fb-inner">Lease Terms Negotiated</div><span>0</span></div>
  <div class="film-block" data-application-progress="6"><div class="fb-inner">Legal Review Completed</div><span>0</span></div>
  <div class="film-block" data-application-progress="7"><div class="fb-inner">Lease &nbsp; Executed</div><span>0</span></div>
  <div class="film-block" data-application-progress="8"><div class="fb-inner">Tenant NTP Issued</div><span>0</span></div>
  <div class="film-block" data-application-progress="9"><div class="fb-inner">TIDA Form Received</div><span>0</span></div>
</div>
<table class="collocation-table" cellspacing="0" cellpadding="0" width="100%">
  <tr>
    <th><span>Application ID</span></th>
    <th><span>Carrier</span></th>
    <th><span>Type</span></th>
    <th><span>Current Stage</span></th>
    <th><span>Last Modified</span></th>
    <th><span>Details</span></th>
  </tr>
  <?php
    foreach($collocationData as $cData) {
      echo '<tr class="collocation-row" data-application-progress="' . $cData[0] . '">' .
        '<td>' . $cData[2] . '</td>' .
        '<td>' . $cData[3] . '</td>' .
        '<td>' . $cData[3] . '</td>' .
        '<td>' . $cData[4] . '</td>' .
        '<td>' . $cData[5] . '</td>' .
        '<td><a href="/my-applications/site-application-' . $cData[1] . '"><i class="fa fa-search"></i> &nbsp; View Details</a></td>' .
        '</tr>';
    }
  ?>
</table>
<script type="text/javascript" src="/sites/all/themes/omega/ohm/js/collocation-ui.js"></script>