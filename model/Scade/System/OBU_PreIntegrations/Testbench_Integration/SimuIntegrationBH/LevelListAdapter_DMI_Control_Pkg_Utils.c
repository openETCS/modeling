/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LevelListAdapter_DMI_Control_Pkg_Utils.h"

#ifndef KCG_USER_DEFINED_INIT
void LevelListAdapter_init_DMI_Control_Pkg_Utils(
  outC_LevelListAdapter_DMI_Control_Pkg_Utils *outC)
{
  static kcg_int i7;
  static kcg_int i6;
  static kcg_int i5;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->_L25 = 0;
  for (i = 0; i < 32; i++) {
    outC->_L24[i] = 0;
  }
  for (i1 = 0; i1 < 12; i1++) {
    outC->_L21[i1] = 0;
  }
  outC->_L19 = kcg_true;
  outC->_L18 = 0;
  outC->_L17 = kcg_true;
  outC->_L16 = 0;
  for (i2 = 0; i2 < 32; i2++) {
    outC->_L15[i2].level = M_LEVEL_Level_0;
    outC->_L15[i2].nid_stm = 0;
  }
  for (i3 = 0; i3 < 32; i3++) {
    outC->_L9[i3] = 0;
  }
  outC->_L8 = 0;
  outC->_L7.number = 0;
  for (i4 = 0; i4 < 32; i4++) {
    outC->_L7.levelList[i4].level = M_LEVEL_Level_0;
    outC->_L7.levelList[i4].nid_stm = 0;
  }
  outC->_L4 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.system_clock = 0;
  outC->_L1.levelList.number = 0;
  for (i5 = 0; i5 < 32; i5++) {
    outC->_L1.levelList.levelList[i5].level = M_LEVEL_Level_0;
    outC->_L1.levelList.levelList[i5].nid_stm = 0;
  }
  for (i6 = 0; i6 < 12; i6++) {
    outC->ArrayLevelIndex_toDisplay[i6] = 0;
  }
  for (i7 = 0; i7 < 32; i7++) {
    /* 1 */
    LevelList_Iterator_init_DMI_Control_Pkg_Sub_func(&outC->Context_1[i7]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void LevelListAdapter_reset_DMI_Control_Pkg_Utils(
  outC_LevelListAdapter_DMI_Control_Pkg_Utils *outC)
{
  static kcg_int i;
  
  for (i = 0; i < 32; i++) {
    /* 1 */
    LevelList_Iterator_reset_DMI_Control_Pkg_Sub_func(&outC->Context_1[i]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Utils::LevelListAdapter */
void LevelListAdapter_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::LevelListAdapter::DMI_evc_level_data */ DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_evc_level_data,
  outC_LevelListAdapter_DMI_Control_Pkg_Utils *outC)
{
  static kcg_int i1;
  static kcg_int i;
  static kcg_int noname;
  
  kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L1,
    DMI_evc_level_data);
  kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(&outC->_L7, &outC->_L1.levelList);
  kcg_copy_DMI_level_array_T_DMI_Types_Pkg(&outC->_L15, &outC->_L7.levelList);
  outC->_L25 = outC->_L1.levelList.number;
  /* pow */ for (i1 = 0; i1 < 32; i1++) {
    outC->_L24[i1] = outC->_L25;
  }
  outC->_L16 = outC->_L1.levelList.number;
  outC->_L18 = 0;
  outC->_L17 = outC->_L16 != outC->_L18;
  outC->_L4 = outC->_L1.valid;
  outC->_L19 = outC->_L17 & outC->_L4;
  if (outC->_L19) {
    for (i = 0; i < 32; i++) {
      /* 1 */
      LevelList_Iterator_DMI_Control_Pkg_Sub_func(
        i,
        &outC->_L15[i],
        outC->_L24[i],
        &outC->Context_1[i]);
      outC->_L9[i] = outC->Context_1[i].IndexLevel;
      outC->_L8 = i + 1;
      if (!outC->Context_1[i].condition) {
        break;
      }
    }
  }
  else {
    outC->_L8 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = outC->_L8; i < 32; i++) {
    outC->_L9[i] = 0;
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_array_int_12(&outC->_L21, (array_int_12 *) &outC->_L9[0]);
  kcg_copy_array_int_12(&outC->ArrayLevelIndex_toDisplay, &outC->_L21);
  noname = outC->_L8;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** LevelListAdapter_DMI_Control_Pkg_Utils.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

