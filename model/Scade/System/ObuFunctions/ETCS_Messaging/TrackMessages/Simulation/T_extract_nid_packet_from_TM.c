/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-06T16:49:38
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_extract_nid_packet_from_TM.h"

void T_extract_nid_packet_from_reset_TM(outC_T_extract_nid_packet_from_TM *outC)
{
}

/* TM::T_extract_nid_packet_from_metadata */
void T_extract_nid_packet_from_TM(
  inC_T_extract_nid_packet_from_TM *inC,
  outC_T_extract_nid_packet_from_TM *outC)
{
  outC->_L1 = inC->Metadata_in;
  outC->_L3 = DIM_offset_metadata_nid_packet_TM_lib_internal;
  outC->_L4 = outC->_L1 / outC->_L3;
  outC->nid_packet = outC->_L4;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** T_extract_nid_packet_from_TM.c
** Generation date: 2015-07-06T16:49:38
*************************************************************$ */

