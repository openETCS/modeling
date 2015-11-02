#     Project: openETCS / EnvSim
#      Module: simctrl / Trackview.tcl
# Description: Track view for simctrl.
#              This module provides procedures to visualize the train on track.
# 
# History:
# - 28.10.15, B. Kouengoue: initial version
# - 01.11.15, J. Kastner: integration into SimCtrl
package require Tk

namespace eval ::trackview {
  variable canvas
  variable widthCanvasPixel 1500 
  variable heightCanvasPixel 500
  variable train
  variable middleHeightCanvasPixel [expr { $heightCanvasPixel / 2 }]
  variable marginLeftPixel 5
  variable marginRightPixel 25
  variable lenghtAxisForTrackPixel [expr { $widthCanvasPixel - $marginLeftPixel - $marginRightPixel }]	
}

proc trackview::ClearCanvas {canvas} {	
  $canvas delete "all" 
} 

proc trackview::init {path {height 30} {width 600}} {	
  variable canvas
#variable widthCanvasPixel
  variable heightCanvasPixel
  set canvas [canvas $path -height $height -width $width]
  #append r "Route: " $route
  #$canvas create text 0 [expr {$heightCanvasPixel - 20}] -text $r -anchor w -font {Helvetica -18 bold}  
  #set trainClip [image create photo]
  #$trainClip read "train.PNG"
  #$canvas create image 755 60 -image $trainClip
}

