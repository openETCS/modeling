#     Project: openETCS / EnvSim
#      Module: tcl / lib / ui.tcl
# Description: Common UI widgets
# 
# History:
# - 24.10.15, J. Kastner: initial version
package require Tk

namespace eval ::ui {
  set libpath "[file dirname [info script]]"
  image create photo led_green -file "$libpath/icons/led_green.gif"
  image create photo led_red -file "$libpath/icons/led_red.gif"
  image create photo led_grey -file "$libpath/icons/led_grey.gif"
}

proc ui::led {path label color var} {
  set w [ttk::label $path -compound left -image led_grey -text $label]
  updateLED $path $color $var
  trace add variable $var write "ui::updateLED $path $color"
  return $w
}

proc ui::updateLED {path color var args} {
  set newcolor grey
  if {[info exists $var]} {
    upvar $var lvar
    if {$lvar != 0} { set newcolor $color }
  }
  $path configure -image led_$newcolor
}
