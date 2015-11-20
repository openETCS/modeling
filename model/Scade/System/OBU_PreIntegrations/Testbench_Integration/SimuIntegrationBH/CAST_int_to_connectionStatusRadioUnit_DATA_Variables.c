/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_connectionStatusRadioUnit_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_connectionStatusRadioUnit */
connectionStatusRadioUnit_T_API_RadioCommunication_Pkg CAST_int_to_connectionStatusRadioUnit_DATA_Variables(
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::connectionStatusRadioUnit_int */ connectionStatusRadioUnit_INT_T_DATA connectionStatusRadioUnit_int)
{
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::error */
  static kcg_bool error2;
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::connectionStatusRadioUnit_ct */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _1_connectionStatusRadioUnit_ct;
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::IfBlock1::then::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::IfBlock1::then::_L1 */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _L1_IfBlock1;
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::error */
  static kcg_bool error;
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::connectionStatusRadioUnit_ct */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg connectionStatusRadioUnit_ct;
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::IfBlock1::else */
  static kcg_bool _16_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::error */
  static kcg_bool error10;
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::connectionStatusRadioUnit_ct */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _9_connectionStatusRadioUnit_ct;
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::IfBlock1::else::else::then::_L2 */
  static kcg_bool _L218_IfBlock1;
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::IfBlock1::else::else::then::_L1 */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _L119_IfBlock1;
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::error */
  static kcg_bool error8;
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::connectionStatusRadioUnit_ct */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _7_connectionStatusRadioUnit_ct;
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::IfBlock1::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::IfBlock1::else::else::else::else::_L1 */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _L123_IfBlock1;
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::IfBlock1::else::else::else::else::_L2 */
  static kcg_bool _L222_IfBlock1;
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::connectionStatusRadioUnit_ct */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _11_connectionStatusRadioUnit_ct;
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::error */
  static kcg_bool error12;
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::IfBlock1::else::else::else::then::_L1 */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _L121_IfBlock1;
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::IfBlock1::else::else::else::then::_L2 */
  static kcg_bool _L220_IfBlock1;
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::connectionStatusRadioUnit_ct */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _13_connectionStatusRadioUnit_ct;
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::error */
  static kcg_bool error14;
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::IfBlock1::else::else */
  static kcg_bool _15_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::connectionStatusRadioUnit_ct */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _3_connectionStatusRadioUnit_ct;
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::error */
  static kcg_bool error4;
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::IfBlock1::else::then::_L1 */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _L117_IfBlock1;
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::IfBlock1::else::then::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::connectionStatusRadioUnit_ct */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _5_connectionStatusRadioUnit_ct;
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::error */
  static kcg_bool error24;
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::_L1 */
  static kcg_bool _L1;
  /* DATA::Variables::CAST_int_to_connectionStatusRadioUnit::connectionStatusRadioUnit_ct */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _25_connectionStatusRadioUnit_ct;
  
  IfBlock1_clock = connectionStatusRadioUnit_int ==
    INT_connectionStatusRadioUnit_T_conn_unknown;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L3_IfBlock1 = kcg_false;
    error2 = _L3_IfBlock1;
    error24 = error2;
  }
  else {
    _16_else_clock_IfBlock1 = connectionStatusRadioUnit_int ==
      INT_connectionStatusRadioUnit_T_conn_no_connection;
    /* ck_anon_activ */ if (_16_else_clock_IfBlock1) {
      _L2_IfBlock1 = kcg_false;
      error6 = _L2_IfBlock1;
      error = error6;
    }
    else {
      _15_else_clock_IfBlock1 = connectionStatusRadioUnit_int ==
        INT_connectionStatusRadioUnit_T_conn_ConnectionUp;
      /* ck_anon_activ */ if (_15_else_clock_IfBlock1) {
        _L218_IfBlock1 = kcg_false;
        error10 = _L218_IfBlock1;
        error4 = error10;
      }
      else {
        else_clock_IfBlock1 = connectionStatusRadioUnit_int ==
          INT_connectionStatusRadioUnit_T_conn_SetupFailed;
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          _L220_IfBlock1 = kcg_false;
          error14 = _L220_IfBlock1;
          error8 = error14;
        }
        else {
          _L222_IfBlock1 = kcg_true;
          error12 = _L222_IfBlock1;
          error8 = error12;
        }
        error4 = error8;
      }
      error = error4;
    }
    error24 = error;
  }
  _L1 = error24;
  noname = _L1;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = ENUM_connectionStatusRadioUnit_T_conn_unknown;
    _1_connectionStatusRadioUnit_ct = _L1_IfBlock1;
    _25_connectionStatusRadioUnit_ct = _1_connectionStatusRadioUnit_ct;
  }
  else {
    /* ck_anon_activ */ if (_16_else_clock_IfBlock1) {
      _L117_IfBlock1 = ENUM_connectionStatusRadioUnit_T_conn_no_connection;
      _5_connectionStatusRadioUnit_ct = _L117_IfBlock1;
      connectionStatusRadioUnit_ct = _5_connectionStatusRadioUnit_ct;
    }
    else {
      /* ck_anon_activ */ if (_15_else_clock_IfBlock1) {
        _L119_IfBlock1 = ENUM_connectionStatusRadioUnit_T_conn_ConnectionUp;
        _9_connectionStatusRadioUnit_ct = _L119_IfBlock1;
        _3_connectionStatusRadioUnit_ct = _9_connectionStatusRadioUnit_ct;
      }
      else {
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          _L121_IfBlock1 = ENUM_connectionStatusRadioUnit_T_conn_SetupFailed;
          _13_connectionStatusRadioUnit_ct = _L121_IfBlock1;
          _7_connectionStatusRadioUnit_ct = _13_connectionStatusRadioUnit_ct;
        }
        else {
          _L123_IfBlock1 = ENUM_connectionStatusRadioUnit_T_conn_unknown;
          _11_connectionStatusRadioUnit_ct = _L123_IfBlock1;
          _7_connectionStatusRadioUnit_ct = _11_connectionStatusRadioUnit_ct;
        }
        _3_connectionStatusRadioUnit_ct = _7_connectionStatusRadioUnit_ct;
      }
      connectionStatusRadioUnit_ct = _3_connectionStatusRadioUnit_ct;
    }
    _25_connectionStatusRadioUnit_ct = connectionStatusRadioUnit_ct;
  }
  return _25_connectionStatusRadioUnit_ct;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_connectionStatusRadioUnit_DATA_Variables.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

