/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_TEXTCLASS_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_TEXTCLASS */
Q_TEXTCLASS CAST_Int_to_Q_TEXTCLASS_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_TEXTCLASS::q_textclass_int */kcg_int q_textclass_int)
{
  /* TM_conversions::CAST_Int_to_Q_TEXTCLASS::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_TEXTCLASS::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_TEXTCLASS::q_textclass */ Q_TEXTCLASS q_textclass;
  
  IfBlock1_clock = q_textclass_int == INT_Q_TEXTCLASS_important_TM_conversions;
  if (IfBlock1_clock) {
    q_textclass = ENUM_Q_TEXTCLASS_important_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = q_textclass_int == INT_Q_TEXTCLASS_aux_TM_conversions;
    if (else_clock_IfBlock1) {
      q_textclass = ENUM_Q_TEXTCLASS_aux_TM_conversions;
    }
    else {
      q_textclass = ENUM_Q_TEXTCLASS_important_TM_conversions;
    }
  }
  return q_textclass;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_TEXTCLASS_TM_conversions.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

