/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func.h"

#ifndef KCG_USER_DEFINED_INIT
void Planning_Area_Speed_Profile_from_Track_Atlas_init_DMI_Control_Pkg_Sub_func(
  outC_Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_int i5;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->_L7 = kcg_true;
  outC->_L6 = 0;
  for (i = 0; i < 32; i++) {
    outC->_L4[i] = 0.0;
  }
  for (i1 = 0; i1 < 32; i1++) {
    outC->_L2[i1] = 0.0;
  }
  for (i2 = 0; i2 < 32; i2++) {
    outC->_L1[i2].valid = kcg_true;
    outC->_L1[i2].Loc_Abs = 0;
    outC->_L1[i2].Loc_LRBG = 0;
    outC->_L1[i2].MRS = 0;
  }
  for (i3 = 0; i3 < 32; i3++) {
    outC->MRSP_to_DMI[i3] = 0.0;
  }
  for (i4 = 0; i4 < 32; i4++) {
    outC->Loc_Abs_to_DMI[i4] = 0.0;
  }
  for (i5 = 0; i5 < 32; i5++) {
    /* 1 */
    Planning_Area_Speed_Profile_List_init_DMI_Control_Pkg_Sub_func(
      &outC->Context_1[i5]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Planning_Area_Speed_Profile_from_Track_Atlas_reset_DMI_Control_Pkg_Sub_func(
  outC_Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_int i;
  
  for (i = 0; i < 32; i++) {
    /* 1 */
    Planning_Area_Speed_Profile_List_reset_DMI_Control_Pkg_Sub_func(
      &outC->Context_1[i]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_from_Track_Atlas */
void Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_from_Track_Atlas::Planning_Area_Speed_Profile */ DMI_SpeedProfileArray_T_DMI_Types_Pkg *Planning_Area_Speed_Profile,
  outC_Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_int i;
  static kcg_int noname;
  
  kcg_copy_DMI_SpeedProfileArray_T_DMI_Types_Pkg(
    &outC->_L1,
    Planning_Area_Speed_Profile);
  outC->_L7 = kcg_true;
  /* 1 */ if (outC->_L7) {
    /* 1 */ for (i = 0; i < 32; i++) {
      /* 1 */
      Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func(
        i,
        &outC->_L1[i],
        &outC->Context_1[i]);
      outC->_L2[i] = outC->Context_1[i].Loc_Abs_DMI;
      outC->_L4[i] = outC->Context_1[i].MRSP_DMI;
      outC->_L6 = i + 1;
      /* 1 */ if (!outC->Context_1[i]._1_continue) {
        break;
      }
    }
  }
  else {
    outC->_L6 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  /* 1 */ for (i = outC->_L6; i < 32; i++) {
    outC->_L2[i] = 0.0;
    outC->_L4[i] = 0.0;
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_array_real_32(&outC->Loc_Abs_to_DMI, &outC->_L2);
  kcg_copy_array_real_32(&outC->MRSP_to_DMI, &outC->_L4);
  noname = outC->_L6;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

