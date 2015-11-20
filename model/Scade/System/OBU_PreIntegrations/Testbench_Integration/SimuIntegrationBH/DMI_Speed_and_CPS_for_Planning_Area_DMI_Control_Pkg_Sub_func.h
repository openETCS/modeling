/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func_H_
#define _DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* DMI_Control_Pkg::Sub_func::DMI_Speed_and_CPS_for_Planning_Area::vpermitted */ vpermitted;
  kcg_real /* DMI_Control_Pkg::Sub_func::DMI_Speed_and_CPS_for_Planning_Area::fronttrain */ fronttrain;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  V_internal_Type_Obu_BasicTypes_Pkg /* DMI_Control_Pkg::Sub_func::DMI_Speed_and_CPS_for_Planning_Area::_L1 */ _L1;
  L_internal_Type_Obu_BasicTypes_Pkg /* DMI_Control_Pkg::Sub_func::DMI_Speed_and_CPS_for_Planning_Area::_L2 */ _L2;
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::DMI_Speed_and_CPS_for_Planning_Area::_L3 */ _L3;
  kcg_real /* DMI_Control_Pkg::Sub_func::DMI_Speed_and_CPS_for_Planning_Area::_L4 */ _L4;
  kcg_real /* DMI_Control_Pkg::Sub_func::DMI_Speed_and_CPS_for_Planning_Area::_L5 */ _L5;
  kcg_real /* DMI_Control_Pkg::Sub_func::DMI_Speed_and_CPS_for_Planning_Area::_L7 */ _L7;
  kcg_real /* DMI_Control_Pkg::Sub_func::DMI_Speed_and_CPS_for_Planning_Area::_L8 */ _L8;
} outC_DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::DMI_Speed_and_CPS_for_Planning_Area */
extern void DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::DMI_Speed_and_CPS_for_Planning_Area::DMI_track_atlas */ DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_track_atlas,
  outC_DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void DMI_Speed_and_CPS_for_Planning_Area_reset_DMI_Control_Pkg_Sub_func(
  outC_DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void DMI_Speed_and_CPS_for_Planning_Area_init_DMI_Control_Pkg_Sub_func(
  outC_DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

