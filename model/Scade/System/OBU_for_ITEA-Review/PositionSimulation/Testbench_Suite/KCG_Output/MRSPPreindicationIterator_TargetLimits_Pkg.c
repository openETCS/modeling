/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSPPreindicationIterator_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::MRSPPreindicationIterator */
void MRSPPreindicationIterator_TargetLimits_Pkg(
  /* TargetLimits_Pkg::MRSPPreindicationIterator::i */ kcg_int i,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::MRSP_preindication_mix */ MRSP_internal_section_T_TargetManagement_types *MRSP_preindication_mix,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::MRSP_sect_n */ MRSP_internal_section_T_TargetManagement_types *MRSP_sect_n,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::EBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::T_Traction */ T_internal_real_Type_SDM_Types_Pkg T_Traction,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::T_berem */ T_internal_real_Type_SDM_Types_Pkg T_berem,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::guiCurveEnabled */ kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::GUIcurve */ ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::T_bs2 */ T_internal_real_Type_SDM_Types_Pkg T_bs2,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::goOn */ kcg_bool *goOn,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::MRSP_preindication_next */ MRSP_internal_section_T_TargetManagement_types *MRSP_preindication_next)
{
  kcg_real tmp1;
  L_internal_real_Type_SDM_Types_Pkg tmp;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::D_I */ L_internal_real_Type_SDM_Types_Pkg D_I;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::simpleCaseFulfilled */ kcg_bool simpleCaseFulfilled;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::cornerCaseFulfilled */ kcg_bool cornerCaseFulfilled;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::done */ kcg_bool done;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::currentlyValid */ kcg_bool currentlyValid;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::finalCaseFulfilled */ kcg_bool finalCaseFulfilled;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L35 */ V_internal_real_Type_SDM_Types_Pkg _L35;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L116 */ kcg_bool _L116;
  
  if ((*MRSP_sect_n).valid) {
    /* 1 */
    d_I_MRSP_TargetLimits_Pkg(
      (*MRSP_sect_n).MRS,
      EBDcurve,
      T_Traction,
      T_berem,
      guiCurveEnabled,
      GUIcurve,
      T_bs2,
      &currentlyValid,
      &D_I);
  }
  else {
    currentlyValid = kcg_false;
    D_I = 0.0;
  }
  finalCaseFulfilled = currentlyValid & (i == MRSPMaxSections - 1);
  done = (*MRSP_preindication_mix).Loc_Abs <= (*MRSP_sect_n).Loc_Abs;
  cornerCaseFulfilled = !done & (*MRSP_preindication_mix).valid & (D_I <
      (*MRSP_sect_n).Loc_Abs);
  _L116 = finalCaseFulfilled | cornerCaseFulfilled;
  simpleCaseFulfilled = (*MRSP_preindication_mix).valid & done;
  done = _L116 | !currentlyValid | simpleCaseFulfilled;
  *goOn = currentlyValid & !done;
  (*MRSP_preindication_next).valid = simpleCaseFulfilled | cornerCaseFulfilled |
    finalCaseFulfilled | *goOn;
  if (_L116) {
    _L35 = (*MRSP_sect_n).MRS;
  }
  else {
    _L35 = (*MRSP_preindication_mix).MRS;
  }
  (*MRSP_preindication_next).MRS = _L35;
  if (done) {
    if (_L116) {
      if (cornerCaseFulfilled) {
        tmp = (*MRSP_sect_n).Loc_Abs;
      }
      else {
        tmp = D_I;
      }
    }
    else {
      tmp = (*MRSP_preindication_mix).Loc_Abs;
    }
    tmp1 = tmp - _L35 * T_preindication_SDM_Types_Pkg;
  }
  else {
    tmp1 = D_I;
  }
  (*MRSP_preindication_next).Loc_Abs = tmp1;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** MRSPPreindicationIterator_TargetLimits_Pkg.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

