#     Project: openETCS / EnvSim
#      Module: tcl / lib / enum.tcl
# Description: Translation functions for ETCS enum variables
# 
# History:
# - 21.11.15, J. Kastner: initial version

namespace eval ::enum {}

proc enum::modeName {m_mode} {
  switch $m_mode {
    0 { return FS }
    1 { return OS }
    2 { return SR }
    3 { return SH }
    4 { return UN }
    5 { return SL }
    6 { return SB }
    7 { return TR }
    8 { return PT }
    9 { return SF }
    10 { return IS }
    11 { return NL }
    12 { return LS }
    13 { return SN }
    14 { return RV }
    15 { return PS }
    default { error "invalid m_mode=$m_mode" }
  }
}

proc enum::levelName {m_level} {
  switch $m_level {
    0 { return 0 }
    1 { return NTC }
    2 { return 1 }
    3 { return 2 }
    4 { return 3 }
    default { error "invalid m_level=$m_level" }
  }
}

proc enum::dirlrbgName {q_dirlrbg} {
  switch $q_dirlrbg {
    0 { return R }
    1 { return N }
    2 { return ? }
    default { error "invalid q_dirlrbg=$q_dirlrbg" }
  }
}

proc enum::dirtrainName {q_dirtrain} {
  switch $q_dirtrain {
    0 { return R }
    1 { return N }
    2 { return ? }
    default { error "invalid q_dirtrain=$q_dirtrain" }
  }
}
