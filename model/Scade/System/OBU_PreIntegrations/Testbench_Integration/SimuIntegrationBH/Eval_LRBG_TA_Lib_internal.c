/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Eval_LRBG_TA_Lib_internal.h"

/* TA_Lib_internal::Eval_LRBG */
void Eval_LRBG_TA_Lib_internal(
  /* TA_Lib_internal::Eval_LRBG::MessageIn */ ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_Lib_internal::Eval_LRBG::valid */ kcg_bool *valid,
  /* TA_Lib_internal::Eval_LRBG::C */ kcg_int *C12,
  /* TA_Lib_internal::Eval_LRBG::BG */ kcg_int *BG11)
{
  /* TA_Lib_internal::Eval_LRBG::BG */
  static kcg_int BG2;
  /* TA_Lib_internal::Eval_LRBG::C */
  static kcg_int C1;
  /* TA_Lib_internal::Eval_LRBG::IfBlock1::then::_L5 */
  static kcg_int _L5_IfBlock1;
  /* TA_Lib_internal::Eval_LRBG::IfBlock1::then::_L2 */
  static NID_BG _L2_IfBlock1;
  /* TA_Lib_internal::Eval_LRBG::IfBlock1::then::_L1 */
  static ReceivedMessage_T_Common_Types_Pkg _L1_IfBlock1;
  /* TA_Lib_internal::Eval_LRBG::BG */
  static kcg_int BG;
  /* TA_Lib_internal::Eval_LRBG::C */
  static kcg_int C;
  /* TA_Lib_internal::Eval_LRBG::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TA_Lib_internal::Eval_LRBG::IfBlock1::else::else::_L1 */
  static kcg_int _L110_IfBlock1;
  /* TA_Lib_internal::Eval_LRBG::IfBlock1::else::else::_L2 */
  static kcg_int _L29_IfBlock1;
  /* TA_Lib_internal::Eval_LRBG::C */
  static kcg_int C3;
  /* TA_Lib_internal::Eval_LRBG::BG */
  static kcg_int BG4;
  /* TA_Lib_internal::Eval_LRBG::IfBlock1::else::then::_L2 */
  static ReceivedMessage_T_Common_Types_Pkg _L28_IfBlock1;
  /* TA_Lib_internal::Eval_LRBG::IfBlock1::else::then::_L1 */
  static NID_LRBG _L17_IfBlock1;
  /* TA_Lib_internal::Eval_LRBG::IfBlock1::else::then::_L3 */
  static NID_C _L3_IfBlock1;
  /* TA_Lib_internal::Eval_LRBG::IfBlock1::else::then::_L4 */
  static NID_BG _L4_IfBlock1;
  /* TA_Lib_internal::Eval_LRBG::C */
  static kcg_int C5;
  /* TA_Lib_internal::Eval_LRBG::BG */
  static kcg_int BG6;
  /* TA_Lib_internal::Eval_LRBG::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TA_Lib_internal::Eval_LRBG::source */
  static MsgSource_T_Common_Types_Pkg source;
  /* TA_Lib_internal::Eval_LRBG::_L1 */
  static ReceivedMessage_T_Common_Types_Pkg _L1;
  /* TA_Lib_internal::Eval_LRBG::_L14 */
  static MsgSource_T_Common_Types_Pkg _L14;
  /* TA_Lib_internal::Eval_LRBG::_L15 */
  static kcg_bool _L15;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L1, MessageIn);
  _L14 = _L1.source;
  source = _L14;
  IfBlock1_clock = source == ENUM_MsgSource_Balise_TA_Lib_internal;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L5_IfBlock1 = 0;
    C1 = _L5_IfBlock1;
    *C12 = C1;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L1_IfBlock1, MessageIn);
    _L2_IfBlock1 = _L1_IfBlock1.BG_Common_Header.nid_bg;
    BG2 = _L2_IfBlock1;
    *BG11 = BG2;
  }
  else {
    else_clock_IfBlock1 = source == ENUM_MsgSource_Euroradio_TA_Lib_internal;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L28_IfBlock1, MessageIn);
      _L17_IfBlock1 = _L28_IfBlock1.Radio_Common_Header.nid_lrbg;
      /* 2 */
      DECODE_NID_LRBG_TM_conversions(
        _L17_IfBlock1,
        &_L3_IfBlock1,
        &_L4_IfBlock1);
      C5 = _L3_IfBlock1;
      C = C5;
    }
    else {
      _L29_IfBlock1 = 0;
      C3 = _L29_IfBlock1;
      C = C3;
    }
    *C12 = C;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      BG6 = _L4_IfBlock1;
      BG = BG6;
    }
    else {
      _L110_IfBlock1 = 0;
      BG4 = _L110_IfBlock1;
      BG = BG4;
    }
    *BG11 = BG;
  }
  _L15 = _L1.valid;
  *valid = _L15;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Eval_LRBG_TA_Lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

