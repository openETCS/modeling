/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func_H_
#define _Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_List::continue */ _1_continue;
  kcg_real /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_List::Loc_Abs_DMI */ Loc_Abs_DMI;
  kcg_real /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_List::MRSP_DMI */ MRSP_DMI;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_speedProfileElement_T_DMI_Types_Pkg /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_List::_L1 */ _L1;
  kcg_bool /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_List::_L10 */ _L10;
  L_internal_Type_Obu_BasicTypes_Pkg /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_List::_L9 */ _L9;
  L_internal_Type_Obu_BasicTypes_Pkg /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_List::_L8 */ _L8;
  V_internal_Type_Obu_BasicTypes_Pkg /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_List::_L7 */ _L7;
  kcg_int /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_List::_L11 */ _L11;
  kcg_real /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_List::_L12 */ _L12;
  kcg_real /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_List::_L13 */ _L13;
  kcg_real /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_List::_L14 */ _L14;
  kcg_real /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_List::_L15 */ _L15;
} outC_Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_List */
extern void Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_List::index */ kcg_int index,
  /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_List::Loc_LRBG */ DMI_speedProfileElement_T_DMI_Types_Pkg *Loc_LRBG,
  outC_Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Planning_Area_Speed_Profile_List_reset_DMI_Control_Pkg_Sub_func(
  outC_Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Planning_Area_Speed_Profile_List_init_DMI_Control_Pkg_Sub_func(
  outC_Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

