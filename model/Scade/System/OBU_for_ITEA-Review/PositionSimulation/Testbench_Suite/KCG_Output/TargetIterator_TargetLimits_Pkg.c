/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TargetIterator_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::TargetIterator */
void TargetIterator_TargetLimits_Pkg(
  /* TargetLimits_Pkg::TargetIterator::index */ kcg_int index,
  /* TargetLimits_Pkg::TargetIterator::Akku_in */ TargetIteratorAkku_TargetLimits_Pkg *Akku_in,
  /* TargetLimits_Pkg::TargetIterator::target */ Target_real_T_TargetManagement_types *target,
  /* TargetLimits_Pkg::TargetIterator::targetCurve */ ParabolaCurve_T_CalcBrakingCurves_types *targetCurve,
  /* TargetLimits_Pkg::TargetIterator::V_est */ V_internal_real_Type_SDM_Types_Pkg V_est,
  /* TargetLimits_Pkg::TargetIterator::T_Traction */ T_internal_real_Type_SDM_Types_Pkg T_Traction,
  /* TargetLimits_Pkg::TargetIterator::T_berem */ T_internal_real_Type_SDM_Types_Pkg T_berem,
  /* TargetLimits_Pkg::TargetIterator::V_dt */ TractionDeltaTriple_TargetLimits_Pkg *V_dt,
  /* TargetLimits_Pkg::TargetIterator::T_bs2 */ T_internal_real_Type_SDM_Types_Pkg T_bs2,
  /* TargetLimits_Pkg::TargetIterator::goOn */ kcg_bool *goOn,
  /* TargetLimits_Pkg::TargetIterator::Akku_out */ TargetIteratorAkku_TargetLimits_Pkg *Akku_out)
{
  kcg_bool tmp;
  /* TargetLimits_Pkg::TargetIterator::_L2 */ L_internal_real_Type_SDM_Types_Pkg _L2;
  /* TargetLimits_Pkg::TargetIterator::_L1 */ kcg_bool _L1;
  /* TargetLimits_Pkg::TargetIterator::_L5 */ L_internal_real_Type_SDM_Types_Pkg _L5;
  /* TargetLimits_Pkg::TargetIterator::_L4 */ V_internal_real_Type_SDM_Types_Pkg _L4;
  
  *goOn = (*target).valid;
  /* 1 */
  v_bec_TargetLimits_Pkg(
    V_est,
    (*target).speed,
    T_Traction,
    T_berem,
    V_dt,
    &_L4,
    &_L5);
  if (*goOn) {
    /* 1 */
    d_SBI2_TargetLimits_Pkg(targetCurve, _L4, _L5, V_est, T_bs2, &_L1, &_L2);
  }
  else {
    _L1 = kcg_false;
    _L2 = - 1.0;
  }
  tmp = /* 1 */
    isLEValid_TargetLimits_Pkg(_L1, _L2, (*Akku_in).valid, (*Akku_in).MRTSBI2);
  if (tmp) {
    (*Akku_out).valid = _L1;
    (*Akku_out).MRTSBI2 = _L2;
    (*Akku_out).MRTIndex = index;
    (*Akku_out).MRTType = (*target).targetType;
  }
  else {
    kcg_copy_TargetIteratorAkku_TargetLimits_Pkg(Akku_out, Akku_in);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** TargetIterator_TargetLimits_Pkg.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

