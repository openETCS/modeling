/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LevelAdapter_DMI_Control_Pkg_Utils.h"

#ifndef KCG_USER_DEFINED_INIT
void LevelAdapter_init_DMI_Control_Pkg_Utils(
  outC_LevelAdapter_DMI_Control_Pkg_Utils *outC)
{
  outC->_L21.level = M_LEVEL_Level_0;
  outC->_L21.nid_stm = 0;
  outC->_L20.level = M_LEVEL_Level_0;
  outC->_L20.nid_stm = 0;
  outC->_L19.level = M_LEVEL_Level_0;
  outC->_L19.nid_stm = 0;
  outC->_L18 = 0;
  outC->_L17 = 0;
  outC->_L16 = 0;
  outC->_L15 = 0;
  outC->_L14 = M_LEVEL_Level_0;
  outC->_L13 = M_LEVEL_Level_0;
  outC->_L12 = 0;
  outC->_L11 = 0;
  outC->_L10 = 0;
  outC->_L9 = 0;
  outC->_L8 = kcg_true;
  outC->_L7 = 0;
  outC->_L6 = 0;
  outC->_L5 = M_LEVEL_Level_0;
  outC->_L4 = 0;
  outC->LevelIndex = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void LevelAdapter_reset_DMI_Control_Pkg_Utils(
  outC_LevelAdapter_DMI_Control_Pkg_Utils *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Utils::LevelAdapter */
void LevelAdapter_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::LevelAdapter::level */ DMI_level_T_DMI_Types_Pkg *level,
  outC_LevelAdapter_DMI_Control_Pkg_Utils *outC)
{
  kcg_copy_DMI_level_T_DMI_Types_Pkg(&outC->_L19, level);
  outC->_L13 = outC->_L19.level;
  outC->_L5 = M_LEVEL_Level_NTC_specified_by_NID_NTC;
  outC->_L8 = outC->_L13 == outC->_L5;
  kcg_copy_DMI_level_T_DMI_Types_Pkg(&outC->_L20, level);
  outC->_L10 = outC->_L20.nid_stm;
  outC->_L11 = cLevel_ATB_Index_DMI_Control_Pkg;
  outC->_L9 = 7;
  outC->_L4 = 8;
  switch (outC->_L10) {
    case 1 :
      outC->_L6 = outC->_L11;
      break;
    case 2 :
      outC->_L6 = outC->_L9;
      break;
    
    default :
      outC->_L6 = outC->_L4;
  }
  kcg_copy_DMI_level_T_DMI_Types_Pkg(&outC->_L21, level);
  outC->_L14 = outC->_L21.level;
  outC->_L16 = cLevel_0_Index_DMI_Control_Pkg;
  outC->_L17 = cLevel_1_Index_DMI_Control_Pkg;
  outC->_L12 = cLevel_3_Index_DMI_Control_Pkg;
  outC->_L7 = cLevel_2_Index_DMI_Control_Pkg;
  switch (outC->_L14) {
    case M_LEVEL_Level_0 :
      outC->_L18 = outC->_L16;
      break;
    case M_LEVEL_Level_1 :
      outC->_L18 = outC->_L17;
      break;
    case M_LEVEL_Level_3 :
      outC->_L18 = outC->_L12;
      break;
    
    default :
      outC->_L18 = outC->_L7;
  }
  /* 1 */ if (outC->_L8) {
    outC->_L15 = outC->_L6;
  }
  else {
    outC->_L15 = outC->_L18;
  }
  outC->LevelIndex = outC->_L15;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** LevelAdapter_DMI_Control_Pkg_Utils.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

