<?php

/**
 * @file
 * Template to display a view as a table.
 */
?>
<div class="application-submenu">
  <ul>
    <!--<li><a href="#"><i class="fa fa-folder-open fa-lg"></i> Project Folders</a></li>-->
    <li class="active"><a href="#"><i class="fa fa-wifi fa-lg"></i> Application Tracker</a></li>
    <?php global $user; if($user->uid): ?>
      <?php if(in_array('administrator', $user->roles)) { echo '<li><a href="/node/add/siteapplication"><i class="fa fa-file-text-o fa-lg"></i> Create New Application</a></li>'; } ?>	
      <li><a href="/user/logout"><i class="fa fa-user fa-lg"></i> Logout <?php print_r($user->name); ?></a></li>
    <?php else: ?>
      <li><a href="/user/login"><i class="fa fa-user fa-lg"></i> User Login</a></li>
    <?php endif; ?>
    <!--<li><a href="#"><i class="fa fa-book fa-lg"></i> Preferences</a></li>
    <li><a href="#"><i class="fa fa-users fa-lg"></i> Profile</a></li>-->
  </ul>
</div>
<h3 class="page-title">My Applications <span>Total applications: (<?php $view = views_get_current_view(); echo count($view->result); ?>)</span></h3>
<div class="application-film">
  <div class="film-block"><div class="fb-inner">Collocation Application Uploaded</div><span>0</span></div>
  <div class="film-block"><div class="fb-inner">Due Diligence Completed</div><span>0</span></div>
  <div class="film-block"><div class="fb-inner">Structural Analysis Completed</div><span>0</span></div>
  <div class="film-block"><div class="fb-inner">Landlord or Owner Review Completed</div><span>0</span></div>
  <div class="film-block"><div class="fb-inner">Tower Mods Completed</div><span>0</span></div>
  <div class="film-block"><div class="fb-inner">Lease Terms Negotiated</div><span>0</span></div>
  <div class="film-block"><div class="fb-inner">Legal Review Completed</div><span>0</span></div>
  <div class="film-block"><div class="fb-inner"> Lease Executed </div><span>0</span></div>
  <div class="film-block"><div class="fb-inner">Tenant NTP Issued</div><span>0</span></div>
  <div class="film-block"><div class="fb-inner">TIDA Form Received</div><span>0</span></div>
</div>
<table<?php print $attributes; ?>>
  <?php if (!empty($title) || !empty($caption)): ?>
    <caption><?php print $caption . $title; ?></caption>
  <?php endif; ?>
  <?php if (!empty($header)): ?>
    <thead>
      <tr>
        <?php foreach ($header as $field => $label): ?>
          <th<?php print $header_attributes[$field]; ?>>
            <?php print $label; ?>
          </th>
        <?php endforeach; ?>
      </tr>
    </thead>
  <?php endif; ?>
  <tbody>
  <?php print $rows; ?>
  </tbody>
</table>
<script type="text/javascript" src="/sites/all/themes/omega/ohm/js/collocation-ui.js"></script>

