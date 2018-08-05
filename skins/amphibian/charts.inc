## amphibian for weewx - Copyright 2012-2013 Matthew Wall

<div id='charts'>
  <div>
    <div class='bordered cell graph' style='clear:both'>
      <div class='leftCell'>Temperature and Dew Point</div><div class='units'>$unit.label.outTemp</div>
      <div><img id='img_inouttempdew' class='plot' src='favicon.ico' alt='Temperature and Dew Point'/></div>
    </div>
    <div class='bordered cell graph'>
      <div class='leftCell'>Wind Chill / Heat Index</div><div class='units'>$unit.label.outTemp</div>
      <div><img id='img_tempchill' class='plot' src='favicon.ico' alt='Wind Chill / Heat Index'/></div>
    </div>
    <div class='bordered cell graph'>
      <div class='leftCell'>Humidity</div><div class='units'>$unit.label.outHumidity</div>
      <div><img id='img_inouthum' class='plot' src='favicon.ico' alt='Humidity'/></div>
    </div>
    <div class='bordered cell graph'>
      <div class='leftCell'>Pressure</div><div class='units'>$unit.label.barometer</div>
      <div><img id='img_barometer' class='plot' src='favicon.ico' alt='Pressure'/></div>
    </div>
  </div>
  <div>
    <div class='bordered cell graph' style='clear:both'>
      <div class='leftCell'>Wind and Gusts</div><div class='units'>$unit.label.windSpeed</div>
      <div><img id='img_wind' class='plot' src='favicon.ico' alt='Wind and Gusts'/></div>
    </div>
    <div class='bordered cell graph'>
      <div class='leftCell'>Wind Direction</div>
      <div><img id='img_winddir' class='plot' src='favicon.ico' alt='Wind Direction'/></div>
    </div>
    <div class='bordered cell graph'>
      <div class='leftCell'>Wind Vector</div>
      <div><img id='img_windvec' class='plot' src='favicon.ico' alt='Wind Vector'/></div>
    </div>
  </div>
  <div>
    <div class='bordered cell graph' style='clear:both'>
      <div class='leftCell'>Rain</div><div class='units'>$unit.label.rain</div>
      <div><img id='img_rain' class='plot' src='favicon.ico' alt='Rain'/></div>
    </div>
  </div>
#if $year.radiation.has_data
  <div>
    <div class='bordered cell graph' style='clear:both'>
      <div class='leftCell'>Solar Radiation</div><div class='units'>$unit.label.radiation</div>
      <div><img id='img_radiation' class='plot' src='favicon.ico' alt='Solar Radiation'/></div>
    </div>
  </div>
#end if
</div>
