/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_WritePacket046_IT.h"

/* SEND_WritePacket046_IT */
void SEND_WritePacket046_IT(
  /* SEND_WritePacket046_IT::Message46 */ TM_P046_T *Message46,
  /* SEND_WritePacket046_IT::BaliseMessage */ CompressedPackets_T_Common_Types_Pkg *BaliseMessage,
  /* SEND_WritePacket046_IT::Error */ kcg_bool *Error,
  /* SEND_WritePacket046_IT::BaliseMessageOut */ CompressedPackets_T_Common_Types_Pkg *BaliseMessageOut)
{
  /* SEND_WritePacket046_IT::_L3 */ MetadataElement_T_Common_Types_Pkg _L3;
  /* SEND_WritePacket046_IT::_L2 */ CompressedPacketData_T_Common_Types_Pkg _L2;
  /* SEND_WritePacket046_IT::_L19 */ kcg_int _L19;
  /* SEND_WritePacket046_IT::_L20 */ kcg_int _L20;
  
  *Error = kcg_false;
  /* 1 */ SEND_ConvertP046forWrite_IT(Message46, &_L3, &_L2);
  /* 1 */
  SIM_SEND_WriteBaliseMessageHeader(
    &(*BaliseMessage).PacketHeaders,
    &_L3,
    &(*BaliseMessageOut).PacketHeaders,
    &_L19,
    &_L20);
  /* 1 */
  SIM_SEND_WriteBaliseMessageData(
    _L19,
    _L20,
    &_L2,
    &(*BaliseMessage).PacketData,
    &(*BaliseMessageOut).PacketData);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** SEND_WritePacket046_IT.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

