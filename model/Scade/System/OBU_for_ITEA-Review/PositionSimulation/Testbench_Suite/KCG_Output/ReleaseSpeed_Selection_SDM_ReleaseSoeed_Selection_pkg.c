/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ReleaseSpeed_Selection_SDM_ReleaseSoeed_Selection_pkg.h"

/* SDM_ReleaseSoeed_Selection_pkg::ReleaseSpeed_Selection */
V_internal_real_Type_SDM_Types_Pkg ReleaseSpeed_Selection_SDM_ReleaseSoeed_Selection_pkg(
  /* SDM_ReleaseSoeed_Selection_pkg::ReleaseSpeed_Selection::ReleaseSpeedFromMA */ V_internal_real_Type_SDM_Types_Pkg ReleaseSpeedFromMA,
  /* SDM_ReleaseSoeed_Selection_pkg::ReleaseSpeed_Selection::NationalValues */ NationalValues_real_T_SDM_Types_Pkg *NationalValues,
  /* SDM_ReleaseSoeed_Selection_pkg::ReleaseSpeed_Selection::ReleaseSpeedFromMAValid */ kcg_bool ReleaseSpeedFromMAValid)
{
  /* SDM_ReleaseSoeed_Selection_pkg::ReleaseSpeed_Selection::v_release */ V_internal_real_Type_SDM_Types_Pkg v_release;
  
  if (ReleaseSpeedFromMAValid & (ReleaseSpeedFromMA <
      (*NationalValues).v_nvrel)) {
    v_release = ReleaseSpeedFromMA;
  }
  else {
    v_release = (*NationalValues).v_nvrel;
  }
  return v_release;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** ReleaseSpeed_Selection_SDM_ReleaseSoeed_Selection_pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

