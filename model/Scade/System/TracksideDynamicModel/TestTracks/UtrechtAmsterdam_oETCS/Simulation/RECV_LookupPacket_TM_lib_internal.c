/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-05T15:50:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_LookupPacket_TM_lib_internal.h"

void RECV_LookupPacket_reset_TM_lib_internal(
  outC_RECV_LookupPacket_TM_lib_internal *outC)
{
  kcg_int i;
  
  /* 1 */ T_Filter_Metadata_reset_TM_lib_internal(&outC->_1_Context_1);
  for (i = 0; i < 30; i++) {
    /* 1 */ RECV_LookupPacketLoop_reset_TM_lib_internal(&outC->Context_1[i]);
  }
}

/* TM_lib_internal::RECV_LookupPacket */
void RECV_LookupPacket_TM_lib_internal(
  /* TM_lib_internal::RECV_LookupPacket::Message_ID */kcg_int Message_ID,
  /* TM_lib_internal::RECV_LookupPacket::HeadersIN */Metadata_T_Common_Types_Pkg *HeadersIN,
  /* TM_lib_internal::RECV_LookupPacket::F_version */kcg_bool F_version,
  /* TM_lib_internal::RECV_LookupPacket::F_id */kcg_bool F_id,
  outC_RECV_LookupPacket_TM_lib_internal *outC)
{
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  MetadataElement_T_Common_Types_Pkg tmp;
  kcg_int i;
  
  outC->_L36 = F_id;
  for (i3 = 0; i3 < 30; i3++) {
    outC->_L40[i3] = outC->_L36;
  }
  outC->_L35 = F_version;
  for (i2 = 0; i2 < 30; i2++) {
    outC->_L38[i2] = outC->_L35;
  }
  outC->_L34 = Message_ID;
  outC->_L32 = F_id;
  outC->_L31 = F_version;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L22,
    (MetadataElement_T_Common_Types_Pkg *) &DEFAULT_PHeader_TM);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L1, HeadersIN);
  for (i1 = 0; i1 < 30; i1++) {
    outC->_L3[i1] = outC->_L34;
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
        outC->_L38[i],
        outC->_L40[i],
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
  outC->_L2 = Message_ID;
  /* 1 */
  T_Filter_Metadata_TM_lib_internal(
    outC->_L24,
    outC->_L2,
    outC->_L31,
    outC->_L32,
    &outC->_1_Context_1);
  outC->_L30 = outC->_1_Context_1.data_match;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L27,
    (MetadataElement_T_Common_Types_Pkg *) &DEFAULT_PHeader_TM);
  if (outC->_L30) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L26, &outC->_L23);
  }
  else {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L26, &outC->_L27);
  }
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->HeaderFound, &outC->_L26);
  outC->_L29 = 1;
  outC->_L28 = outC->_L4 - outC->_L29;
  outC->Index = outC->_L28;
  outC->Found = outC->_L30;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_LookupPacket_TM_lib_internal.c
** Generation date: 2015-07-05T15:50:16
*************************************************************$ */

