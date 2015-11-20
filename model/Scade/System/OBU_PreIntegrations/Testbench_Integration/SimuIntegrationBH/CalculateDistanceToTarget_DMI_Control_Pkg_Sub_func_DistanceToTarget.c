/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget.h"

#ifndef KCG_USER_DEFINED_INIT
void CalculateDistanceToTarget_init_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  outC_CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC)
{
  outC->_L1_IfBlock1 = 0.0;
  outC->_L2_IfBlock1 = 0.0;
  outC->_L3_IfBlock1 = 0.0;
  outC->_L4_IfBlock1 = 0.0;
  outC->_L5_IfBlock1 = 0.0;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L56_IfBlock1 = 0.0;
  outC->_L35_IfBlock1 = 0.0;
  outC->_L24_IfBlock1 = 0.0;
  outC->_L6_IfBlock1 = 0.0;
  outC->_L7_IfBlock1 = 0.0;
  outC->_L83_IfBlock1 = 0.0;
  outC->_L9_IfBlock1 = 0.0;
  outC->_L10_IfBlock1 = 0.0;
  outC->_L12_IfBlock1 = 0.0;
  outC->_L8_IfBlock1 = 0.0;
  outC->IfBlock1_clock = kcg_true;
  outC->_1_else_clock_IfBlock1 = kcg_true;
  outC->init = kcg_true;
  outC->InterpolatedDistanceToTarget = 0.0;
}
#endif /* KCG_USER_DEFINED_INIT */


void CalculateDistanceToTarget_reset_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  outC_CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC)
{
  outC->init = kcg_true;
}

/* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget */
void CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget::DistanceToTarget */ kcg_real DistanceToTarget,
  outC_CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC)
{
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget::InterpolatedDistanceToTarget */
  static kcg_real _1_InterpolatedDistanceToTarget;
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget::InterpolatedDistanceToTarget */
  static kcg_real InterpolatedDistanceToTarget;
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget::InterpolatedDistanceToTarget */
  static kcg_real _5_InterpolatedDistanceToTarget;
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget::InterpolatedDistanceToTarget */
  static kcg_real _4_InterpolatedDistanceToTarget;
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget::InterpolatedDistanceToTarget */
  static kcg_real _2_InterpolatedDistanceToTarget;
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget::InterpolatedDistanceToTarget */
  static kcg_real _3_InterpolatedDistanceToTarget;
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget::InterpolatedDistanceToTarget */
  static kcg_real last_InterpolatedDistanceToTarget;
  
  outC->IfBlock1_clock = DistanceToTarget < 0.0;
  /* last_init_ck_InterpolatedDistanceToTarget */ if (outC->init) {
    last_InterpolatedDistanceToTarget = 0.0;
  }
  else {
    last_InterpolatedDistanceToTarget = outC->InterpolatedDistanceToTarget;
  }
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    outC->_L8_IfBlock1 = - 89.5;
    _1_InterpolatedDistanceToTarget = outC->_L8_IfBlock1;
    outC->InterpolatedDistanceToTarget = _1_InterpolatedDistanceToTarget;
  }
  else {
    outC->_1_else_clock_IfBlock1 = DistanceToTarget < 100.0;
    /* ck_anon_activ */ if (outC->_1_else_clock_IfBlock1) {
      outC->_L4_IfBlock1 = - 89.5;
      outC->_L3_IfBlock1 = DistanceToTarget;
      outC->_L1_IfBlock1 = 0.33;
      outC->_L5_IfBlock1 = outC->_L3_IfBlock1 * outC->_L1_IfBlock1;
      outC->_L2_IfBlock1 = outC->_L4_IfBlock1 + outC->_L5_IfBlock1;
      _3_InterpolatedDistanceToTarget = outC->_L2_IfBlock1;
      InterpolatedDistanceToTarget = _3_InterpolatedDistanceToTarget;
    }
    else {
      outC->else_clock_IfBlock1 = DistanceToTarget > 1000.0;
      /* ck_anon_activ */ if (outC->else_clock_IfBlock1) {
        outC->_L12_IfBlock1 = 96.5;
        _5_InterpolatedDistanceToTarget = outC->_L12_IfBlock1;
        _2_InterpolatedDistanceToTarget = _5_InterpolatedDistanceToTarget;
      }
      else {
        outC->_L56_IfBlock1 = Px100To1001_DMI_Control_Pkg;
        outC->_L24_IfBlock1 = DistanceToTarget;
        outC->_L6_IfBlock1 = /* 1 */ LogR_mathext(outC->_L24_IfBlock1);
        outC->_L83_IfBlock1 = 2.0;
        outC->_L7_IfBlock1 = outC->_L6_IfBlock1 - outC->_L83_IfBlock1;
        outC->_L35_IfBlock1 = outC->_L56_IfBlock1 * outC->_L7_IfBlock1;
        outC->_L10_IfBlock1 = Y100I1_DMI_Control_Pkg;
        outC->_L9_IfBlock1 = outC->_L35_IfBlock1 + outC->_L10_IfBlock1;
        _4_InterpolatedDistanceToTarget = outC->_L9_IfBlock1;
        _2_InterpolatedDistanceToTarget = _4_InterpolatedDistanceToTarget;
      }
      InterpolatedDistanceToTarget = _2_InterpolatedDistanceToTarget;
    }
    outC->InterpolatedDistanceToTarget = InterpolatedDistanceToTarget;
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

