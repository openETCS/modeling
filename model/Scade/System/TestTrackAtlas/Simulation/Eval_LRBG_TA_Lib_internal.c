/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Eval_LRBG_TA_Lib_internal.h"

void Eval_LRBG_reset_TA_Lib_internal(outC_Eval_LRBG_TA_Lib_internal *outC)
{
}

/* TA_Lib_internal::Eval_LRBG */
void Eval_LRBG_TA_Lib_internal(
  /* TA_Lib_internal::Eval_LRBG::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  outC_Eval_LRBG_TA_Lib_internal *outC)
{
  /* TA_Lib_internal::Eval_LRBG::LRBG */ kcg_int LRBG1;
  /* TA_Lib_internal::Eval_LRBG::LRBG */ kcg_int LRBG;
  /* TA_Lib_internal::Eval_LRBG::LRBG */ kcg_int LRBG2;
  /* TA_Lib_internal::Eval_LRBG::LRBG */ kcg_int LRBG3;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, MessageIn);
  outC->_L14 = outC->_L1.source;
  outC->source = outC->_L14;
  outC->IfBlock1_clock = outC->source == ENUM_MsgSource_Balise_TA_Lib_internal;
  if (outC->IfBlock1_clock) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1_IfBlock1, MessageIn);
    outC->_L2_IfBlock1 = outC->_L1_IfBlock1.BG_Common_Header.nid_bg;
    LRBG1 = outC->_L2_IfBlock1;
    outC->LRBG = LRBG1;
  }
  else {
    outC->else_clock_IfBlock1 = outC->source ==
      ENUM_MsgSource_Euroradio_TA_Lib_internal;
    if (outC->else_clock_IfBlock1) {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &outC->_L22_IfBlock1,
        MessageIn);
      outC->_L11_IfBlock1 = outC->_L22_IfBlock1.Radio_Common_Header.nid_lrbg;
      LRBG3 = outC->_L11_IfBlock1;
      LRBG = LRBG3;
    }
    else {
      outC->_L13_IfBlock1 = 0;
      LRBG2 = outC->_L13_IfBlock1;
      LRBG = LRBG2;
    }
    outC->LRBG = LRBG;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Eval_LRBG_TA_Lib_internal.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

