/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-09T12:04:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P005_ForCalcTrainPos_TM.h"

void Read_P005_ForCalcTrainPos_reset_TM(outC_Read_P005_ForCalcTrainPos_TM *outC)
{
  /* 1 */ C_P005_ForCalcTrainPos_reset_TM_conversions(&outC->_1_Context_1);
  /* 1 */ Read_P005_reset_TM(&outC->Context_1);
}

/* TM::Read_P005_ForCalcTrainPos */
void Read_P005_ForCalcTrainPos_TM(
  /* TM::Read_P005_ForCalcTrainPos::RadioMessage_IN */CompressedPackets_T_Common_Types_Pkg *RadioMessage_IN,
  /* TM::Read_P005_ForCalcTrainPos::LRBG */NID_LRBG LRBG,
  outC_Read_P005_ForCalcTrainPos_TM *outC)
{
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L1, RadioMessage_IN);
  /* 1 */ Read_P005_TM(&outC->_L1, &outC->Context_1);
  kcg_copy_P005_OBU_T_TM(&outC->_L3, &outC->Context_1.P005_OBU_out);
  outC->_L2 = LRBG;
  /* 1 */
  C_P005_ForCalcTrainPos_TM_conversions(
    &outC->_L3,
    outC->_L2,
    &outC->_1_Context_1);
  kcg_copy_LinkedBGs_T_BG_Types_Pkg(
    &outC->_L4,
    &outC->_1_Context_1.LinkedBGsOUT);
  kcg_copy_LinkedBGs_T_BG_Types_Pkg(&outC->LinkedBGsOUT, &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P005_ForCalcTrainPos_TM.c
** Generation date: 2015-06-09T12:04:05
*************************************************************$ */

