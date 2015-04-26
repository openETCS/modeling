/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_ReadPacket005.h"

/* RECV_ReadPacket005 */
void RECV_ReadPacket005(
  /* RECV_ReadPacket005::RadioMessage_IN */ TM_CompressedRadioMessage *RadioMessage_IN,
  /* RECV_ReadPacket005::RadioPacket005_old_out */ LinkedBGs_T_BG_Types_Pkg *RadioPacket005_old_out)
{
  NID_LRBG tmp;
  /* RECV_ReadPacket005::_L5 */ CompressedPacketData_T_Common_Types_Pkg _L5;
  /* RECV_ReadPacket005::_L30 */ MetadataElement_T_Common_Types_Pkg _L30;
  
  /* 1 */ RECV_ReadPackets(&(*RadioMessage_IN).Messages, 5, &_L5, &_L30);
  tmp = /* 1 */ TOOLS_Int_to_NID_LRBG((*RadioMessage_IN).Header.nid_lrbg);
  /* 1 */
  RECV_ConvertP005afterRead_CT(
    tmp,
    (TM_P005_array_T *) &_L5[0],
    &_L30,
    RadioPacket005_old_out);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** RECV_ReadPacket005.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

