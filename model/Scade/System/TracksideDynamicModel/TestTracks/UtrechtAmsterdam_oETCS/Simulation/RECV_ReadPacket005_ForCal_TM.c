/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-04T16:57:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_ReadPacket005_ForCal_TM.h"

void RECV_ReadPacket005_ForCal_reset_TM(outC_RECV_ReadPacket005_ForCal_TM *outC)
{
  /* 1 */
  _3_RECV_ConvertP005afterRead_reset_TM_conversions(&outC->_1_Context_1);
  /* 1 */ RECV_ReadPackets_reset_TM_lib_internal(&outC->Context_1);
}

/* TM::RECV_ReadPacket005_ForCalcTrainPos */
void RECV_ReadPacket005_ForCal_TM(
  /* TM::RECV_ReadPacket005_ForCalcTrainPos::RadioMessage_IN */CompressedPackets_T_Common_Types_Pkg *RadioMessage_IN,
  /* TM::RECV_ReadPacket005_ForCalcTrainPos::LRBG */NID_LRBG LRBG,
  outC_RECV_ReadPacket005_ForCal_TM *outC)
{
  outC->_L165 = LRBG;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L6, RadioMessage_IN);
  /* 1 */ RECV_ReadPackets_TM_lib_internal(&outC->_L6, 5, &outC->Context_1);
  kcg_copy_array_int_500(&outC->_L5, &outC->Context_1.Data);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L30,
    &outC->Context_1.Metadata);
  kcg_copy_array_int_39(&outC->_L11, (array_int_39 *) &outC->_L5[0]);
  /* 1 */
  _3_RECV_ConvertP005afterRead_TM_conversions(
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
** Generation date: 2015-06-04T16:57:14
*************************************************************$ */

