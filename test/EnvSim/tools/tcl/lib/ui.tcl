#     Project: openETCS / EnvSim
#      Module: tcl / lib / ui.tcl
# Description: Common UI widgets
# 
# History:
# - 24.10.15, J. Kastner: initial version
# - 21.11.15, J. Kastner: add ui::slider
package require Tk

namespace eval ::ui {
  set libpath "[file dirname [info script]]"
  image create photo led_green -file "$libpath/icons/led_green.gif"
  image create photo led_red -file "$libpath/icons/led_red.gif"
  image create photo led_grey -file "$libpath/icons/led_grey.gif"
  image create photo balise -file "$libpath/icons/balise.gif"
  image create photo rmsg -file "$libpath/icons/rmsg.gif"
  image create photo tmsg -file "$libpath/icons/tmsg.gif"

  variable isOSX [expr {"Darwin" eq $::tcl_platform(os)}]
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

proc ui::addLabelField {path label var col row {rdly false} {width 10}} {
  grid [ttk::label ${path}_l -text $label] -column $col -row $row -sticky e
  if {$rdly} {
    grid [ttk::label ${path}_v -textvariable $var -width $width] -column [expr $col + 1] -row $row -sticky w
  } else {
    grid [ttk::entry ${path}_v -textvariable $var] -column [expr $col + 1] -row $row -sticky w
  }
}

proc ui::slider {path args} {
  variable isOSX
  if $isOSX {
    eval scale $path -background systemDialogBackgroundActive $args
  } else {
    eval scale $path $args
  }
}
