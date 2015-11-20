/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void op_3_6_5_1_4_f_g_init_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
  outC->rem_modeLevelStatus.currMode = M_MODE_Full_Supervision;
  outC->rem_modeLevelStatus.currLevel = M_LEVEL_Level_0;
  outC->rem_modeLevelStatus.levelTransitionBorderPassed = kcg_true;
  outC->trigger = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void op_3_6_5_1_4_f_g_reset_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::op_3_6_5_1_4_f_g */
void op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_f_g::modeLevelStatus */ ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  outC_op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_f_g::modeLevelStatus */
  static ModeLevel2PositionReport_T_ProvidePositionReport_Pkg last_modeLevelStatus;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_f_g::_L1 */
  static ModeLevel2PositionReport_T_ProvidePositionReport_Pkg _L1;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_f_g::_L2 */
  static M_LEVEL _L2;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_f_g::_L8 */
  static kcg_bool _L8;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_f_g::_L11 */
  static ModeLevel2PositionReport_T_ProvidePositionReport_Pkg _L11;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_f_g::_L12 */
  static M_LEVEL _L12;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_f_g::_L13 */
  static kcg_bool _L13;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_f_g::_L14 */
  static kcg_bool _L14;
  
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &_L1,
    modeLevelStatus);
  /* last_init_ck_modeLevelStatus */ if (outC->init) {
    kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
      &last_modeLevelStatus,
      (ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *)
        &cModeAndLevelStatus_ProvidePositionReport_Pkg);
  }
  else {
    kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
      &last_modeLevelStatus,
      &outC->rem_modeLevelStatus);
  }
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &_L11,
    &last_modeLevelStatus);
  _L12 = _L11.currLevel;
  _L2 = _L1.currLevel;
  _L8 = _L12 != _L2;
  _L14 = _L1.levelTransitionBorderPassed;
  _L13 = _L8 | _L14;
  outC->trigger = _L13;
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &outC->rem_modeLevelStatus,
    modeLevelStatus);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

