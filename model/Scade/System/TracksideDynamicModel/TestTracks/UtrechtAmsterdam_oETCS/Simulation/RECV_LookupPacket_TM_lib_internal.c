/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-05T13:58:18
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_LookupPacket_TM_lib_internal.h"

void RECV_LookupPacket_reset_TM_lib_internal(
  outC_RECV_LookupPacket_TM_lib_internal *outC)
{
  kcg_int i;
  
  for (i = 0; i < 30; i++) {
    /* 1 */ RECV_LookupPacketLoop_reset_TM_lib_internal(&outC->Context_1[i]);
  }
}

/* TM_lib_internal::RECV_LookupPacket */
void RECV_LookupPacket_TM_lib_internal(
  /* TM_lib_internal::RECV_LookupPacket::Message_ID */kcg_int Message_ID,
  /* TM_lib_internal::RECV_LookupPacket::HeadersIN */Metadata_T_Common_Types_Pkg *HeadersIN,
  outC_RECV_LookupPacket_TM_lib_internal *outC)
{
  kcg_int i1;
  MetadataElement_T_Common_Types_Pkg tmp;
  kcg_int i;
  
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L22,
    (MetadataElement_T_Common_Types_Pkg *) &DEFAULT_PHeader_TM);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L1, HeadersIN);
  outC->_L2 = Message_ID;
  for (i1 = 0; i1 < 30; i1++) {
    outC->_L3[i1] = outC->_L2;
  }
  outC->_L5 = kcg_true;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L23, &outC->_L22);
  if (outC->_L5) {
    for (i = 0; i < 30; i++) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(&tmp, &outC->_L23);
      /* 1 */
      RECV_LookupPacketLoop_TM_lib_internal(
        i,
        &tmp,
        &outC->_L1[i],
        outC->_L3[i],
        &outC->Context_1[i]);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &outC->_L23,
        &outC->Context_1[i].HeaderFound);
      outC->_L4 = i + 1;
      if (!outC->Context_1[i].Cont) {
        break;
      }
    }
  }
  else {
    outC->_L4 = 0;
  }
  outC->_L24 = outC->_L23.nid_packet;
  outC->_L25 = outC->_L24 == outC->_L2;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L27,
    (MetadataElement_T_Common_Types_Pkg *) &DEFAULT_PHeader_TM);
  if (outC->_L25) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L26, &outC->_L23);
  }
  else {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L26, &outC->_L27);
  }
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->HeaderFound, &outC->_L26);
  outC->_L29 = 1;
  outC->_L28 = outC->_L4 - outC->_L29;
  outC->Index = outC->_L28;
  outC->Found = outC->_L25;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_LookupPacket_TM_lib_internal.c
** Generation date: 2015-06-05T13:58:18
*************************************************************$ */

