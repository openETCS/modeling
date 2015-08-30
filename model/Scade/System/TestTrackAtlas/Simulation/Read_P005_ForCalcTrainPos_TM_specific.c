/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P005_ForCalcTrainPos_TM_specific.h"

void Read_P005_ForCalcTrainPos_reset_TM_specific(
  outC_Read_P005_ForCalcTrainPos_TM_specific *outC)
{
  /* 1 */ C_P005_ForCalcTrainPos_reset_TM_conversions(&outC->_1_Context_1);
  /* 1 */ Read_P005_reset_TM(&outC->Context_1);
}

/* TM_specific::Read_P005_ForCalcTrainPos */
void Read_P005_ForCalcTrainPos_TM_specific(
  /* TM_specific::Read_P005_ForCalcTrainPos::RadioMessage_IN */CompressedPackets_T_Common_Types_Pkg *RadioMessage_IN,
  /* TM_specific::Read_P005_ForCalcTrainPos::LRBG */NID_LRBG LRBG,
  /* TM_specific::Read_P005_ForCalcTrainPos::NID_C_onboard */NID_C NID_C_onboard,
  outC_Read_P005_ForCalcTrainPos_TM_specific *outC)
{
  LinkedBGs_T_BG_Types_Pkg tmp;
  
  outC->_L5 = NID_C_onboard;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L1, RadioMessage_IN);
  /* 1 */ Read_P005_TM(&outC->_L1, &outC->Context_1);
  outC->_L6 = outC->Context_1.received;
  kcg_copy_P005_OBU_T_TM(&outC->_L3, &outC->Context_1.P005_OBU_out);
  outC->tmp = outC->_L6;
  outC->_L2 = LRBG;
  if (outC->tmp) {
    /* 1 */
    C_P005_ForCalcTrainPos_TM_conversions(
      &outC->_L3,
      outC->_L2,
      outC->_L5,
      &outC->_1_Context_1);
    kcg_copy_LinkedBGs_T_BG_Types_Pkg(&tmp, &outC->_1_Context_1.LinkedBGsOUT);
    kcg_copy_LinkedBGs_T_BG_Types_Pkg(&outC->_L4, &tmp);
  }
  else {
    kcg_copy_LinkedBGs_T_BG_Types_Pkg(
      &outC->_L4,
      (LinkedBGs_T_BG_Types_Pkg *) &DEFAULT_LinkedBGs_T_TM_specific);
  }
  kcg_copy_LinkedBGs_T_BG_Types_Pkg(&outC->LinkedBGsOUT, &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P005_ForCalcTrainPos_TM_specific.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

