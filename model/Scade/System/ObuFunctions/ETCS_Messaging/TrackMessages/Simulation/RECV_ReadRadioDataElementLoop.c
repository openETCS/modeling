/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-03-05T02:26:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_ReadRadioDataElementLoop.h"

void RECV_ReadRadioDataElementLoop_reset(
  outC_RECV_ReadRadioDataElementLoop *outC)
{
}

/* RECV_ReadRadioDataElementLoop */
void RECV_ReadRadioDataElementLoop(
  /* RECV_ReadRadioDataElementLoop::Index */kcg_int Index,
  /* RECV_ReadRadioDataElementLoop::HeaderFound */MetadataElement_T_Common_Types_Pkg *HeaderFound,
  /* RECV_ReadRadioDataElementLoop::DataIn */CompressedRadioData *DataIn,
  outC_RECV_ReadRadioDataElementLoop *outC)
{
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L2, HeaderFound);
  outC->_L20 = outC->_L2.endAddress;
  outC->_L23 = outC->_L2.startAddress;
  outC->_L27 = outC->_L20 - outC->_L23;
  outC->_L26 = 0;
  kcg_copy_CompressedRadioData(&outC->_L3, DataIn);
  outC->_L24 = Index;
  outC->_L22 = outC->_L23 + outC->_L24;
  if ((0 <= outC->_L22) & (outC->_L22 < 200)) {
    outC->_L25 = outC->_L3[outC->_L22];
  }
  else {
    outC->_L25 = outC->_L26;
  }
  outC->_L1 = Index;
  outC->_L21 = outC->_L1 < outC->_L27;
  outC->PacketOut = outC->_L25;
  outC->Cont = outC->_L21;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_ReadRadioDataElementLoop.c
** Generation date: 2015-03-05T02:26:49
*************************************************************$ */

