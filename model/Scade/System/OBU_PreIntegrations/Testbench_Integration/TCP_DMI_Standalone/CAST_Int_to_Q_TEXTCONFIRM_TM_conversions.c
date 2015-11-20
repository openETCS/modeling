/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_TEXTCONFIRM_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_TEXTCONFIRM */
Q_TEXTCONFIRM CAST_Int_to_Q_TEXTCONFIRM_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_TEXTCONFIRM::q_textconfirmint */kcg_int q_textconfirmint)
{
  /* TM_conversions::CAST_Int_to_Q_TEXTCONFIRM::IfBlock1::else */ kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_TEXTCONFIRM::IfBlock1::else::else::else */ kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_TEXTCONFIRM::IfBlock1::else::else */ kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_TEXTCONFIRM::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_TEXTCONFIRM::q_textconfirm */ Q_TEXTCONFIRM q_textconfirm;
  
  IfBlock1_clock = q_textconfirmint ==
    INT_Q_TEXTCONFIRM_confirmation_TM_conversions;
  if (IfBlock1_clock) {
    q_textconfirm = ENUM_Q_TEXTCONFIRM_confirmation_TM_conversions;
  }
  else {
    _2_else_clock_IfBlock1 = q_textconfirmint ==
      INT_Q_TEXTCONFIRM_confirmation_EB_TM_conversions;
    if (_2_else_clock_IfBlock1) {
      q_textconfirm = ENUM_Q_TEXTCONFIRM_confirmation_EB_TM_conversions;
    }
    else {
      _1_else_clock_IfBlock1 = q_textconfirmint ==
        INT_Q_TEXTCONFIRM_confirmation_SB_TM_conversions;
      if (_1_else_clock_IfBlock1) {
        q_textconfirm = ENUM_Q_TEXTCONFIRM_confirmation_SB_TM_conversions;
      }
      else {
        else_clock_IfBlock1 = q_textconfirmint ==
          INT_Q_TEXTCONFIRM_no_confirmation_TM_conversions;
        if (else_clock_IfBlock1) {
          q_textconfirm = ENUM_Q_TEXTCONFIRM_no_confirmation_TM_conversions;
        }
        else {
          q_textconfirm = ENUM_Q_TEXTCONFIRM_confirmation_TM_conversions;
        }
      }
    }
  }
  return q_textconfirm;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_TEXTCONFIRM_TM_conversions.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

