## amphibian for weewx - Copyright 2012-2013 Matthew Wall

## TODO: $Extras from skin.conf/weewx.conf [Extras] should be $ImageGenerator from [ImageGenerator], but seems no access to such an object from cheetah template

## get image size (from skins.conf/weewx.conf)
#try  ## period specific image size
    #if      $period == "hour"
        #set width=$Extras.hour_images.image_width
        #set height=$Extras.hour_images.image_height
    #else if $period == "day"
        #set width=$Extras.day_images.image_width
        #set height=$Extras.day_images.image_height
    #else if $period == "week"
        #set width=$Extras.week_images.image_width
        #set height=$Extras.week_images.image_height
    #else if $period == "month"
        #set width=$Extras.month_images.image_width
        #set height=$Extras.month_images.image_height
    #else if $period == "year"
        #set width=$Extras.year_images.image_width
        #set height=$Extras.year_images.image_height
    #end if
#except  ## default image size
    #set width=$Extras.image_width
    #set height=$Extras.image_height
#end try

<div id='charts'>
  <div>
    <div class='bordered cell graph' style='clear:both'>
      <div class='leftCell'>Temperature and Dew Point</div><div class='units'>$unit.label.outTemp</div>
      <div><img id='img_inouttempdew' class='plot' src='${period}inouttempdew.png' width="$width" height="$height" alt='Temperature and Dew Point'/></div>
    </div>
    <div class='bordered cell graph'>
      <div class='leftCell'>Wind Chill / Heat Index</div><div class='units'>$unit.label.outTemp</div>
      <div><img id='img_tempchill' class='plot' src='${period}tempchill.png' width="$width" height="$height" alt='Wind Chill / Heat Index'/></div>
    </div>
    <div class='bordered cell graph'>
      <div class='leftCell'>Humidity</div><div class='units'>$unit.label.outHumidity</div>
      <div><img id='img_inouthum' class='plot' src='${period}inouthum.png' width="$width" height="$height" alt='Humidity'/></div>
    </div>
    <div class='bordered cell graph'>
      <div class='leftCell'>Pressure</div><div class='units'>$unit.label.barometer</div>
      <div><img id='img_barometer' class='plot' src='${period}barometer.png' width="$width" height="$height" alt='Pressure'/></div>
    </div>
  </div>
  <div>
    <div class='bordered cell graph' style='clear:both'>
      <div class='leftCell'>Wind and Gusts</div><div class='units'>$unit.label.windSpeed</div>
      <div><img id='img_wind' class='plot' src='${period}wind.png' width="$width" height="$height" alt='Wind and Gusts'/></div>
    </div>
    <div class='bordered cell graph'>
      <div class='leftCell'>Wind Direction</div>
      <div><img id='img_winddir' class='plot' src='${period}winddir.png' width="$width" height="$height" alt='Wind Direction'/></div>
    </div>
    <div class='bordered cell graph'>
      <div class='leftCell'>Wind Vector</div>
      <div><img id='img_windvec' class='plot' src='${period}windvec.png' width="$width" height="$height" alt='Wind Vector'/></div>
    </div>
  </div>
  <div>
    <div class='bordered cell graph' style='clear:both'>
      <div class='leftCell'>Rain</div><div class='units'>$unit.label.rain</div>
      <div><img id='img_rain' class='plot' src='${period}rain.png' width="$width" height="$height" alt='Rain'/></div>
    </div>
  </div>
#if $year.radiation.has_data
  <div>
    <div class='bordered cell graph' style='clear:both'>
      <div class='leftCell'>Solar Radiation</div><div class='units'>$unit.label.radiation</div>
      <div><img id='img_radiation' class='plot' src='${period}radiation.png' width="$width" height="$height" alt='Solar Radiation'/></div>
    </div>
  </div>
#end if
</div>
