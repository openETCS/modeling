/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _TargetIterator_TargetLimits_Pkg_H_
#define _TargetIterator_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "isLEValid_TargetLimits_Pkg.h"
#include "selectLEValid_TargetLimits_Pkg.h"
#include "v_SBI2_TargetLimits_Pkg.h"
#include "d_SBI2_TargetLimits_Pkg.h"
#include "surplusTractionDeltas_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TargetLimits_Pkg::TargetIterator */
extern void TargetIterator_TargetLimits_Pkg(
  /* TargetLimits_Pkg::TargetIterator::index */ kcg_int index,
  /* TargetLimits_Pkg::TargetIterator::Akku_in */ TargetIteratorAkku_TargetLimits_Pkg *Akku_in,
  /* TargetLimits_Pkg::TargetIterator::target */ Target_real_T_TargetManagement_types *target,
  /* TargetLimits_Pkg::TargetIterator::targetCurve */ ParabolaCurve_T_CalcBrakingCurves_types *targetCurve,
  /* TargetLimits_Pkg::TargetIterator::trainData_int */ trainData_internal_t_SDM_Types_Pkg *trainData_int,
  /* TargetLimits_Pkg::TargetIterator::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TargetLimits_Pkg::TargetIterator::T_b */ t_Brake_t_SDMModelPkg *T_b,
  /* TargetLimits_Pkg::TargetIterator::D_maxsafefront */ L_internal_real_Type_SDM_Types_Pkg D_maxsafefront,
  /* TargetLimits_Pkg::TargetIterator::GUIcurve */ ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::TargetIterator::guiCurveEnabled */ kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::TargetIterator::goOn */ kcg_bool *goOn,
  /* TargetLimits_Pkg::TargetIterator::Akku_out */ TargetIteratorAkku_TargetLimits_Pkg *Akku_out);

#endif /* _TargetIterator_TargetLimits_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** TargetIterator_TargetLimits_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

