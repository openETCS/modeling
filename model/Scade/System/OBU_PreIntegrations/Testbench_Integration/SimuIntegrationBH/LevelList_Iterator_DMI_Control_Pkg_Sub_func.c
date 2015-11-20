/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LevelList_Iterator_DMI_Control_Pkg_Sub_func.h"

#ifndef KCG_USER_DEFINED_INIT
void LevelList_Iterator_init_DMI_Control_Pkg_Sub_func(
  outC_LevelList_Iterator_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L81 = 0;
  outC->_L80 = 0;
  outC->_L77.level = M_LEVEL_Level_0;
  outC->_L77.nid_stm = 0;
  outC->_L58 = M_LEVEL_Level_0;
  outC->_L56.level = M_LEVEL_Level_0;
  outC->_L56.nid_stm = 0;
  outC->_L57 = M_LEVEL_Level_0;
  outC->_L2.level = M_LEVEL_Level_0;
  outC->_L2.nid_stm = 0;
  outC->_L38 = 0;
  outC->_L23 = 0;
  outC->_L22 = 0;
  outC->_L21 = 0;
  outC->_L20 = 0;
  outC->_L19 = 0;
  outC->_L16 = 0;
  outC->_L15 = 0;
  outC->_L14 = 0;
  outC->_L10 = M_LEVEL_Level_0;
  outC->_L8 = kcg_true;
  outC->_L7 = 0;
  outC->_L6 = 0;
  outC->_L5 = kcg_true;
  outC->_L4 = 0;
  outC->_L1 = 0;
  outC->IndexLevel = 0;
  outC->condition = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void LevelList_Iterator_reset_DMI_Control_Pkg_Sub_func(
  outC_LevelList_Iterator_DMI_Control_Pkg_Sub_func *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::LevelList_Iterator */
void LevelList_Iterator_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::index */ kcg_int index,
  /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::level */ DMI_level_T_DMI_Types_Pkg *level,
  /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::N_level */ kcg_int N_level,
  outC_LevelList_Iterator_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L1 = index;
  kcg_copy_DMI_level_T_DMI_Types_Pkg(&outC->_L2, level);
  outC->_L58 = outC->_L2.level;
  outC->_L10 = M_LEVEL_Level_NTC_specified_by_NID_NTC;
  outC->_L8 = outC->_L58 == outC->_L10;
  kcg_copy_DMI_level_T_DMI_Types_Pkg(&outC->_L77, level);
  outC->_L38 = outC->_L77.nid_stm;
  outC->_L16 = cLevel_ATB_Index_DMI_Control_Pkg;
  outC->_L14 = 7;
  outC->_L15 = 8;
  switch (outC->_L38) {
    case 1 :
      outC->_L6 = outC->_L16;
      break;
    case 2 :
      outC->_L6 = outC->_L14;
      break;
    
    default :
      outC->_L6 = outC->_L15;
  }
  kcg_copy_DMI_level_T_DMI_Types_Pkg(&outC->_L56, level);
  outC->_L57 = outC->_L56.level;
  outC->_L20 = cLevel_0_Index_DMI_Control_Pkg;
  outC->_L21 = cLevel_1_Index_DMI_Control_Pkg;
  outC->_L23 = cLevel_3_Index_DMI_Control_Pkg;
  outC->_L22 = cLevel_2_Index_DMI_Control_Pkg;
  switch (outC->_L57) {
    case M_LEVEL_Level_0 :
      outC->_L19 = outC->_L20;
      break;
    case M_LEVEL_Level_1 :
      outC->_L19 = outC->_L21;
      break;
    case M_LEVEL_Level_3 :
      outC->_L19 = outC->_L23;
      break;
    
    default :
      outC->_L19 = outC->_L22;
  }
  /* 1 */ if (outC->_L8) {
    outC->_L7 = outC->_L6;
  }
  else {
    outC->_L7 = outC->_L19;
  }
  outC->IndexLevel = outC->_L7;
  outC->_L4 = N_level;
  outC->_L81 = 1;
  outC->_L80 = outC->_L4 - outC->_L81;
  outC->_L5 = outC->_L1 < outC->_L80;
  outC->condition = outC->_L5;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** LevelList_Iterator_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

