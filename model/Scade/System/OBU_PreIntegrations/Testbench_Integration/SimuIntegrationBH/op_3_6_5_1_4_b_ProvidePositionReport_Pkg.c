/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_6_5_1_4_b_ProvidePositionReport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void op_3_6_5_1_4_b_init_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_b_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
  outC->rem_modeLevelStatus.currMode = M_MODE_Full_Supervision;
  outC->rem_modeLevelStatus.currLevel = M_LEVEL_Level_0;
  outC->rem_modeLevelStatus.levelTransitionBorderPassed = kcg_true;
  outC->trigger = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void op_3_6_5_1_4_b_reset_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_b_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::op_3_6_5_1_4_b */
void op_3_6_5_1_4_b_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_b::modeLevelStatus */ ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  outC_op_3_6_5_1_4_b_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_b::modeLevelStatus */
  static ModeLevel2PositionReport_T_ProvidePositionReport_Pkg last_modeLevelStatus;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_b::_L1 */
  static ModeLevel2PositionReport_T_ProvidePositionReport_Pkg _L1;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_b::_L2 */
  static M_MODE _L2;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_b::_L5 */
  static ModeLevel2PositionReport_T_ProvidePositionReport_Pkg _L5;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_b::_L6 */
  static M_MODE _L6;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_b::_L7 */
  static kcg_bool _L7;
  
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &_L1,
    modeLevelStatus);
  _L2 = _L1.currMode;
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
    &_L5,
    &last_modeLevelStatus);
  _L6 = _L5.currMode;
  _L7 = _L2 != _L6;
  outC->trigger = _L7;
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &outC->rem_modeLevelStatus,
    modeLevelStatus);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** op_3_6_5_1_4_b_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

