## amphibian for weewx - Copyright 2012-2013 Matthew Wall

<div class='wide bordered line cell'>
  <div class='inlineCell'>
    $station.location
  </div>
  <div class='inlineCell'>
      at $current.dateTime.format("%Y-%m-%d %H:%M %Z")
  </div>
  <div class="clearCell" id="customHeader">
    $Extras.customHeader
  </div>
</div>

<div style='width: 100%'>
  <div class='bordered header' style='clear: both'>
    <div class='headerContent'>
      <span class='bigger'><span class='value'>$current.outTemp.formatted</span>&deg;</span> $unit.label.outTemp<br/>
      Humidity <span class='value'>$current.outHumidity.formatted</span> $unit.label.outHumidity<br/>
      Pressure <span class='value'>$current.barometer.formatted</span> $unit.label.barometer<br/>
    </div>
    <div class='leftCell leftpad rightAlign'>
      <span class='value'>$current.inTemp.formatted</span>$unit.label.outTemp<br/>
      <span class='value'>$current.inHumidity.formatted</span>$unit.label.outHumidity<br/>
      <span class='bigger'>
#if $varExists('trend')
#if $trend.barometer.raw is not None:
#if $trend.barometer.raw > 6
      &#8679;&#8679;&#8679;
#elif $trend.barometer.raw > 3
      &#8679;&#8679;
#elif $trend.barometer.raw > 0.5
      &#8679;
#elif $trend.barometer.raw < -6
      &#8681;&#8681;&#8681;
#elif $trend.barometer.raw < -3
      &#8681;&#8681;
#elif $trend.barometer.raw < 0.5
      &#8681;
#end if
#end if
#end if
      </span><br/>
    </div>
  </div>
  <div class='bordered headerNoPad'>
    <div class='leftCell'><!-- TODO: windrose image --></div>
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
  <div id='hour' class='tab#if $period == "hour" then " selected" else ""#'><a id='hour-link' href='.'>Hour</a></div>
  <div id='day' class='tab#if $period == "day" then " selected" else ""#'><a id='day-link' href='day.html'>Day</a></div>
  <div id='week' class='tab#if $period == "week" then " selected" else ""#'><a id='week-link' href='week${table}.html'>Week</a></div>
  <div id='month' class='tab#if $period == "month" then " selected" else ""#'><a id='month-link' href='month${table}.html'>Month</a></div>
  <div id='year' class='tab#if $period == "year" then " selected" else ""#'><a id='year-link' href='year${table}.html'>Year</a></div>
  <div id='almanac' class='tab#if $period == "almanac" then " selected" else ""#'><a href='almanac.html'>Almanac</a></div>
  <div style="float: right; margin-right: 10px;">
    <div id='button-charts' class='tab#if $table then "" else " selected"#'><a id='button-charts-link' href='#slurp
#if $period == "hour"
.#slurp
#else if $period == "almanac"
year.html#slurp
#else
${period}.html#slurp
#end if
'>Charts</a></div>
    <div id='button-tables' class='tab#if $table then " selected" else ""#'><a id='button-tables-link' href='#slurp
#if $period in ["hour", "day"] then "week" else $period##slurp
#if $period in ["almanac", ] then "" else "-table" ##slurp
.html'>Tables</a></div>
  </div>
</div>
<div style="clear: both"></div>  ## TODO: tabPane should get heigth from cildrens (but does not becaus they float)
