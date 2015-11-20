/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea_H_
#define _NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea_H_

#include "kcg_types.h"
#include "NextSpeedProfiles_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea.h"
#include "NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea.h"
#include "NextSpeedProfiles_Speed_DMI_Control_Pkg_Sub_func_PlanningArea.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_real_10 /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles::SpeedProfile_Distance_DMI */ SpeedProfile_Distance_DMI;
  array_real_10 /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles::SpeedProfile_Speed_DMI */ SpeedProfile_Speed_DMI;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_NextSpeedProfiles_Speed_DMI_Control_Pkg_Sub_func_PlanningArea /* 1 */ _2_Context_1;
  outC_NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea /* 1 */ _1_Context_1;
  outC_NextSpeedProfiles_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea /* 1 */ Context_1[32];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles::lSpeedProfileFirstIndex */ lSpeedProfileFirstIndex;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles::_L2 */ _L2;
  array_real_32 /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles::_L3 */ _L3;
  kcg_int /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles::_L6 */ _L6;
  kcg_bool /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles::_L7 */ _L7;
  array_real_10 /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles::_L38 */ _L38;
  array_real_10 /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles::_L40 */ _L40;
  array_real_32 /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles::_L43 */ _L43;
  kcg_int /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles::_L44 */ _L44;
  kcg_int /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles::_L46 */ _L46;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles::_L51 */ _L51;
  kcg_int /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles::_L13 */ _L13;
  kcg_int /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles::_L12 */ _L12;
  array_real_32 /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles::_L48 */ _L48;
} outC_NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles */
extern void NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles::inTrainPosition */ kcg_real inTrainPosition,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles::inSpeedProfile_Distance */ array_real_32 *inSpeedProfile_Distance,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles::inSpeedProfile_Speed */ array_real_32 *inSpeedProfile_Speed,
  outC_NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void NextSpeedProfiles_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void NextSpeedProfiles_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

