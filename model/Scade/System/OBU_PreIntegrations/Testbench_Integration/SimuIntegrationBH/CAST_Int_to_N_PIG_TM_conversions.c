/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_N_PIG_TM_conversions.h"

/* TM_conversions::CAST_Int_to_N_PIG */
N_PIG CAST_Int_to_N_PIG_TM_conversions(
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig_int */ kcg_int n_pig_int)
{
  /* TM_conversions::CAST_Int_to_N_PIG::error */
  static kcg_bool error2;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */
  static N_PIG n_pig1;
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::then::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::then::_L2 */
  static N_PIG _L2_IfBlock1;
  /* TM_conversions::CAST_Int_to_N_PIG::error */
  static kcg_bool error;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */
  static N_PIG n_pig;
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else */
  static kcg_bool _36_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_N_PIG::error */
  static kcg_bool error10;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */
  static N_PIG n_pig9;
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::then::_L4 */
  static kcg_bool _L4_IfBlock1;
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::then::_L1 */
  static N_PIG _L138_IfBlock1;
  /* TM_conversions::CAST_Int_to_N_PIG::error */
  static kcg_bool error8;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */
  static N_PIG n_pig7;
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else */
  static kcg_bool _34_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_N_PIG::error */
  static kcg_bool error18;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */
  static N_PIG n_pig17;
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::else::then::_L3 */
  static kcg_bool _L341_IfBlock1;
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::else::then::_L1 */
  static N_PIG _L142_IfBlock1;
  /* TM_conversions::CAST_Int_to_N_PIG::error */
  static kcg_bool error16;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */
  static N_PIG n_pig15;
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::else::else */
  static kcg_bool _32_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_N_PIG::error */
  static kcg_bool error26;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */
  static N_PIG n_pig25;
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::else::else::else::then::_L3 */
  static kcg_bool _L345_IfBlock1;
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::else::else::else::then::_L1 */
  static N_PIG _L146_IfBlock1;
  /* TM_conversions::CAST_Int_to_N_PIG::error */
  static kcg_bool error24;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */
  static N_PIG n_pig23;
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::else::else::else::else::else::_L2 */
  static N_PIG _L250_IfBlock1;
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::else::else::else::else::else::_L3 */
  static kcg_bool _L349_IfBlock1;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */
  static N_PIG n_pig27;
  /* TM_conversions::CAST_Int_to_N_PIG::error */
  static kcg_bool error28;
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::else::else::else::else::then::_L1 */
  static N_PIG _L148_IfBlock1;
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L447_IfBlock1;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */
  static N_PIG n_pig29;
  /* TM_conversions::CAST_Int_to_N_PIG::error */
  static kcg_bool error30;
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _31_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */
  static N_PIG n_pig19;
  /* TM_conversions::CAST_Int_to_N_PIG::error */
  static kcg_bool error20;
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::else::else::then::_L2 */
  static N_PIG _L244_IfBlock1;
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::else::else::then::_L4 */
  static kcg_bool _L443_IfBlock1;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */
  static N_PIG n_pig21;
  /* TM_conversions::CAST_Int_to_N_PIG::error */
  static kcg_bool error22;
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::else */
  static kcg_bool _33_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */
  static N_PIG n_pig11;
  /* TM_conversions::CAST_Int_to_N_PIG::error */
  static kcg_bool error12;
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::then::_L1 */
  static N_PIG _L140_IfBlock1;
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else::else::then::_L3 */
  static kcg_bool _L339_IfBlock1;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */
  static N_PIG n_pig13;
  /* TM_conversions::CAST_Int_to_N_PIG::error */
  static kcg_bool error14;
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::else */
  static kcg_bool _35_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */
  static N_PIG n_pig3;
  /* TM_conversions::CAST_Int_to_N_PIG::error */
  static kcg_bool error4;
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::then::_L1 */
  static N_PIG _L1_IfBlock1;
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1::else::then::_L3 */
  static kcg_bool _L337_IfBlock1;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */
  static N_PIG n_pig5;
  /* TM_conversions::CAST_Int_to_N_PIG::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* TM_conversions::CAST_Int_to_N_PIG::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig_in */
  static kcg_int n_pig_in;
  /* TM_conversions::CAST_Int_to_N_PIG::error */
  static kcg_bool error51;
  /* TM_conversions::CAST_Int_to_N_PIG::_L2 */
  static kcg_int _L2;
  /* TM_conversions::CAST_Int_to_N_PIG::_L4 */
  static kcg_bool _L4;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */
  static N_PIG n_pig52;
  
  _L2 = n_pig_int;
  n_pig_in = _L2;
  IfBlock1_clock = n_pig_in == INT_N_PIG_1st_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L2_IfBlock1 = ENUM_N_PIG_1st_TM_conversions;
    n_pig1 = _L2_IfBlock1;
    n_pig52 = n_pig1;
    _L3_IfBlock1 = kcg_false;
    error2 = _L3_IfBlock1;
    error51 = error2;
  }
  else {
    _36_else_clock_IfBlock1 = n_pig_in == INT_N_PIG_2nd_TM_conversions;
    /* ck_anon_activ */ if (_36_else_clock_IfBlock1) {
      _L1_IfBlock1 = ENUM_N_PIG_2nd_TM_conversions;
      n_pig5 = _L1_IfBlock1;
      n_pig = n_pig5;
    }
    else {
      _35_else_clock_IfBlock1 = n_pig_in == INT_N_PIG_3rd_TM_conversions;
      /* ck_anon_activ */ if (_35_else_clock_IfBlock1) {
        _L138_IfBlock1 = ENUM_N_PIG_3rd_TM_conversions;
        n_pig9 = _L138_IfBlock1;
        n_pig3 = n_pig9;
      }
      else {
        _34_else_clock_IfBlock1 = n_pig_in == INT_N_PIG_4th_TM_conversions;
        /* ck_anon_activ */ if (_34_else_clock_IfBlock1) {
          _L140_IfBlock1 = ENUM_N_PIG_4th_TM_conversions;
          n_pig13 = _L140_IfBlock1;
          n_pig7 = n_pig13;
        }
        else {
          _33_else_clock_IfBlock1 = n_pig_in == INT_N_PIG_5th_TM_conversions;
          /* ck_anon_activ */ if (_33_else_clock_IfBlock1) {
            _L142_IfBlock1 = ENUM_N_PIG_5th_TM_conversions;
            n_pig17 = _L142_IfBlock1;
            n_pig11 = n_pig17;
          }
          else {
            _32_else_clock_IfBlock1 = n_pig_in == INT_N_PIG_6th_TM_conversions;
            /* ck_anon_activ */ if (_32_else_clock_IfBlock1) {
              _L244_IfBlock1 = ENUM_N_PIG_6th_TM_conversions;
              n_pig21 = _L244_IfBlock1;
              n_pig15 = n_pig21;
            }
            else {
              _31_else_clock_IfBlock1 = n_pig_in ==
                INT_N_PIG_7th_TM_conversions;
              /* ck_anon_activ */ if (_31_else_clock_IfBlock1) {
                _L146_IfBlock1 = ENUM_N_PIG_7th_TM_conversions;
                n_pig25 = _L146_IfBlock1;
                n_pig19 = n_pig25;
              }
              else {
                else_clock_IfBlock1 = n_pig_in == INT_N_PIG_8th_TM_conversions;
                /* ck_anon_activ */ if (else_clock_IfBlock1) {
                  _L148_IfBlock1 = ENUM_N_PIG_8th_TM_conversions;
                  n_pig29 = _L148_IfBlock1;
                  n_pig23 = n_pig29;
                }
                else {
                  _L250_IfBlock1 = ENUM_N_PIG_8th_TM_conversions;
                  n_pig27 = _L250_IfBlock1;
                  n_pig23 = n_pig27;
                }
                n_pig19 = n_pig23;
              }
              n_pig15 = n_pig19;
            }
            n_pig11 = n_pig15;
          }
          n_pig7 = n_pig11;
        }
        n_pig3 = n_pig7;
      }
      n_pig = n_pig3;
    }
    n_pig52 = n_pig;
    /* ck_anon_activ */ if (_36_else_clock_IfBlock1) {
      _L337_IfBlock1 = kcg_false;
      error6 = _L337_IfBlock1;
      error = error6;
    }
    else {
      /* ck_anon_activ */ if (_35_else_clock_IfBlock1) {
        _L4_IfBlock1 = kcg_false;
        error10 = _L4_IfBlock1;
        error4 = error10;
      }
      else {
        /* ck_anon_activ */ if (_34_else_clock_IfBlock1) {
          _L339_IfBlock1 = kcg_false;
          error14 = _L339_IfBlock1;
          error8 = error14;
        }
        else {
          /* ck_anon_activ */ if (_33_else_clock_IfBlock1) {
            _L341_IfBlock1 = kcg_false;
            error18 = _L341_IfBlock1;
            error12 = error18;
          }
          else {
            /* ck_anon_activ */ if (_32_else_clock_IfBlock1) {
              _L443_IfBlock1 = kcg_false;
              error22 = _L443_IfBlock1;
              error16 = error22;
            }
            else {
              /* ck_anon_activ */ if (_31_else_clock_IfBlock1) {
                _L345_IfBlock1 = kcg_false;
                error26 = _L345_IfBlock1;
                error20 = error26;
              }
              else {
                /* ck_anon_activ */ if (else_clock_IfBlock1) {
                  _L447_IfBlock1 = kcg_false;
                  error30 = _L447_IfBlock1;
                  error24 = error30;
                }
                else {
                  _L349_IfBlock1 = kcg_true;
                  error28 = _L349_IfBlock1;
                  error24 = error28;
                }
                error20 = error24;
              }
              error16 = error20;
            }
            error12 = error16;
          }
          error8 = error12;
        }
        error4 = error8;
      }
      error = error4;
    }
    error51 = error;
  }
  _L4 = error51;
  noname = _L4;
  return n_pig52;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_N_PIG_TM_conversions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

