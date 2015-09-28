//     Project: openETCS libenvsim
//      Module: tcl / config.tcl.h
// Description: Tcl script for configuration commands
//
// History:
// - 25.09.15, J. Kastner: initial version

#ifndef LIBENVSIM_CONFIG_TCL_H
#define LIBENVSIM_CONFIG_TCL_H

const char *es_tcl_script_config =
  "namespace eval ::config { variable props [dict create] };"
  // returns the configuration value at the specified path (see Tcl dict)
  "proc config::get {args} { variable props; if [dict exists $props $args] {dict get $props $args } else {} };"
  // defines the path to the track file
  "proc config::track {path} { variable props; dict set props track \"$path\" };"
  // parses the specified configuration file;
  // during parsing, $cfgdir contains the name of the directory where the config file lies
  "proc config::parse {file} { "
  "  log info config \"loading config file '$file'\";"
 // "  set cfgdir [file dirname $file];"
  "  source \"$file\"};"
;

#endif //LIBENVSIM_CONFIG_TCL_H
