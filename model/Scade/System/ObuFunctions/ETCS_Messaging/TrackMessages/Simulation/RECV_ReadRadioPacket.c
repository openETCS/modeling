/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-03-05T15:23:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_ReadRadioPacket.h"

void RECV_ReadRadioPacket_reset(outC_RECV_ReadRadioPacket *outC)
{
  kcg_int i;
  
  for (i = 0; i < 500; i++) {
    /* 1 */ RECV_ReadRadioPacketLoop_reset(&outC->Context_1[i]);
  }
}

/* RECV_ReadRadioPacket */
void RECV_ReadRadioPacket(
  /* RECV_ReadRadioPacket::Header */MetadataElement_T_Common_Types_Pkg *Header,
  /* RECV_ReadRadioPacket::PacketData */CompressedRadioData *PacketData,
  outC_RECV_ReadRadioPacket *outC)
{
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  kcg_int noname;
  
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L4, Header);
  outC->_L24 = outC->_L4.startAddress;
  outC->_L23 = outC->_L4.endAddress;
  kcg_copy_CompressedRadioData(&outC->_L3, PacketData);
  for (i3 = 0; i3 < 500; i3++) {
    kcg_copy_CompressedRadioData(&outC->_L18[i3], &outC->_L3);
  }
  for (i2 = 0; i2 < 500; i2++) {
    outC->_L6[i2] = outC->_L24;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->_L7[i1] = outC->_L23;
  }
  outC->_L8 = kcg_true;
  if (outC->_L8) {
    for (i = 0; i < 500; i++) {
      /* 1 */
      RECV_ReadRadioPacketLoop(
        i,
        &outC->_L18[i],
        outC->_L6[i],
        outC->_L7[i],
        &outC->Context_1[i]);
      outC->_L10[i] = outC->Context_1[i].PacketOut;
      outC->_L22 = i + 1;
      if (!outC->Context_1[i].Cont) {
        break;
      }
    }
  }
  else {
    outC->_L22 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = outC->_L22; i < 500; i++) {
    outC->_L10[i] = 0;
  }
#endif /* KCG_MAPW_CPY */
  
  noname = outC->_L22;
  kcg_copy_array_int_500(&outC->PacketOut, &outC->_L10);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_ReadRadioPacket.c
** Generation date: 2015-03-05T15:23:29
*************************************************************$ */

