/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func.h"

#ifndef KCG_USER_DEFINED_INIT
void Planning_Area_Speed_Profile_List_init_DMI_Control_Pkg_Sub_func(
  outC_Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L15 = 0.0;
  outC->_L14 = 0.0;
  outC->_L13 = 0.0;
  outC->_L12 = 0.0;
  outC->_L11 = 0;
  outC->_L7 = 0;
  outC->_L8 = 0;
  outC->_L9 = 0;
  outC->_L10 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.Loc_Abs = 0;
  outC->_L1.Loc_LRBG = 0;
  outC->_L1.MRS = 0;
  outC->MRSP_DMI = 0.0;
  outC->Loc_Abs_DMI = 0.0;
  outC->_1_continue = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Planning_Area_Speed_Profile_List_reset_DMI_Control_Pkg_Sub_func(
  outC_Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_List */
void Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_List::index */ kcg_int index,
  /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_List::Loc_LRBG */ DMI_speedProfileElement_T_DMI_Types_Pkg *Loc_LRBG,
  outC_Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_int noname;
  static L_internal_Type_Obu_BasicTypes_Pkg _1_noname;
  
  kcg_copy_DMI_speedProfileElement_T_DMI_Types_Pkg(&outC->_L1, Loc_LRBG);
  outC->_L9 = outC->_L1.Loc_Abs;
  outC->_L12 = (kcg_real) outC->_L9;
  outC->_L15 = 100.0;
  outC->_L14 = outC->_L12 / outC->_L15;
  outC->Loc_Abs_DMI = outC->_L14;
  outC->_L7 = outC->_L1.MRS;
  outC->_L8 = outC->_L1.Loc_LRBG;
  outC->_L10 = outC->_L1.valid;
  outC->_L13 = (kcg_real) outC->_L7;
  outC->MRSP_DMI = outC->_L13;
  outC->_1_continue = outC->_L10;
  outC->_L11 = index;
  noname = outC->_L11;
  _1_noname = outC->_L8;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

