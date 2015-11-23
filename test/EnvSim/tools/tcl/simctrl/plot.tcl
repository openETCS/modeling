#     Project: openETCS / EnvSim
#      Module: simctrl / plot.tcl
# Description: Visualizes train position etc. in a simple graph.
# 
# History:
# - 21.11.15, J. Kastner: initial version
package require Plotchart

namespace eval ::plot {
  variable posPlot

  set active 1
}

proc plot::initView {path} {
  variable posPlot

  ttk::frame $path -padding 5

  grid [canvas $path.c -background white -width 600 -height 300] -sticky wesn
  grid columnconfigure $path 0 -weight 1
  grid rowconfigure $path 0 -weight 1

  set posPlot [Plotchart::createStripchart $path.c {0 60 10} {-50 50 20}]
  $posPlot title "Position Accuracy"
  $posPlot xtext s
  $posPlot ytext m
}

proc plot::updatePosPlot {tstamp nom max min} {
  variable posPlot

  set dmax [expr $max / 100.0]
  set dmin [expr $min / 100.0]
  set t  [expr $tstamp / 1000.0]
  $posPlot plot max $t $dmax
  $posPlot plot min $t $dmin
}
