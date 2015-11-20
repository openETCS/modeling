/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckDeskStatus_DMI_Control_Pkg_Sub_func.h"

void CheckDeskStatus_reset_DMI_Control_Pkg_Sub_func(
  outC_CheckDeskStatus_DMI_Control_Pkg_Sub_func *outC)
{
  outC->init = kcg_true;
}

/* DMI_Control_Pkg::Sub_func::CheckDeskStatus */
void CheckDeskStatus_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::CheckDeskStatus::TIU_trainStatus */TIU_trainStatus_T_TIU_Types_Pkg *TIU_trainStatus,
  outC_CheckDeskStatus_DMI_Control_Pkg_Sub_func *outC)
{
  if ((*TIU_trainStatus).valid) {
    kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(
      &outC->storeTrainData,
      TIU_trainStatus);
  }
  else if (outC->init) {
    kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(
      &outC->storeTrainData,
      (TIU_trainStatus_T_TIU_Types_Pkg *)
        &cInitStatus_DMI_Control_Pkg_Sub_func);
  }
  outC->init = kcg_false;
  outC->Output2 = outC->storeTrainData.valid & !outC->storeTrainData.deskOpen;
  outC->Output1 = outC->storeTrainData.valid & outC->storeTrainData.deskOpen;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckDeskStatus_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

