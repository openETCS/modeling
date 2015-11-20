/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Eval_LRBG_TA_Lib_internal.h"

/* TA_Lib_internal::Eval_LRBG */
void Eval_LRBG_TA_Lib_internal(
  /* TA_Lib_internal::Eval_LRBG::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_Lib_internal::Eval_LRBG::valid */kcg_bool *valid,
  /* TA_Lib_internal::Eval_LRBG::C */kcg_int *C,
  /* TA_Lib_internal::Eval_LRBG::BG */kcg_int *BG)
{
  /* TA_Lib_internal::Eval_LRBG::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TA_Lib_internal::Eval_LRBG::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  *valid = (*MessageIn).valid;
  IfBlock1_clock = (*MessageIn).source == ENUM_MsgSource_Balise_TA_Lib_internal;
  if (IfBlock1_clock) {
    *C = 0;
    *BG = (*MessageIn).BG_Common_Header.nid_bg;
  }
  else {
    else_clock_IfBlock1 = (*MessageIn).source ==
      ENUM_MsgSource_Euroradio_TA_Lib_internal;
    if (else_clock_IfBlock1) {
      /* 2 */
      DECODE_NID_LRBG_TM_conversions(
        (*MessageIn).Radio_Common_Header.nid_lrbg,
        C,
        BG);
    }
    else {
      *C = 0;
      *BG = 0;
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Eval_LRBG_TA_Lib_internal.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

