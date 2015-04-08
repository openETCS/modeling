/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-03-05T01:50:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_ExtractDataFromRadio.h"

void RECV_ExtractDataFromRadio_reset(outC_RECV_ExtractDataFromRadio *outC)
{
}

/* RECV_ExtractDataFromRadio */
void RECV_ExtractDataFromRadio(
  /* RECV_ExtractDataFromRadio::Index */kcg_int Index,
  /* RECV_ExtractDataFromRadio::PacketData */CompressedBaliseData *PacketData,
  /* RECV_ExtractDataFromRadio::AddressStart */kcg_int AddressStart,
  /* RECV_ExtractDataFromRadio::AddressEnd */kcg_int AddressEnd,
  outC_RECV_ExtractDataFromRadio *outC)
{
  outC->_L34 = 1;
  outC->_L1 = Index;
  outC->_L33 = outC->_L1 + outC->_L34;
  outC->_L4 = AddressEnd;
  outC->_L31 = AddressStart;
  outC->_L32 = outC->_L4 - outC->_L31;
  kcg_copy_CompressedBaliseData(&outC->_L9, PacketData);
  outC->_L3 = AddressStart;
  outC->_L20 = Index;
  outC->_L29 = outC->_L3 + outC->_L20;
  if ((0 <= outC->_L29) & (outC->_L29 < 200)) {
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
** RECV_ExtractDataFromRadio.c
** Generation date: 2015-03-05T01:50:58
*************************************************************$ */

