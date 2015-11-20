/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func.h"

#ifndef KCG_USER_DEFINED_INIT
void LevelModeSymolsChecker_init_DMI_Control_Pkg_Sub_func(
  outC_LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_int i4;
  static kcg_int i5;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->_L24 = 0;
  outC->_L23 = kcg_true;
  outC->_L22 = 0;
  outC->_L21 = kcg_true;
  outC->_L20 = 0;
  outC->_L19 = kcg_true;
  outC->_L18 = kcg_true;
  for (i = 0; i < 5; i++) {
    outC->_L17[i] = 0;
  }
  for (i1 = 0; i1 < 8; i1++) {
    outC->_L16[i1] = 0;
  }
  for (i2 = 0; i2 < 5; i2++) {
    outC->_L15[i2] = 0;
  }
  for (i3 = 0; i3 < 8; i3++) {
    outC->_L14[i3] = 0;
  }
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = 0;
  outC->_L8 = kcg_true;
  outC->_L7 = 0;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L1 = 0;
  outC->_L4 = 0;
  outC->CheckResult = kcg_true;
  for (i5 = 0; i5 < 8; i5++) {
    /* 1 */ CheckElem_iterator_init_DMI_Control_Pkg_Utils(&outC->Context_1[i5]);
  }
  for (i4 = 0; i4 < 5; i4++) {
    /* 2 */ CheckElem_iterator_init_DMI_Control_Pkg_Utils(&outC->Context_2[i4]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void LevelModeSymolsChecker_reset_DMI_Control_Pkg_Sub_func(
  outC_LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_int i;
  static kcg_int i1;
  
  for (i1 = 0; i1 < 8; i1++) {
    /* 1 */
    CheckElem_iterator_reset_DMI_Control_Pkg_Utils(&outC->Context_1[i1]);
  }
  for (i = 0; i < 5; i++) {
    /* 2 */ CheckElem_iterator_reset_DMI_Control_Pkg_Utils(&outC->Context_2[i]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker */
void LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker::GroupIndex */ kcg_int GroupIndex,
  /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker::SymbolIndex */ kcg_int SymbolIndex,
  outC_LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_int i4;
  /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker */
  static kcg_bool acc3;
  static kcg_int i2;
  static kcg_int i1;
  /* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker */
  static kcg_bool acc;
  static kcg_int i;
  static kcg_int noname;
  static kcg_int _5_noname;
  
  outC->_L4 = SymbolIndex;
  outC->_L1 = GroupIndex;
  outC->_L7 = cLevelSymbol_IconGroup_DMI_Control_Pkg;
  outC->_L10 = outC->_L1 == outC->_L7;
  outC->_L13 = kcg_false;
  kcg_copy_array_int_5(
    &outC->_L17,
    (array_int_5 *) &ArrayOfIndex_YellowLevelSymbols_DMI_Control_Pkg);
  /* pow */ for (i4 = 0; i4 < 5; i4++) {
    outC->_L15[i4] = outC->_L4;
  }
  outC->_L19 = kcg_true;
  outC->_L23 = outC->_L13;
  if (outC->_L19) {
    for (i2 = 0; i2 < 5; i2++) {
      acc3 = outC->_L23;
      /* 2 */
      CheckElem_iterator_DMI_Control_Pkg_Utils(
        acc3,
        outC->_L17[i2],
        outC->_L15[i2],
        &outC->Context_2[i2]);
      outC->_L23 = outC->Context_2[i2].result;
      outC->_L22 = i2 + 1;
      if (!outC->Context_2[i2].condition) {
        break;
      }
    }
  }
  else {
    outC->_L22 = 0;
  }
  outC->_L6 = outC->_L10 & outC->_L23;
  outC->_L12 = kcg_false;
  kcg_copy_array_int_8(
    &outC->_L16,
    (array_int_8 *) &ArrayOfIndex_YellowModeSymbols_DMI_Control_Pkg);
  /* pow */ for (i1 = 0; i1 < 8; i1++) {
    outC->_L14[i1] = outC->_L4;
  }
  outC->_L18 = kcg_true;
  outC->_L21 = outC->_L12;
  if (outC->_L18) {
    for (i = 0; i < 8; i++) {
      acc = outC->_L21;
      /* 1 */
      CheckElem_iterator_DMI_Control_Pkg_Utils(
        acc,
        outC->_L16[i],
        outC->_L14[i],
        &outC->Context_1[i]);
      outC->_L21 = outC->Context_1[i].result;
      outC->_L20 = i + 1;
      if (!outC->Context_1[i].condition) {
        break;
      }
    }
  }
  else {
    outC->_L20 = 0;
  }
  outC->_L24 = GroupIndex;
  outC->_L9 = cModeSymbol_IconGroup_DMI_Control_Pkg;
  outC->_L11 = outC->_L24 == outC->_L9;
  outC->_L8 = outC->_L21 & outC->_L11;
  outC->_L5 = outC->_L6 | outC->_L8;
  outC->CheckResult = outC->_L5;
  noname = outC->_L20;
  _5_noname = outC->_L22;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

