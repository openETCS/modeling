/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NC_CDTRAIN_TM_conversions.h"

/* TM_conversions::CAST_Int_to_NC_CDTRAIN */
NC_CDTRAIN CAST_Int_to_NC_CDTRAIN_TM_conversions(
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::nc_cdtrain_int */ kcg_int nc_cdtrain_int)
{
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::error */
  static kcg_bool error2;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::nc_cdtrain */
  static NC_CDTRAIN _1_nc_cdtrain;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::then::_L5 */
  static kcg_bool _L5_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::then::_L4 */
  static NC_CDTRAIN _L4_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::error */
  static kcg_bool error;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::nc_cdtrain */
  static NC_CDTRAIN nc_cdtrain;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::else */
  static kcg_bool _51_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::error */
  static kcg_bool error10;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::nc_cdtrain */
  static NC_CDTRAIN _9_nc_cdtrain;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::else::else::then::_L4 */
  static kcg_bool _L453_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::else::else::then::_L2 */
  static NC_CDTRAIN _L2_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::error */
  static kcg_bool error8;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::nc_cdtrain */
  static NC_CDTRAIN _7_nc_cdtrain;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::else::else::else */
  static kcg_bool _49_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::error */
  static kcg_bool error18;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::nc_cdtrain */
  static NC_CDTRAIN _17_nc_cdtrain;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::else::else::else::else::then::_L4 */
  static kcg_bool _L456_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::else::else::else::else::then::_L2 */
  static NC_CDTRAIN _L257_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::error */
  static kcg_bool error16;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::nc_cdtrain */
  static NC_CDTRAIN _15_nc_cdtrain;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::else::else::else::else::else */
  static kcg_bool _47_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::error */
  static kcg_bool error26;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::nc_cdtrain */
  static NC_CDTRAIN _25_nc_cdtrain;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L460_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::else::else::else::else::else::else::then::_L2 */
  static NC_CDTRAIN _L261_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::error */
  static kcg_bool error24;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::nc_cdtrain */
  static NC_CDTRAIN _23_nc_cdtrain;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _45_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::error */
  static kcg_bool error34;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::nc_cdtrain */
  static NC_CDTRAIN _33_nc_cdtrain;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::else::else::else::else::else::else::else::else::then::_L5 */
  static kcg_bool _L564_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::else::else::else::else::else::else::else::else::then::_L3 */
  static NC_CDTRAIN _L365_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::error */
  static kcg_bool error32;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::nc_cdtrain */
  static NC_CDTRAIN _31_nc_cdtrain;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool _43_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::error */
  static kcg_bool error42;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::nc_cdtrain */
  static NC_CDTRAIN _41_nc_cdtrain;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static kcg_bool _L1_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L2 */
  static NC_CDTRAIN _L268_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::error */
  static kcg_bool error40;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::nc_cdtrain */
  static NC_CDTRAIN _39_nc_cdtrain;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::_L1 */
  static kcg_bool _L169_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::_L2 */
  static NC_CDTRAIN _L270_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::nc_cdtrain */
  static NC_CDTRAIN _35_nc_cdtrain;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::error */
  static kcg_bool error36;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L2 */
  static NC_CDTRAIN _L267_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L466_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::nc_cdtrain */
  static NC_CDTRAIN _37_nc_cdtrain;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::error */
  static kcg_bool error38;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _44_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::nc_cdtrain */
  static NC_CDTRAIN _27_nc_cdtrain;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::error */
  static kcg_bool error28;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::else::else::else::else::else::else::else::then::_L2 */
  static NC_CDTRAIN _L263_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L462_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::nc_cdtrain */
  static NC_CDTRAIN _29_nc_cdtrain;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::error */
  static kcg_bool error30;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _46_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::nc_cdtrain */
  static NC_CDTRAIN _19_nc_cdtrain;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::error */
  static kcg_bool error20;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::else::else::else::else::else::then::_L2 */
  static NC_CDTRAIN _L259_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::else::else::else::else::else::then::_L4 */
  static kcg_bool _L458_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::nc_cdtrain */
  static NC_CDTRAIN _21_nc_cdtrain;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::error */
  static kcg_bool error22;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::else::else::else::else */
  static kcg_bool _48_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::nc_cdtrain */
  static NC_CDTRAIN _11_nc_cdtrain;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::error */
  static kcg_bool error12;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::else::else::else::then::_L2 */
  static NC_CDTRAIN _L255_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::else::else::else::then::_L4 */
  static kcg_bool _L454_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::nc_cdtrain */
  static NC_CDTRAIN _13_nc_cdtrain;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::error */
  static kcg_bool error14;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::else::else */
  static kcg_bool _50_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::nc_cdtrain */
  static NC_CDTRAIN _3_nc_cdtrain;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::error */
  static kcg_bool error4;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::else::then::_L3 */
  static NC_CDTRAIN _L3_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1::else::then::_L5 */
  static kcg_bool _L552_IfBlock1;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::nc_cdtrain */
  static NC_CDTRAIN _5_nc_cdtrain;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::nc_cdtrain_in */
  static kcg_int nc_cdtrain_in;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::error */
  static kcg_bool error71;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::_L4 */
  static kcg_int _L4;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::_L5 */
  static kcg_bool _L5;
  /* TM_conversions::CAST_Int_to_NC_CDTRAIN::nc_cdtrain */
  static NC_CDTRAIN _72_nc_cdtrain;
  
  _L4 = nc_cdtrain_int;
  nc_cdtrain_in = _L4;
  IfBlock1_clock = nc_cdtrain_in == INT_NC_CDTRAIN_080mm_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L4_IfBlock1 = ENUM_NC_CDTRAIN_080mm_TM_conversions;
    _1_nc_cdtrain = _L4_IfBlock1;
    _72_nc_cdtrain = _1_nc_cdtrain;
    _L5_IfBlock1 = kcg_false;
    error2 = _L5_IfBlock1;
    error71 = error2;
  }
  else {
    _51_else_clock_IfBlock1 = nc_cdtrain_in ==
      INT_NC_CDTRAIN_100mm_TM_conversions;
    /* ck_anon_activ */ if (_51_else_clock_IfBlock1) {
      _L3_IfBlock1 = ENUM_NC_CDTRAIN_100mm_TM_conversions;
      _5_nc_cdtrain = _L3_IfBlock1;
      nc_cdtrain = _5_nc_cdtrain;
    }
    else {
      _50_else_clock_IfBlock1 = nc_cdtrain_in ==
        INT_NC_CDTRAIN_130mm_TM_conversions;
      /* ck_anon_activ */ if (_50_else_clock_IfBlock1) {
        _L2_IfBlock1 = ENUM_NC_CDTRAIN_130mm_TM_conversions;
        _9_nc_cdtrain = _L2_IfBlock1;
        _3_nc_cdtrain = _9_nc_cdtrain;
      }
      else {
        _49_else_clock_IfBlock1 = nc_cdtrain_in ==
          INT_NC_CDTRAIN_150mm_TM_conversions;
        /* ck_anon_activ */ if (_49_else_clock_IfBlock1) {
          _L255_IfBlock1 = ENUM_NC_CDTRAIN_150mm_TM_conversions;
          _13_nc_cdtrain = _L255_IfBlock1;
          _7_nc_cdtrain = _13_nc_cdtrain;
        }
        else {
          _48_else_clock_IfBlock1 = nc_cdtrain_in ==
            INT_NC_CDTRAIN_165mm_TM_conversions;
          /* ck_anon_activ */ if (_48_else_clock_IfBlock1) {
            _L257_IfBlock1 = ENUM_NC_CDTRAIN_165mm_TM_conversions;
            _17_nc_cdtrain = _L257_IfBlock1;
            _11_nc_cdtrain = _17_nc_cdtrain;
          }
          else {
            _47_else_clock_IfBlock1 = nc_cdtrain_in ==
              INT_NC_CDTRAIN_180mm_TM_conversions;
            /* ck_anon_activ */ if (_47_else_clock_IfBlock1) {
              _L259_IfBlock1 = ENUM_NC_CDTRAIN_180mm_TM_conversions;
              _21_nc_cdtrain = _L259_IfBlock1;
              _15_nc_cdtrain = _21_nc_cdtrain;
            }
            else {
              _46_else_clock_IfBlock1 = nc_cdtrain_in ==
                INT_NC_CDTRAIN_210mm_TM_conversions;
              /* ck_anon_activ */ if (_46_else_clock_IfBlock1) {
                _L261_IfBlock1 = ENUM_NC_CDTRAIN_210mm_TM_conversions;
                _25_nc_cdtrain = _L261_IfBlock1;
                _19_nc_cdtrain = _25_nc_cdtrain;
              }
              else {
                _45_else_clock_IfBlock1 = nc_cdtrain_in ==
                  INT_NC_CDTRAIN_225mm_TM_conversions;
                /* ck_anon_activ */ if (_45_else_clock_IfBlock1) {
                  _L263_IfBlock1 = ENUM_NC_CDTRAIN_225mm_TM_conversions;
                  _29_nc_cdtrain = _L263_IfBlock1;
                  _23_nc_cdtrain = _29_nc_cdtrain;
                }
                else {
                  _44_else_clock_IfBlock1 = nc_cdtrain_in ==
                    INT_NC_CDTRAIN_245mm_TM_conversions;
                  /* ck_anon_activ */ if (_44_else_clock_IfBlock1) {
                    _L365_IfBlock1 = ENUM_NC_CDTRAIN_245mm_TM_conversions;
                    _33_nc_cdtrain = _L365_IfBlock1;
                    _27_nc_cdtrain = _33_nc_cdtrain;
                  }
                  else {
                    _43_else_clock_IfBlock1 = nc_cdtrain_in ==
                      INT_NC_CDTRAIN_275mm_TM_conversions;
                    /* ck_anon_activ */ if (_43_else_clock_IfBlock1) {
                      _L267_IfBlock1 = ENUM_NC_CDTRAIN_275mm_TM_conversions;
                      _37_nc_cdtrain = _L267_IfBlock1;
                      _31_nc_cdtrain = _37_nc_cdtrain;
                    }
                    else {
                      else_clock_IfBlock1 = nc_cdtrain_in ==
                        INT_NC_CDTRAIN_300mm_TM_conversions;
                      /* ck_anon_activ */ if (else_clock_IfBlock1) {
                        _L268_IfBlock1 = ENUM_NC_CDTRAIN_300mm_TM_conversions;
                        _41_nc_cdtrain = _L268_IfBlock1;
                        _35_nc_cdtrain = _41_nc_cdtrain;
                      }
                      else {
                        _L270_IfBlock1 = ENUM_NC_CDTRAIN_300mm_TM_conversions;
                        _39_nc_cdtrain = _L270_IfBlock1;
                        _35_nc_cdtrain = _39_nc_cdtrain;
                      }
                      _31_nc_cdtrain = _35_nc_cdtrain;
                    }
                    _27_nc_cdtrain = _31_nc_cdtrain;
                  }
                  _23_nc_cdtrain = _27_nc_cdtrain;
                }
                _19_nc_cdtrain = _23_nc_cdtrain;
              }
              _15_nc_cdtrain = _19_nc_cdtrain;
            }
            _11_nc_cdtrain = _15_nc_cdtrain;
          }
          _7_nc_cdtrain = _11_nc_cdtrain;
        }
        _3_nc_cdtrain = _7_nc_cdtrain;
      }
      nc_cdtrain = _3_nc_cdtrain;
    }
    _72_nc_cdtrain = nc_cdtrain;
    /* ck_anon_activ */ if (_51_else_clock_IfBlock1) {
      _L552_IfBlock1 = kcg_false;
      error6 = _L552_IfBlock1;
      error = error6;
    }
    else {
      /* ck_anon_activ */ if (_50_else_clock_IfBlock1) {
        _L453_IfBlock1 = kcg_false;
        error10 = _L453_IfBlock1;
        error4 = error10;
      }
      else {
        /* ck_anon_activ */ if (_49_else_clock_IfBlock1) {
          _L454_IfBlock1 = kcg_false;
          error14 = _L454_IfBlock1;
          error8 = error14;
        }
        else {
          /* ck_anon_activ */ if (_48_else_clock_IfBlock1) {
            _L456_IfBlock1 = kcg_false;
            error18 = _L456_IfBlock1;
            error12 = error18;
          }
          else {
            /* ck_anon_activ */ if (_47_else_clock_IfBlock1) {
              _L458_IfBlock1 = kcg_false;
              error22 = _L458_IfBlock1;
              error16 = error22;
            }
            else {
              /* ck_anon_activ */ if (_46_else_clock_IfBlock1) {
                _L460_IfBlock1 = kcg_false;
                error26 = _L460_IfBlock1;
                error20 = error26;
              }
              else {
                /* ck_anon_activ */ if (_45_else_clock_IfBlock1) {
                  _L462_IfBlock1 = kcg_false;
                  error30 = _L462_IfBlock1;
                  error24 = error30;
                }
                else {
                  /* ck_anon_activ */ if (_44_else_clock_IfBlock1) {
                    _L564_IfBlock1 = kcg_false;
                    error34 = _L564_IfBlock1;
                    error28 = error34;
                  }
                  else {
                    /* ck_anon_activ */ if (_43_else_clock_IfBlock1) {
                      _L466_IfBlock1 = kcg_false;
                      error38 = _L466_IfBlock1;
                      error32 = error38;
                    }
                    else {
                      /* ck_anon_activ */ if (else_clock_IfBlock1) {
                        _L1_IfBlock1 = kcg_false;
                        error42 = _L1_IfBlock1;
                        error36 = error42;
                      }
                      else {
                        _L169_IfBlock1 = kcg_true;
                        error40 = _L169_IfBlock1;
                        error36 = error40;
                      }
                      error32 = error36;
                    }
                    error28 = error32;
                  }
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
    error71 = error;
  }
  _L5 = error71;
  noname = _L5;
  return _72_nc_cdtrain;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_NC_CDTRAIN_TM_conversions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

