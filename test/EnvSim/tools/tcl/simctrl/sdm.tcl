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

  set active 1
  set targetType -
  set targetDistance 0
  set targetSpeed 0

}

proc sdm::initView {path} {
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

  #set posPlot [Plotchart::createStripchart $path.c {0 60 10} {-50 50 20}]
  set bcPlot [Plotchart::createXYPlot $path.c {0 20000 5000} {0 300 25}]
#  $posPlot title "Position Accuracy"
#  $posPlot xtext s
#  $posPlot ytext m

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

proc sdm::handleBCMessage {data} {
  variable bcPlot

  puts "$data"
  puts {}
  #::Plotchart::eraseplot $bcPlot
  #plotCurve [dict get $data eoasbd]
}

proc sdm::plotCurve {dist acc speed} {
  variable bcPlot

  set x [0 5000 10000 15000 20000 25000 30000]
  foreach x $x {
    lappend v [calcBCPoint $x $dist $speed $acc]
  }

  $bcPlot plotlist eoasbd "$x" "$v"

}

proc sdm::calcBCPoint {x x0 v0 a} {
  return [expr sqrt( v0*v0 + 2*a*(x0-x) )]
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
