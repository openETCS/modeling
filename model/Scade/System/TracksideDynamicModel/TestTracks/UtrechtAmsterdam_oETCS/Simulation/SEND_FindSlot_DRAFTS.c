/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-05T13:58:18
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_FindSlot_DRAFTS.h"

void SEND_FindSlot_reset_DRAFTS(outC_SEND_FindSlot_DRAFTS *outC)
{
}

/* DRAFTS::SEND_FindSlot */
void SEND_FindSlot_DRAFTS(
  /* DRAFTS::SEND_FindSlot::a */kcg_int a,
  /* DRAFTS::SEND_FindSlot::MessageIn */MetadataElement_T_Common_Types_Pkg *MessageIn,
  /* DRAFTS::SEND_FindSlot::EmptyHeader */MetadataElement_T_Common_Types_Pkg *EmptyHeader,
  outC_SEND_FindSlot_DRAFTS *outC)
{
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L2, MessageIn);
  outC->_L29 = outC->_L2.nid_packet;
  outC->_L28 = outC->_L2.endAddress;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L3, EmptyHeader);
  outC->_L27 = outC->_L3.nid_packet;
  outC->_L17 = outC->_L29 != outC->_L27;
  outC->_L1 = a;
  if (outC->_L17) {
    outC->_L19 = outC->_L28;
  }
  else {
    outC->_L19 = outC->_L1;
  }
  outC->Acc = outC->_L19;
  outC->Cont = outC->_L17;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SEND_FindSlot_DRAFTS.c
** Generation date: 2015-06-05T13:58:18
*************************************************************$ */
