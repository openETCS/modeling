#     Project: openETCS / EnvSim
#      Module: simctrl / sdm.tcl
# Description: Logs/visualizes data from Speed&Distance Monitoring (braking curves)
# 
# History:
# - 30.10.15, J. Kastner: initial version
# - 02.12.15, J. Kastner: implement braking curves plot
package require Plotchart

namespace eval ::sdm {
  variable bcPlot
  variable canv

  set active 1
  set targetType -
  set targetDistance 0
  set targetSpeed 0

  variable bcData {}
  variable plotXMax 35000
  variable plotXMin 0
}

proc sdm::initView {path} {
  variable canv
  variable bcPlot

  ttk::frame $path -padding 5
  grid columnconfigure $path 0 -weight 1
  grid rowconfigure $path 1 -minsize 10 -weight 0
  grid rowconfigure $path 2 -weight 1
  
  # Current target
  grid [ttk::frame $path.i] -column 0 -row 0
  view::addLabelField $path.i.type "Target type:" sdm::targetType 0 0 true
  view::addLabelField $path.i.dist "Distance (m):" sdm::targetDistance 3 0 true
  view::addLabelField $path.i.speed "Speed (km/h):" sdm::targetSpeed 6 0 true

  # Plot
  grid [canvas $path.c -background white -width 600 -height 320] -column 0 -row 2 -sticky wesn
  set canv $path.c
  createPlot 0 35000 5000 0 300 25
}

proc sdm::targetTypeString {value} {
  switch $value {
    0 { return EoA }
    1 { return SvL }
    2 { return MRSP }
    3 { return invalid }
    4 { return LoA }
  }
}

proc sdm::handleTargetMessage {data} {
  binary scan "$data" iii type distance speed
  set sdm::targetType [targetTypeString $type]
  set sdm::targetDistance [format "%.1f" [expr 0.01 * $distance]]
  set sdm::targetSpeed $speed

  logTarget 
}


proc sdm::createPlot {xmin xmax dx ymin ymax dy} {
  variable canv
  variable bcPlot

  set bcPlot [Plotchart::createXYPlot $canv "$xmin $xmax $dx" "$ymin $ymax $dy"]

  $bcPlot xtext "Position (m)"
  $bcPlot ytext "km/h"

  $bcPlot dataconfig eoasbd -color red -width 1
  $bcPlot dataconfig svlebd -color brown -width 1
  $bcPlot dataconfig mrsp -color blue -width 1

  $bcPlot legend eoasbd EoA-SBD
  $bcPlot legend svlebd SvL-EBD 15
  $bcPlot legend mrsp MRSP 15
  #$bcPlot dataconfig train -color green
}

proc sdm::handleBCMessage {data} {
  variable bcData

  set bcData [dict merge "$data"]

  drawBCData
}

proc sdm::drawBCData {} {
  variable canv
  variable bcPlot
  variable bcData

  $canv delete all

  foreach {xmin xmax dx ymin ymax dy} [computeRanges] {
    createPlot $xmin $xmax $dx $ymin $ymax $dy
  }

  if [dict exists $bcData eoasbd] {
    set data "[dict get $bcData eoasbd]"
    plotCurve eoasbd $data
  }

  if [dict exists $bcData svlebd] {
    set data "[dict get $bcData svlebd]"
    plotCurve svlebd $data
  }

  if [dict exists $bcData mrsp] {
    set data "[dict get $bcData mrsp]"
    plotCurve mrsp $data
  }
}

proc sdm::computeRanges {} {
  variable bcData

  set max_dist [dict get $bcData max_dist]
  set range [expr $max_dist - $model::currentPos]
  set xmin [expr $model::currentPos - 0.1*$range]
  set xmax [expr $max_dist + 0.1*$range]
  
  if {$range > 30000} {
    set dx 10000
  } elseif {$range > 15000} {
    set dx 5000
  } elseif {$range > 7500} {
    set dx 2500
  } elseif {$range > 3000} {
    set dx 1000
  } else {
    set dx 500
  }
  return "$xmin $xmax $dx 0 300 25"
}

proc sdm::updateTrainState {pos speed} {
  variable canv
  variable bcPlot

  $bcPlot plot train $pos $speed
}

proc sdm::plotCurve {series data} {

  #puts "$series:"
  set lastdist 0
  foreach {dist acc speed} "$data" {
    #puts "$dist $acc $speed $lastdist $dist"
    plotCurveSection $series $dist $acc $speed $lastdist $dist
    set lastdist $dist
  }
}

proc sdm::plotCurveSection {series dist acc speed xmin xmax {n 10}} {
  variable bcPlot

  foreach x [xrange $xmin $xmax $n] {
      lappend xdata $x
      lappend vdata [calcBCPoint $x $dist $speed $acc]
  }

  #puts ""
  #puts "xdata: $xdata"
  #puts "vdata: $vdata"
  $bcPlot plotlist $series "$xdata" "$vdata"
}


proc sdm::calcBCPoint {x x0 v0 a} {
  set det [expr $v0*$v0 + 2*$a*($x0-$x)]
  if {$det < 0} {
    return 0
  } else {
    return [expr 3.6*sqrt( $det )]
  }
  
}

proc sdm::logTarget {} {
  evts::logSDM "Target type: $sdm::targetType  Distance: $sdm::targetDistance  Speed: $sdm::targetSpeed"
}

proc sdm::logClear {} {
  variable area
  $area configure -state normal
  $area delete 1.0 end
  $area configure -state disabled
}

proc sdm::initPlot {path} {

  ttk::frame $path -padding 5
  canvas $path.c -background white
  pack $path.c -fill both
}

proc sdm::xrange {from to {n 10}} {
  set dx [expr ($to - $from) / $n]
  lappend rng $from
  set x $from
  for {set i 0} {$i<$n} {incr i} {
    set x [expr $x + $dx]
    lappend rng $x
  }
  return $rng
}

