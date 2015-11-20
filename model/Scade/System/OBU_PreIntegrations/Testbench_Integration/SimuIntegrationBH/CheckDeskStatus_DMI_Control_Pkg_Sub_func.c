/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckDeskStatus_DMI_Control_Pkg_Sub_func.h"

#ifndef KCG_USER_DEFINED_INIT
void CheckDeskStatus_init_DMI_Control_Pkg_Sub_func(
  outC_CheckDeskStatus_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L12.valid = kcg_true;
  outC->_L12.deskOpen = kcg_true;
  outC->_L12.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->_L12.activeCab = CabUndefined_TIU_Types_Pkg;
  outC->_L11.valid = kcg_true;
  outC->_L11.deskOpen = kcg_true;
  outC->_L11.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->_L11.activeCab = CabUndefined_TIU_Types_Pkg;
  outC->_L10 = kcg_true;
  outC->_L9.valid = kcg_true;
  outC->_L9.deskOpen = kcg_true;
  outC->_L9.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->_L9.activeCab = CabUndefined_TIU_Types_Pkg;
  outC->_L8 = CabUndefined_TIU_Types_Pkg;
  outC->_L7 = CabUndefined_TIU_Types_Pkg;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.deskOpen = kcg_true;
  outC->_L1.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->_L1.activeCab = CabUndefined_TIU_Types_Pkg;
  outC->init = kcg_true;
  outC->storeTrainData.valid = kcg_true;
  outC->storeTrainData.deskOpen = kcg_true;
  outC->storeTrainData.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->storeTrainData.activeCab = CabUndefined_TIU_Types_Pkg;
  outC->Output2 = kcg_true;
  outC->Output1 = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CheckDeskStatus_reset_DMI_Control_Pkg_Sub_func(
  outC_CheckDeskStatus_DMI_Control_Pkg_Sub_func *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::CheckDeskStatus */
void CheckDeskStatus_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::CheckDeskStatus::TIU_trainStatus */ TIU_trainStatus_T_TIU_Types_Pkg *TIU_trainStatus,
  outC_CheckDeskStatus_DMI_Control_Pkg_Sub_func *outC)
{
  static cab_ID_T_TIU_Types_Pkg noname;
  static cab_ID_T_TIU_Types_Pkg _1_noname;
  /* DMI_Control_Pkg::Sub_func::CheckDeskStatus::storeTrainData */
  static TIU_trainStatus_T_TIU_Types_Pkg last_storeTrainData;
  
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&outC->_L1, TIU_trainStatus);
  /* last_init_ck_storeTrainData */ if (outC->init) {
    kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(
      &last_storeTrainData,
      (TIU_trainStatus_T_TIU_Types_Pkg *)
        &cInitStatus_DMI_Control_Pkg_Sub_func);
  }
  else {
    kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(
      &last_storeTrainData,
      &outC->storeTrainData);
  }
  outC->_L10 = outC->_L1.valid;
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&outC->_L11, &last_storeTrainData);
  /* 1 */ if (outC->_L10) {
    kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&outC->_L12, &outC->_L1);
  }
  else {
    kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&outC->_L12, &outC->_L11);
  }
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&outC->storeTrainData, &outC->_L12);
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&outC->_L9, &outC->storeTrainData);
  outC->_L5 = outC->_L9.valid;
  outC->_L6 = outC->_L9.deskOpen;
  outC->_L4 = !outC->_L6;
  outC->_L3 = outC->_L5 & outC->_L4;
  outC->Output2 = outC->_L3;
  outC->_L2 = outC->_L5 & outC->_L6;
  outC->Output1 = outC->_L2;
  outC->_L8 = outC->_L9.activeCab;
  outC->_L7 = outC->_L9.ownCab;
  noname = outC->_L7;
  _1_noname = outC->_L8;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckDeskStatus_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

