/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-03T00:04:39
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_Build_Metadata_Packet_ID_TM_lib_internal.h"

void T_Build_Metadata_Packet_ID_reset_TM_lib_internal(
  outC_T_Build_Metadata_Packet_ID_TM_lib_internal *outC)
{
}

/* TM_lib_internal::T_Build_Metadata_Packet_ID */
void T_Build_Metadata_Packet_ID_TM_lib_internal(
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::nid_packet_in */kcg_int nid_packet_in,
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::meta_id */kcg_int meta_id,
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::nid_packet */NID_PACKET nid_packet,
  outC_T_Build_Metadata_Packet_ID_TM_lib_internal *outC)
{
  kcg_bool noname;
  
  outC->_L1 = nid_packet_in;
  outC->_L3 = nid_packet;
  outC->_L4 = outC->_L1 == outC->_L3;
  outC->_L10 = DIM_offset_nid_packet_meta_TM;
  outC->_L9 = outC->_L3 * outC->_L10;
  outC->_L2 = meta_id;
  outC->_L11 = outC->_L9 + outC->_L2;
  outC->_L8 = ERROR_nid_packet_TM;
  if (outC->_L4) {
    outC->_L12 = outC->_L11;
  }
  else {
    outC->_L12 = outC->_L8;
  }
  outC->_L6 = !outC->_L4;
  noname = outC->_L6;
  outC->nid_packet_meta = outC->_L12;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** T_Build_Metadata_Packet_ID_TM_lib_internal.c
** Generation date: 2015-07-03T00:04:39
*************************************************************$ */

