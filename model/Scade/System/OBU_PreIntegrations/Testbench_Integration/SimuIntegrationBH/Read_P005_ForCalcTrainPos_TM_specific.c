/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P005_ForCalcTrainPos_TM_specific.h"

/* TM_specific::Read_P005_ForCalcTrainPos */
void Read_P005_ForCalcTrainPos_TM_specific(
  /* TM_specific::Read_P005_ForCalcTrainPos::RadioMessage_IN */ CompressedPackets_T_Common_Types_Pkg *RadioMessage_IN,
  /* TM_specific::Read_P005_ForCalcTrainPos::LRBG */ NID_LRBG LRBG,
  /* TM_specific::Read_P005_ForCalcTrainPos::NID_C_onboard */ NID_C NID_C_onboard,
  /* TM_specific::Read_P005_ForCalcTrainPos::LinkedBGsOUT */ LinkedBGs_T_BG_Types_Pkg *LinkedBGsOUT)
{
  /* TM_specific::Read_P005_ForCalcTrainPos */
  static LinkedBGs_T_BG_Types_Pkg op_call;
  /* TM_specific::Read_P005_ForCalcTrainPos */
  static kcg_bool ck_every;
  /* TM_specific::Read_P005_ForCalcTrainPos::_L1 */
  static CompressedPackets_T_Common_Types_Pkg _L1;
  /* TM_specific::Read_P005_ForCalcTrainPos::_L2 */
  static NID_LRBG _L2;
  /* TM_specific::Read_P005_ForCalcTrainPos::_L3 */
  static P005_OBU_T_TM _L3;
  /* TM_specific::Read_P005_ForCalcTrainPos::_L4 */
  static LinkedBGs_T_BG_Types_Pkg _L4;
  /* TM_specific::Read_P005_ForCalcTrainPos::_L5 */
  static NID_C _L5;
  /* TM_specific::Read_P005_ForCalcTrainPos::_L6 */
  static kcg_bool _L6;
  
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L1, RadioMessage_IN);
  /* 1 */ Read_P005_TM(&_L1, &_L6, &_L3);
  ck_every = _L6;
  _L2 = LRBG;
  _L5 = NID_C_onboard;
  /* ck_Read_P005_ForCalcTrainPos */ if (ck_every) {
    /* 1 */ C_P005_ForCalcTrainPos_TM_conversions(&_L3, _L2, _L5, &op_call);
    kcg_copy_LinkedBGs_T_BG_Types_Pkg(&_L4, &op_call);
  }
  else {
    kcg_copy_LinkedBGs_T_BG_Types_Pkg(
      &_L4,
      (LinkedBGs_T_BG_Types_Pkg *) &DEFAULT_LinkedBGs_T_TM_specific);
  }
  kcg_copy_LinkedBGs_T_BG_Types_Pkg(LinkedBGsOUT, &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P005_ForCalcTrainPos_TM_specific.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

