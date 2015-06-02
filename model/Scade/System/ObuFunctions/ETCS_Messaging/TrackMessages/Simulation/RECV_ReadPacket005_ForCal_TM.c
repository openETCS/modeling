/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-02T14:47:37
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_ReadPacket005_ForCal_TM.h"

void RECV_ReadPacket005_ForCal_reset_TM(outC_RECV_ReadPacket005_ForCal_TM *outC)
{
  /* 1 */
  _2_RECV_ConvertP005afterRead_reset_TM_conversions(&outC->_1_Context_1);
  /* 1 */ RECV_ReadPackets_reset_TM_lib_internal(&outC->Context_1);
}

/* TM::RECV_ReadPacket005_ForCalcTrainPos */
void RECV_ReadPacket005_ForCal_TM(
  inC_RECV_ReadPacket005_ForCal_TM *inC,
  outC_RECV_ReadPacket005_ForCal_TM *outC)
{
  outC->_L165 = inC->LRBG;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L6,
    &inC->RadioMessage_IN);
  /* 1 */ RECV_ReadPackets_TM_lib_internal(&outC->_L6, 5, &outC->Context_1);
  kcg_copy_array_int_500(&outC->_L5, &outC->Context_1.Data);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L30,
    &outC->Context_1.Metadata);
  kcg_copy_array_int_39(&outC->_L11, (array_int_39 *) &outC->_L5[0]);
  /* 1 */
  _2_RECV_ConvertP005afterRead_TM_conversions(
    outC->_L165,
    &outC->_L11,
    &outC->_L30,
    &outC->_1_Context_1);
  kcg_copy_LinkedBGs_T_BG_Types_Pkg(
    &outC->_L166,
    &outC->_1_Context_1.Packet005_OLD);
  kcg_copy_LinkedBGs_T_BG_Types_Pkg(&outC->LinkedBGsOUT, &outC->_L166);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_ReadPacket005_ForCal_TM.c
** Generation date: 2015-06-02T14:47:37
*************************************************************$ */

