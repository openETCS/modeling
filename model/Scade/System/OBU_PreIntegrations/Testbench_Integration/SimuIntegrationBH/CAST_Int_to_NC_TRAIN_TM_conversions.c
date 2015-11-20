/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NC_TRAIN_TM_conversions.h"

/* TM_conversions::CAST_Int_to_NC_TRAIN */
NC_TRAIN CAST_Int_to_NC_TRAIN_TM_conversions(
  /* TM_conversions::CAST_Int_to_NC_TRAIN::nc_train_int */ kcg_int nc_train_int)
{
  /* TM_conversions::CAST_Int_to_NC_TRAIN::error */
  static kcg_bool error2;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::nc_train */
  static NC_TRAIN _1_nc_train;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::IfBlock1::then::_L5 */
  static kcg_bool _L5_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::IfBlock1::then::_L4 */
  static NC_TRAIN _L4_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::error */
  static kcg_bool error;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::nc_train */
  static NC_TRAIN nc_train;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::IfBlock1::else */
  static kcg_bool _16_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::error */
  static kcg_bool error10;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::nc_train */
  static NC_TRAIN _9_nc_train;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::IfBlock1::else::else::then::_L4 */
  static kcg_bool _L418_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::IfBlock1::else::else::then::_L2 */
  static NC_TRAIN _L2_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::error */
  static kcg_bool error8;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::nc_train */
  static NC_TRAIN _7_nc_train;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::IfBlock1::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::IfBlock1::else::else::else::else::_L2 */
  static NC_TRAIN _L221_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::IfBlock1::else::else::else::else::_L1 */
  static kcg_bool _L1_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::nc_train */
  static NC_TRAIN _11_nc_train;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::error */
  static kcg_bool error12;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::IfBlock1::else::else::else::then::_L2 */
  static NC_TRAIN _L220_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::IfBlock1::else::else::else::then::_L4 */
  static kcg_bool _L419_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::nc_train */
  static NC_TRAIN _13_nc_train;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::error */
  static kcg_bool error14;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::IfBlock1::else::else */
  static kcg_bool _15_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::nc_train */
  static NC_TRAIN _3_nc_train;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::error */
  static kcg_bool error4;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::IfBlock1::else::then::_L3 */
  static NC_TRAIN _L3_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::IfBlock1::else::then::_L5 */
  static kcg_bool _L517_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::nc_train */
  static NC_TRAIN _5_nc_train;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::nc_train_in */
  static kcg_int nc_train_in;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::error */
  static kcg_bool error22;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::_L4 */
  static kcg_int _L4;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::_L5 */
  static kcg_bool _L5;
  /* TM_conversions::CAST_Int_to_NC_TRAIN::nc_train */
  static NC_TRAIN _23_nc_train;
  
  _L4 = nc_train_int;
  nc_train_in = _L4;
  IfBlock1_clock = nc_train_in == INT_NC_TRAIN_no_train_categroy_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L4_IfBlock1 = ENUM_NC_TRAIN_no_train_categroy_TM_conversions;
    _1_nc_train = _L4_IfBlock1;
    _23_nc_train = _1_nc_train;
    _L5_IfBlock1 = kcg_false;
    error2 = _L5_IfBlock1;
    error22 = error2;
  }
  else {
    _16_else_clock_IfBlock1 = nc_train_in ==
      INT_NC_TRAIN_freight_P_TM_conversions;
    /* ck_anon_activ */ if (_16_else_clock_IfBlock1) {
      _L3_IfBlock1 = ENUM_NC_TRAIN_freight_P_TM_conversions;
      _5_nc_train = _L3_IfBlock1;
      nc_train = _5_nc_train;
    }
    else {
      _15_else_clock_IfBlock1 = nc_train_in ==
        INT_NC_TRAIN_freight_G_TM_conversions;
      /* ck_anon_activ */ if (_15_else_clock_IfBlock1) {
        _L2_IfBlock1 = ENUM_NC_TRAIN_freight_G_TM_conversions;
        _9_nc_train = _L2_IfBlock1;
        _3_nc_train = _9_nc_train;
      }
      else {
        else_clock_IfBlock1 = nc_train_in ==
          INT_NC_TRAIN_passenger_TM_conversions;
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          _L220_IfBlock1 = ENUM_NC_TRAIN_passenger_TM_conversions;
          _13_nc_train = _L220_IfBlock1;
          _7_nc_train = _13_nc_train;
        }
        else {
          _L221_IfBlock1 = ENUM_NC_TRAIN_no_train_categroy_TM_conversions;
          _11_nc_train = _L221_IfBlock1;
          _7_nc_train = _11_nc_train;
        }
        _3_nc_train = _7_nc_train;
      }
      nc_train = _3_nc_train;
    }
    _23_nc_train = nc_train;
    /* ck_anon_activ */ if (_16_else_clock_IfBlock1) {
      _L517_IfBlock1 = kcg_false;
      error6 = _L517_IfBlock1;
      error = error6;
    }
    else {
      /* ck_anon_activ */ if (_15_else_clock_IfBlock1) {
        _L418_IfBlock1 = kcg_false;
        error10 = _L418_IfBlock1;
        error4 = error10;
      }
      else {
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          _L419_IfBlock1 = kcg_false;
          error14 = _L419_IfBlock1;
          error8 = error14;
        }
        else {
          _L1_IfBlock1 = kcg_true;
          error12 = _L1_IfBlock1;
          error8 = error12;
        }
        error4 = error8;
      }
      error = error4;
    }
    error22 = error;
  }
  _L5 = error22;
  noname = _L5;
  return _23_nc_train;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_NC_TRAIN_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

