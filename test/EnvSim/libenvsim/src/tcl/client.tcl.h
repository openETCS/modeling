//     Project: EnvSim
//      Module: Tcl / client
// Description: Tcl script for communication with the EnvSim controller server
//
// History:
// - 22.09.15, J. Kastner: initial version

#ifndef ENGINE_CLIENT_TCL_H
#define ENGINE_CLIENT_TCL_H

static const char *es_tcl_client =
  "namespace eval ::client {"
  "  variable conn"
  "};"
  "proc client::connect {server port} {"
  "  variable conn;"
     // jim socket command differs from standard Tcl socket
  "  set conn [socket stream $server:$port];"
  "  return $conn;"
  "};"

  // sends the specified command string using the currently active connection
  "proc client::sendCmd {cmd} {"
  "  variable conn;"
  "  puts $conn \"$cmd\""
  "};"

  // starts a new session using the specified client ID
  "proc client::begin {id} {"
  "  sendCmd \"begin $id\";"
  "};"

  "proc client::getconf {id} {"
  "  sendCmd \"getconf $id\";"
  "};"
"";

#endif //ENGINE_CLIENT_TCL_H
