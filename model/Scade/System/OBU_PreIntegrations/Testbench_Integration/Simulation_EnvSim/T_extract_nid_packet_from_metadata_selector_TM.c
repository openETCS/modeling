/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_extract_nid_packet_from_metadata_selector_TM.h"

/* TM::T_extract_nid_packet_from_metadata_selector */
kcg_int T_extract_nid_packet_from_metadata_selector_TM(
  /* TM::T_extract_nid_packet_from_metadata_selector::Metadata_in */kcg_int Metadata_in)
{
  /* TM::T_extract_nid_packet_from_metadata_selector::nid_packet */
  static kcg_int nid_packet;
  
  nid_packet = Metadata_in / DIM_offset_metadata_nid_packet_TM_lib_internal;
  return nid_packet;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** T_extract_nid_packet_from_metadata_selector_TM.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

