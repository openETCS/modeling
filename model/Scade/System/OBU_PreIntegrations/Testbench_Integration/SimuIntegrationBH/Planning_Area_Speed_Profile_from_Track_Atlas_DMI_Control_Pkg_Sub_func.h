/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func_H_
#define _Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"
#include "Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_real_32 /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_from_Track_Atlas::Loc_Abs_to_DMI */ Loc_Abs_to_DMI;
  array_real_32 /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_from_Track_Atlas::MRSP_to_DMI */ MRSP_to_DMI;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func /* 1 */ Context_1[32];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_SpeedProfileArray_T_DMI_Types_Pkg /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_from_Track_Atlas::_L1 */ _L1;
  array_real_32 /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_from_Track_Atlas::_L2 */ _L2;
  array_real_32 /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_from_Track_Atlas::_L4 */ _L4;
  kcg_int /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_from_Track_Atlas::_L6 */ _L6;
  kcg_bool /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_from_Track_Atlas::_L7 */ _L7;
} outC_Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_from_Track_Atlas */
extern void Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_from_Track_Atlas::Planning_Area_Speed_Profile */ DMI_SpeedProfileArray_T_DMI_Types_Pkg *Planning_Area_Speed_Profile,
  outC_Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Planning_Area_Speed_Profile_from_Track_Atlas_reset_DMI_Control_Pkg_Sub_func(
  outC_Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Planning_Area_Speed_Profile_from_Track_Atlas_init_DMI_Control_Pkg_Sub_func(
  outC_Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

