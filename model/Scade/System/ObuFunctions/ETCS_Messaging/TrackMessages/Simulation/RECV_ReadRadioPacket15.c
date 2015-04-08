/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-03-05T01:50:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_ReadRadioPacket15.h"

void RECV_ReadRadioPacket15_reset(outC_RECV_ReadRadioPacket15 *outC)
{
  kcg_int i;
  
  for (i = 0; i < 200; i++) {
    /* 1 */ RECV_ExtractDataFromRadio_reset(&outC->Context_1[i]);
  }
}

/* RECV_ReadRadioPacket15 */
void RECV_ReadRadioPacket15(
  inC_RECV_ReadRadioPacket15 *inC,
  outC_RECV_ReadRadioPacket15 *outC)
{
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  kcg_int noname;
  
  kcg_copy_CompressedBaliseData(&outC->_L3, &inC->PacketData);
  for (i3 = 0; i3 < 200; i3++) {
    kcg_copy_CompressedBaliseData(&outC->_L18[i3], &outC->_L3);
  }
  outC->_L4 = inC->StartAddress;
  for (i2 = 0; i2 < 200; i2++) {
    outC->_L6[i2] = outC->_L4;
  }
  outC->_L5 = inC->EndAddress;
  for (i1 = 0; i1 < 200; i1++) {
    outC->_L7[i1] = outC->_L5;
  }
  outC->_L8 = kcg_true;
  if (outC->_L8) {
    for (i = 0; i < 200; i++) {
      /* 1 */
      RECV_ExtractDataFromRadio(
        i,
        &outC->_L18[i],
        outC->_L6[i],
        outC->_L7[i],
        &outC->Context_1[i]);
      outC->_L10[i] = outC->Context_1[i].PacketOut;
      outC->_L16 = i + 1;
      if (!outC->Context_1[i].Cont) {
        break;
      }
    }
  }
  else {
    outC->_L16 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = outC->_L16; i < 200; i++) {
    outC->_L10[i] = 0;
  }
#endif /* KCG_MAPW_CPY */
  
  noname = outC->_L16;
  kcg_copy_array_int_200(&outC->PacketOut, &outC->_L10);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_ReadRadioPacket15.c
** Generation date: 2015-03-05T01:50:58
*************************************************************$ */

