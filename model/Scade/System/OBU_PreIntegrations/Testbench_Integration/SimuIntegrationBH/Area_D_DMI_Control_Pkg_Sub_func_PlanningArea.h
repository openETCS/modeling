/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Area_D_DMI_Control_Pkg_Sub_func_PlanningArea_H_
#define _Area_D_DMI_Control_Pkg_Sub_func_PlanningArea_H_

#include "kcg_types.h"
#include "NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea.h"
#include "NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_real_12 /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::GradientsStart */ GradientsStart;
  array_real_12 /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::GradientsEnd */ GradientsEnd;
  tSpeedPoints /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::PlaningAreaSpeedProfile */ PlaningAreaSpeedProfile;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::CeilingPermittedSpeed */ CeilingPermittedSpeed;
  array_real_12 /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::GradientsValue */ GradientsValue;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea /* 1 */ _1_Context_1;
  outC_NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::_L7 */ _L7;
  array_real_32 /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::_L6 */ _L6;
  array_real_32 /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::_L5 */ _L5;
  array_real_32 /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::_L4 */ _L4;
  array_real_12 /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::_L1 */ _L1;
  array_real_12 /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::_L2 */ _L2;
  array_real_12 /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::_L3 */ _L3;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::_L8 */ _L8;
  array_real_32 /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::_L9 */ _L9;
  array_real_32 /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::_L10 */ _L10;
  tSpeedPoints /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::_L11 */ _L11;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::_L12 */ _L12;
  array_real_10 /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::_L14 */ _L14;
  array_real_10 /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::_L13 */ _L13;
} outC_Area_D_DMI_Control_Pkg_Sub_func_PlanningArea;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D */
extern void Area_D_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::inTrainPosition */ kcg_real inTrainPosition,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::inGradientsValue */ array_real_32 *inGradientsValue,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::inGradientsEnd */ array_real_32 *inGradientsEnd,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::inGradientsStart */ array_real_32 *inGradientsStart,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::inCeilingPermittedSpeed */ kcg_real inCeilingPermittedSpeed,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::inSpeedProfile_Distance */ array_real_32 *inSpeedProfile_Distance,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D::inSpeedProfile_Speed */ array_real_32 *inSpeedProfile_Speed,
  outC_Area_D_DMI_Control_Pkg_Sub_func_PlanningArea *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Area_D_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_Area_D_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Area_D_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_Area_D_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Area_D_DMI_Control_Pkg_Sub_func_PlanningArea_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Area_D_DMI_Control_Pkg_Sub_func_PlanningArea.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

