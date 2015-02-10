/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config Z:/Documents/projects/openETCS/github/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/Simulation\kcg_s2c_config.txt
** Generation date: 2015-02-07T17:55:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Decode_Packet_000_Decode_Packets.h"

void Decode_Packet_000_reset_Decode_Packets(
  outC_Decode_Packet_000_Decode_Packets *outC)
{
}

/* Decode_Packets::Decode_Packet_000 */
void Decode_Packet_000_Decode_Packets(
  inC_Decode_Packet_000_Decode_Packets *inC,
  outC_Decode_Packet_000_Decode_Packets *outC)
{
  kcg_copy_Information_T_BM_Types_Flat(&outC->_L41, &inC->PacketInfoIn);
  outC->_L43 = outC->_L41[0];
  outC->VBCMK = outC->_L43;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Decode_Packet_000_Decode_Packets.c
** Generation date: 2015-02-07T17:55:09
*************************************************************$ */

