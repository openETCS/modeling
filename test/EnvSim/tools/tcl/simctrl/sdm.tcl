#     Project: openETCS / EnvSim
#      Module: simctrl / sdm.tcl
# Description: Logs/visualizes data from Speed&Distance Monitoring (braking curves)
# 
# History:
# - 30.10.15, J. Kastner: initial version

namespace eval ::sdm {
  variable area

  set active 1
  set targetType -
  set targetDistance 0
  set targetSpeed 0

}

proc sdm::initView {path} {
  variable area

  ttk::frame $path -padding 5
  grid rowconfigure $path 1 -minsize 10 -weight 0
  
  # Current target
  grid [ttk::frame $path.i] -column 0 -row 0
  view::addLabelField $path.i.type "Target type:" sdm::targetType 0 0 true
  view::addLabelField $path.i.dist "Distance (m):" sdm::targetDistance 3 0 true
  view::addLabelField $path.i.speed "Speed (km/h):" sdm::targetSpeed 6 0 true

  # Log area
  #grid [ttk::labelframe $path.log -text Log] -column 0 -row 2 -sticky wes
  #grid [ttk::frame $path.log.btn -padding 3] -column 0 -row 0 -columnspan 2 -sticky we
  #grid [ttk::button $path.log.btn.clear -text Clear -command sdm::logClear] -column 0
  #grid [tk::text $path.log.text -height 10 -state disabled] -column 0 -row 1 -sticky wesn
  #set area $path.log.text
  #grid [ttk::scrollbar $path.log.sb -command "$area yview"] -column 1 -row 1 -sticky ns
  #$area configure -yscrollcommand "$path.log.sb set"
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
  set sdm::targetSpeed [expr 5*$speed]

  if $sdm::active { logTarget }
}

proc sdm::logTarget {} {
  #variable area
  #$area configure -state normal
  #$area insert end "\[~ [format "% 5s" $model::currentPos]m\] Target type: $sdm::targetType  Distance: $sdm::targetDistance  Speed: $sdm::targetSpeed\n"
  #$area configure -state disabled
  #$area see end

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
