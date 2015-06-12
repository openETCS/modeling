/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-09T20:56:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_Extract_NID_packet_from_TM_lib_internal.h"

void T_Extract_NID_packet_from_reset_TM_lib_internal(
  outC_T_Extract_NID_packet_from_TM_lib_internal *outC)
{
}

/* TM_lib_internal::T_Extract_NID_packet_from_Meta */
void T_Extract_NID_packet_from_TM_lib_internal(
  inC_T_Extract_NID_packet_from_TM_lib_internal *inC,
  outC_T_Extract_NID_packet_from_TM_lib_internal *outC)
{
  outC->_L1 = inC->nid_packet_meta;
  outC->_L2 = DIM_offset_nid_packet_meta_TM;
  outC->_L3 = outC->_L1 / outC->_L2;
  outC->nid_packet_int = outC->_L3;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** T_Extract_NID_packet_from_TM_lib_internal.c
** Generation date: 2015-06-09T20:56:50
*************************************************************$ */

