/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Int_to_Bool_Utilities.h"

/* Utilities::Int_to_Bool */
kcg_bool Int_to_Bool_Utilities(
  /* Utilities::Int_to_Bool::int_in */ kcg_int int_in)
{
  /* Utilities::Int_to_Bool::err */
  static kcg_bool err2;
  /* Utilities::Int_to_Bool::bool_out */
  static kcg_bool _1_bool_out;
  /* Utilities::Int_to_Bool::IfBlock1::then::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* Utilities::Int_to_Bool::IfBlock1::then::_L1 */
  static kcg_bool _L1_IfBlock1;
  /* Utilities::Int_to_Bool::err */
  static kcg_bool err;
  /* Utilities::Int_to_Bool::bool_out */
  static kcg_bool bool_out;
  /* Utilities::Int_to_Bool::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* Utilities::Int_to_Bool::IfBlock1::else::else::_L2 */
  static kcg_bool _L210_IfBlock1;
  /* Utilities::Int_to_Bool::IfBlock1::else::else::_L1 */
  static kcg_bool _L19_IfBlock1;
  /* Utilities::Int_to_Bool::bool_out */
  static kcg_bool _3_bool_out;
  /* Utilities::Int_to_Bool::err */
  static kcg_bool err4;
  /* Utilities::Int_to_Bool::IfBlock1::else::then::_L2 */
  static kcg_bool _L28_IfBlock1;
  /* Utilities::Int_to_Bool::IfBlock1::else::then::_L1 */
  static kcg_bool _L17_IfBlock1;
  /* Utilities::Int_to_Bool::bool_out */
  static kcg_bool _5_bool_out;
  /* Utilities::Int_to_Bool::err */
  static kcg_bool err6;
  static kcg_bool noname;
  /* Utilities::Int_to_Bool::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* Utilities::Int_to_Bool::err */
  static kcg_bool err11;
  /* Utilities::Int_to_Bool::_L1 */
  static kcg_bool _L1;
  /* Utilities::Int_to_Bool::bool_out */
  static kcg_bool _12_bool_out;
  
  IfBlock1_clock = int_in == 0;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = kcg_false;
    _1_bool_out = _L1_IfBlock1;
    _12_bool_out = _1_bool_out;
    _L2_IfBlock1 = kcg_false;
    err2 = _L2_IfBlock1;
    err11 = err2;
  }
  else {
    else_clock_IfBlock1 = int_in == 1;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L17_IfBlock1 = kcg_true;
      _5_bool_out = _L17_IfBlock1;
      bool_out = _5_bool_out;
    }
    else {
      _L210_IfBlock1 = kcg_false;
      _3_bool_out = _L210_IfBlock1;
      bool_out = _3_bool_out;
    }
    _12_bool_out = bool_out;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L28_IfBlock1 = kcg_false;
      err6 = _L28_IfBlock1;
      err = err6;
    }
    else {
      _L19_IfBlock1 = kcg_true;
      err4 = _L19_IfBlock1;
      err = err4;
    }
    err11 = err;
  }
  _L1 = err11;
  noname = _L1;
  return _12_bool_out;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Int_to_Bool_Utilities.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

