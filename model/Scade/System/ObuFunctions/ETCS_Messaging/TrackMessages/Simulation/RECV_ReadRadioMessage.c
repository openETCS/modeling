/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-03-05T15:23:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_ReadRadioMessage.h"

void RECV_ReadRadioMessage_reset(outC_RECV_ReadRadioMessage *outC)
{
  /* 1 */ RECV_ReadRadioPacket_reset(&outC->_1_Context_1);
  /* 1 */ RECV_LookupRadioPacket_reset(&outC->Context_1);
}

/* RECV_ReadRadioMessage */
void RECV_ReadRadioMessage(
  inC_RECV_ReadRadioMessage *inC,
  outC_RECV_ReadRadioMessage *outC)
{
  array_int_500 tmp;
  kcg_int noname;
  
  kcg_copy_CompressedRadioPackets(&outC->_L5, &inC->Packets);
  kcg_copy_CompressedRadioData(&outC->_L41, &outC->_L5.PacketData);
  outC->_L45 = inC->PacketID;
  kcg_copy_CompressedRadioHeaders(&outC->_L40, &outC->_L5.PacketHeaders);
  /* 1 */ RECV_LookupRadioPacket(outC->_L45, &outC->_L40, &outC->Context_1);
  outC->_L1 = outC->Context_1.Found;
  outC->_L2 = outC->Context_1.Index;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L3,
    &outC->Context_1.HeaderFound);
  outC->tmp = outC->_L1;
  if (outC->tmp) {
    /* 1 */ RECV_ReadRadioPacket(&outC->_L3, &outC->_L41, &outC->_1_Context_1);
    kcg_copy_array_int_500(&tmp, &outC->_1_Context_1.PacketOut);
  }
  kcg_copy_CompressedRadioData(
    &outC->_L44,
    (CompressedRadioData *) &EmptyRadioData);
  if (outC->tmp) {
    kcg_copy_array_int_500(&outC->_L4, &tmp);
  }
  else {
    kcg_copy_CompressedRadioData(&outC->_L4, &outC->_L44);
  }
  kcg_copy_array_int_500(&outC->Data, &outC->_L4);
  noname = outC->_L2;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_ReadRadioMessage.c
** Generation date: 2015-03-05T15:23:29
*************************************************************$ */

