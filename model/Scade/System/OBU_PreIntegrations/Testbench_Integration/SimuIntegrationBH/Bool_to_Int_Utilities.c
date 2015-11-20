/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Bool_to_Int_Utilities.h"

/* Utilities::Bool_to_Int */
kcg_int Bool_to_Int_Utilities(
  /* Utilities::Bool_to_Int::bool_in */ kcg_bool bool_in)
{
  /* Utilities::Bool_to_Int::errorLocal */
  static kcg_bool _2_errorLocal;
  /* Utilities::Bool_to_Int::int_out */
  static kcg_int _1_int_out;
  /* Utilities::Bool_to_Int::IfBlock1::then::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* Utilities::Bool_to_Int::IfBlock1::then::_L1 */
  static kcg_int _L1_IfBlock1;
  /* Utilities::Bool_to_Int::errorLocal */
  static kcg_bool errorLocal;
  /* Utilities::Bool_to_Int::int_out */
  static kcg_int int_out;
  /* Utilities::Bool_to_Int::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* Utilities::Bool_to_Int::IfBlock1::else::else::_L2 */
  static kcg_int _L210_IfBlock1;
  /* Utilities::Bool_to_Int::IfBlock1::else::else::_L1 */
  static kcg_bool _L19_IfBlock1;
  /* Utilities::Bool_to_Int::int_out */
  static kcg_int _3_int_out;
  /* Utilities::Bool_to_Int::errorLocal */
  static kcg_bool _4_errorLocal;
  /* Utilities::Bool_to_Int::IfBlock1::else::then::_L2 */
  static kcg_bool _L28_IfBlock1;
  /* Utilities::Bool_to_Int::IfBlock1::else::then::_L1 */
  static kcg_int _L17_IfBlock1;
  /* Utilities::Bool_to_Int::int_out */
  static kcg_int _5_int_out;
  /* Utilities::Bool_to_Int::errorLocal */
  static kcg_bool _6_errorLocal;
  static kcg_bool noname;
  /* Utilities::Bool_to_Int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* Utilities::Bool_to_Int::errorLocal */
  static kcg_bool _11_errorLocal;
  /* Utilities::Bool_to_Int::_L1 */
  static kcg_bool _L1;
  /* Utilities::Bool_to_Int::int_out */
  static kcg_int _12_int_out;
  
  IfBlock1_clock = bool_in == kcg_true;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = 1;
    _1_int_out = _L1_IfBlock1;
    _12_int_out = _1_int_out;
    _L2_IfBlock1 = kcg_false;
    _2_errorLocal = _L2_IfBlock1;
    _11_errorLocal = _2_errorLocal;
  }
  else {
    else_clock_IfBlock1 = bool_in == kcg_false;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L17_IfBlock1 = 0;
      _5_int_out = _L17_IfBlock1;
      int_out = _5_int_out;
    }
    else {
      _L210_IfBlock1 = - 1;
      _3_int_out = _L210_IfBlock1;
      int_out = _3_int_out;
    }
    _12_int_out = int_out;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L28_IfBlock1 = kcg_false;
      _6_errorLocal = _L28_IfBlock1;
      errorLocal = _6_errorLocal;
    }
    else {
      _L19_IfBlock1 = kcg_true;
      _4_errorLocal = _L19_IfBlock1;
      errorLocal = _4_errorLocal;
    }
    _11_errorLocal = errorLocal;
  }
  _L1 = _11_errorLocal;
  noname = _L1;
  return _12_int_out;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Bool_to_Int_Utilities.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

