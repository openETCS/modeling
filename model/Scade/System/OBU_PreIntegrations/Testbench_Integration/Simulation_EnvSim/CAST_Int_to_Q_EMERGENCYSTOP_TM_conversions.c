/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_EMERGENCYSTOP_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP */
Q_EMERGENCYSTOP CAST_Int_to_Q_EMERGENCYSTOP_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::q_emergencystop_int */kcg_int q_emergencystop_int)
{
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::IfBlock1::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::IfBlock1::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::IfBlock1::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP::q_emergencystop */
  static Q_EMERGENCYSTOP q_emergencystop;
  
  IfBlock1_clock = q_emergencystop_int ==
    INT_Q_EMERGENCYSTOP_cond_accepted_with_EOA_update_TM_conversions;
  if (IfBlock1_clock) {
    q_emergencystop =
      ENUM_Q_EMERGENCYSTOP_cond_accepted_with_EOA_update_TM_conversions;
  }
  else {
    _2_else_clock_IfBlock1 = q_emergencystop_int ==
      INT_Q_EMERGENCYSTOP_cond_accepted_with_no_EOA_update_TM_conversions;
    if (_2_else_clock_IfBlock1) {
      q_emergencystop =
        ENUM_Q_EMERGENCYSTOP_cond_accepted_with_no_EOA_update_TM_conversions;
    }
    else {
      _1_else_clock_IfBlock1 = q_emergencystop_int ==
        INT_Q_EMERGENCYSTOP_uncond_accepted_TM_conversions;
      if (_1_else_clock_IfBlock1) {
        q_emergencystop = ENUM_Q_EMERGENCYSTOP_uncond_accepted_TM_conversions;
      }
      else {
        else_clock_IfBlock1 = q_emergencystop_int ==
          INT_Q_EMERGENCYSTOP_rejected_TM_conversions;
        if (else_clock_IfBlock1) {
          q_emergencystop = ENUM_Q_EMERGENCYSTOP_rejected_TM_conversions;
        }
        else {
          q_emergencystop = ENUM_Q_EMERGENCYSTOP_rejected_TM_conversions;
        }
      }
    }
  }
  return q_emergencystop;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_EMERGENCYSTOP_TM_conversions.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

