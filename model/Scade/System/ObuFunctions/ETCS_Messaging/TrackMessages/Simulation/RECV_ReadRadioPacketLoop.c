/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-03-05T15:23:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_ReadRadioPacketLoop.h"

void RECV_ReadRadioPacketLoop_reset(outC_RECV_ReadRadioPacketLoop *outC)
{
}

/* RECV_ReadRadioPacketLoop */
void RECV_ReadRadioPacketLoop(
  /* RECV_ReadRadioPacketLoop::Index */kcg_int Index,
  /* RECV_ReadRadioPacketLoop::PacketData */CompressedRadioData *PacketData,
  /* RECV_ReadRadioPacketLoop::AddressStart */kcg_int AddressStart,
  /* RECV_ReadRadioPacketLoop::AddressEnd */kcg_int AddressEnd,
  outC_RECV_ReadRadioPacketLoop *outC)
{
  outC->_L34 = 1;
  outC->_L1 = Index;
  outC->_L33 = outC->_L1 + outC->_L34;
  outC->_L4 = AddressEnd;
  outC->_L31 = AddressStart;
  outC->_L32 = outC->_L4 - outC->_L31;
  kcg_copy_CompressedRadioData(&outC->_L9, PacketData);
  outC->_L3 = AddressStart;
  outC->_L20 = Index;
  outC->_L29 = outC->_L3 + outC->_L20;
  if ((0 <= outC->_L29) & (outC->_L29 < 500)) {
    outC->_L30 = outC->_L9[outC->_L29];
  }
  else {
    outC->_L30 = 0;
  }
  outC->_L18 = outC->_L33 <= outC->_L32;
  outC->Cont = outC->_L18;
  outC->PacketOut = outC->_L30;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_ReadRadioPacketLoop.c
** Generation date: 2015-03-05T15:23:29
*************************************************************$ */

