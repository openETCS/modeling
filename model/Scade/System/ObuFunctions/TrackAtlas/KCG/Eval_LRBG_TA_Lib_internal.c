/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Eval_LRBG_TA_Lib_internal.h"

/* TA_Lib_internal::Eval_LRBG */
kcg_int Eval_LRBG_TA_Lib_internal(
  /* TA_Lib_internal::Eval_LRBG::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn)
{
  /* TA_Lib_internal::Eval_LRBG::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* TA_Lib_internal::Eval_LRBG::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TA_Lib_internal::Eval_LRBG::LRBG */ kcg_int LRBG;
  
  IfBlock1_clock = (*MessageIn).source == ENUM_MsgSource_Balise_TA_Lib_internal;
  if (IfBlock1_clock) {
    LRBG = (*MessageIn).BG_Common_Header.nid_bg;
  }
  else {
    else_clock_IfBlock1 = (*MessageIn).source ==
      ENUM_MsgSource_Euroradio_TA_Lib_internal;
    if (else_clock_IfBlock1) {
      LRBG = (*MessageIn).Radio_Common_Header.nid_lrbg;
    }
    else {
      LRBG = 0;
    }
  }
  return LRBG;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Eval_LRBG_TA_Lib_internal.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

