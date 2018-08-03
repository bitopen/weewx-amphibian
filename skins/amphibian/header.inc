## amphibian for weewx - Copyright 2012-2013 Matthew Wall

<div class='wide bordered line cell'>
  <div class='leftCell'>
$station.location ($station.latitude[0]&deg; $station.latitude[1]' $station.latitude[2] $station.longitude[0]&deg; $station.longitude[1]' $station.longitude[2] $station.altitude)
  </div>
  <div class='rightCell'>
$current.dateTime
  </div>
</div>

<div style='width: 100%'>
  <div class='bordered header' style='clear: both'>
    <div class='headerContent'>
      <span class='bigger'><span class='value'>$current.outTemp.formatted</span>&deg;</span>$unit.label.outTemp<br/>
      Humidity <span class='value'>$current.outHumidity.formatted</span> $unit.label.outHumidity<br/>
      Pressure <span class='value'>$current.barometer.formatted</span> $unit.label.barometer<br/>
    </div>
    <div class='leftCell leftpad rightAlign'>
      <span class='bigger'>&#8962; &nbsp;</span><br/>
      <span class='value'></span>&deg;C<br/>
      <span class='value'></span> %<br/>
    </div>
  </div>
  <div class='bordered headerNoPad'>
    <div class='leftCell'>rose</div>
    <div class='leftCell smallpad'>
      Wind <span class='value'>$current.windSpeed.formatted</span> $unit.label.windSpeed<br/>
      Gust <span class='value'>$current.windGust.formatted</span> $unit.label.windSpeed<br/>
      Rain <span class='value'>$current.rainRate.formatted</span> $unit.label.rainRate<br/>
    </div>
  </div>
  <div class='bordered headerNoPad'>
    <div class='leftCell smallpad'>
#if $almanac.hasExtras
      Sunrise <span class='value'>$almanac.sun.rise</span><br/>
      Sunset <span class='value'>$almanac.sun.set</span><br/>
      Moonrise <span class='value'>$almanac.moon.rise</span><br/>
      Moonset <span class='value'>$almanac.moon.set</span><br/>
#else
      Sunrise <span class='value'>$almanac.sunrise</span><br/>
      Sunset <span class='value'>$almanac.sunset</span><br/>
#end if
      Phase <span class='value'>$almanac.moon_phase $almanac.moon_fullness% full</span><br/>
    </div>
  </div>
</div>


<div class='tabPane'>
  <div class='leftCell' style='width:10px'>&nbsp;</div>
  <div id='3hours' class='tab'><a href='.'>3 Hours</a></div>
  <div id='24hours' class='tab'><a href='day.html'>24 Hours</a></div>
  <div id='7days' class='tab'><a href='week.html'>7 Days</a></div>
  <div id='30days' class='tab'><a href='month.html'>30 Days</a></div>
  <div id='365days' class='tab'><a href='year.html'>365 Days</a></div>
  <div style='float:right; width:10px;'>&nbsp;</div>
  <div id='button-tables' class='rightTab'>Tables</div>
  <div id='button-charts' class='rightTab'>Charts</div>
</div>
