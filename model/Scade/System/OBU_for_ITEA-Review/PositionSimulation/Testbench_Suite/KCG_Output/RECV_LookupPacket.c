/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_LookupPacket.h"

/* RECV_LookupPacket */
void RECV_LookupPacket(
  /* RECV_LookupPacket::Message_ID */ kcg_int Message_ID,
  /* RECV_LookupPacket::HeadersIN */ Metadata_T_Common_Types_Pkg *HeadersIN,
  /* RECV_LookupPacket::Found */ kcg_bool *Found,
  /* RECV_LookupPacket::Index */ kcg_int *Index,
  /* RECV_LookupPacket::HeaderFound */ MetadataElement_T_Common_Types_Pkg *HeaderFound)
{
  MetadataElement_T_Common_Types_Pkg tmp1;
  kcg_bool tmp;
  kcg_int i;
  /* RECV_LookupPacket::_L4 */ kcg_int _L4;
  /* RECV_LookupPacket::_L23 */ MetadataElement_T_Common_Types_Pkg _L23;
  
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &_L23,
    (MetadataElement_T_Common_Types_Pkg *) &DEFAULT_PHeader);
  for (i = 0; i < 30; i++) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&tmp1, &_L23);
    /* 1 */
    RECV_LookupPacketLoop(i, &tmp1, &(*HeadersIN)[i], Message_ID, &tmp, &_L23);
    _L4 = i + 1;
    if (!tmp) {
      break;
    }
  }
  *Index = _L4 - 1;
  *Found = _L23.nid_packet == Message_ID;
  if (*Found) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(HeaderFound, &_L23);
  }
  else {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      HeaderFound,
      (MetadataElement_T_Common_Types_Pkg *) &DEFAULT_PHeader);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** RECV_LookupPacket.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

