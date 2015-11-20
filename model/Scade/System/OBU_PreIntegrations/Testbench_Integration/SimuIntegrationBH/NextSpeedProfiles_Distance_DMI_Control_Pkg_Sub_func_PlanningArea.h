/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea_H_
#define _NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_real_10 /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Distance::SpeedProfiles_Distance */ SpeedProfiles_Distance;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Distance::_L40 */ _L40;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Distance::_L39 */ _L39;
  array_real_10 /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Distance::_L38 */ _L38;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Distance::_L37 */ _L37;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Distance::_L36 */ _L36;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Distance::_L35 */ _L35;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Distance::_L34 */ _L34;
  array_real_32 /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Distance::_L32 */ _L32;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Distance::_L31 */ _L31;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Distance::_L29 */ _L29;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Distance::_L28 */ _L28;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Distance::_L27 */ _L27;
} outC_NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Distance */
extern void NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Distance::inSpeedProfiles_FirstIndex */ kcg_int inSpeedProfiles_FirstIndex,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Distance::inSpeedProfiles_Distance */ array_real_32 *inSpeedProfiles_Distance,
  outC_NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void NextSpeedProfiles_Distance_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void NextSpeedProfiles_Distance_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

