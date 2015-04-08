/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-03-05T02:26:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_ReadRadioDataElement.h"

void RECV_ReadRadioDataElement_reset(outC_RECV_ReadRadioDataElement *outC)
{
  kcg_int i;
  
  for (i = 0; i < 100; i++) {
    /* 1 */ RECV_ReadRadioDataElementLoop_reset(&outC->Context_1[i]);
  }
}

/* RECV_ReadRadioDataElement */
void RECV_ReadRadioDataElement(
  inC_RECV_ReadRadioDataElement *inC,
  outC_RECV_ReadRadioDataElement *outC)
{
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  kcg_int noname;
  
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L2, &inC->HeaderFound);
  for (i2 = 0; i2 < 100; i2++) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L5[i2], &outC->_L2);
  }
  kcg_copy_CompressedRadioData(&outC->_L3, &inC->DataIn);
  for (i1 = 0; i1 < 100; i1++) {
    kcg_copy_CompressedRadioData(&outC->_L6[i1], &outC->_L3);
  }
  outC->_L1 = inC->Found;
  if (outC->_L1) {
    for (i = 0; i < 100; i++) {
      /* 1 */
      RECV_ReadRadioDataElementLoop(
        i,
        &outC->_L5[i],
        &outC->_L6[i],
        &outC->Context_1[i]);
      outC->_L7[i] = outC->Context_1[i].PacketOut;
      outC->_L4 = i + 1;
      if (!outC->Context_1[i].Cont) {
        break;
      }
    }
  }
  else {
    outC->_L4 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = outC->_L4; i < 100; i++) {
    outC->_L7[i] = 0;
  }
#endif /* KCG_MAPW_CPY */
  
  noname = outC->_L4;
  kcg_copy_DataElememtsAsArray(&outC->PacketOut, &outC->_L7);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_ReadRadioDataElement.c
** Generation date: 2015-03-05T02:26:49
*************************************************************$ */

