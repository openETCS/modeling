/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "surplusTractionDeltas_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::surplusTractionDeltas */
void surplusTractionDeltas_TargetLimits_Pkg(
  /* TargetLimits_Pkg::surplusTractionDeltas::A_est */ A_internal_real_Type_SDM_Types_Pkg A_est,
  /* TargetLimits_Pkg::surplusTractionDeltas::inhibitUnderReadingCompensation */ Q_NVINHSMICPERM inhibitUnderReadingCompensation,
  /* TargetLimits_Pkg::surplusTractionDeltas::isTractionCutOffImplemented */ kcg_bool isTractionCutOffImplemented,
  /* TargetLimits_Pkg::surplusTractionDeltas::T_traction_cut_off */ T_internal_real_Type_SDM_Types_Pkg T_traction_cut_off,
  /* TargetLimits_Pkg::surplusTractionDeltas::T_be */ T_internal_real_Type_SDM_Types_Pkg T_be,
  /* TargetLimits_Pkg::surplusTractionDeltas::V_ura */ V_internal_real_Type_SDM_Types_Pkg V_ura,
  /* TargetLimits_Pkg::surplusTractionDeltas::T_bs2 */ T_internal_real_Type_SDM_Types_Pkg T_bs2,
  /* TargetLimits_Pkg::surplusTractionDeltas::T_Traction */ T_internal_real_Type_SDM_Types_Pkg *T_Traction,
  /* TargetLimits_Pkg::surplusTractionDeltas::T_Berem */ T_internal_real_Type_SDM_Types_Pkg *T_Berem,
  /* TargetLimits_Pkg::surplusTractionDeltas::V_dt */ TractionDeltaTriple_TargetLimits_Pkg *V_dt)
{
  kcg_real tmp;
  
  if (isTractionCutOffImplemented) {
    tmp = T_traction_cut_off - (T_warning_SDM_Types_Pkg + T_bs2);
  }
  else {
    tmp = T_traction_cut_off;
  }
  *T_Traction = /* 1 */ limitPositive_SDM_Types_Pkg(tmp);
  (*V_dt)[1] = *T_Traction * A_est;
  *T_Berem = /* 3 */ limitPositive_SDM_Types_Pkg(T_be - *T_Traction);
  switch (inhibitUnderReadingCompensation) {
    case Q_NVINHSMICPERM_No :
      tmp = V_ura;
      break;
    case Q_NVINHSMICPERM_Yes :
      tmp = 0.0;
      break;
    
  }
  (*V_dt)[0] = tmp;
  if (0.4 <= A_est) {
    tmp = 0.4;
  }
  else {
    tmp = A_est;
  }
  (*V_dt)[2] = /* 2 */ limitPositive_SDM_Types_Pkg(tmp) * *T_Berem;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** surplusTractionDeltas_TargetLimits_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

