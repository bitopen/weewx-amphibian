## amphibian for weewx - Copyright 2012-2013 Matthew Wall

<div class='wide bordered line cell' style='clear:both'>
  <div class='leftCell'>
    Position:
      $station.latitude[0]&deg; $station.latitude[1]' $station.latitude[2]
      $station.longitude[0]&deg; $station.longitude[1]' $station.longitude[2]
      $station.altitude
  </div>
  <div class="clearCell">
    System: weewx $station.version with $station.hardware - amphibian $Extras.version
  </div>
  <div class='clearCell'>
    <!-- Uptime: $station.uptime - server: $station.os_uptime -->
  </div>
  <div class="clearCell" id="customFooter">
    $Extras.customFooter
  </div>
</div>

## Include the Google Analytics code if there is an ID available:
#if $Extras.has_key('googleAnalyticsId')
<script type="text/javascript">
  var gaJsHost = (("https:" == document.location.protocol) ? "https://ssl." : "http://www.");
  document.write(unescape("%3Cscript src='" + gaJsHost + "google-analytics.com/ga.js' type='text/javascript'%3E%3C/script%3E"));
</script>
<script type="text/javascript">
  try{
  var pageTracker = _gat._getTracker("$Extras.googleAnalyticsId");
  pageTracker._trackPageview();
  } catch(err) {}
</script>
#end if
