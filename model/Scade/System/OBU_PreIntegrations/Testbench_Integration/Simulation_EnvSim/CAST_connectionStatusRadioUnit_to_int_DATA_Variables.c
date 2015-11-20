/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_connectionStatusRadioUnit_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_connectionStatusRadioUnit_to_int */
connectionStatusRadioUnit_INT_T_DATA CAST_connectionStatusRadioUnit_to_int_DATA_Variables(
  /* DATA::Variables::CAST_connectionStatusRadioUnit_to_int::connectionStatusRadioUnit_ct */connectionStatusRadioUnit_T_API_RadioCommunication_Pkg connectionStatusRadioUnit_ct)
{
  /* DATA::Variables::CAST_connectionStatusRadioUnit_to_int::IfBlock1::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* DATA::Variables::CAST_connectionStatusRadioUnit_to_int::IfBlock1::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* DATA::Variables::CAST_connectionStatusRadioUnit_to_int::IfBlock1::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* DATA::Variables::CAST_connectionStatusRadioUnit_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* DATA::Variables::CAST_connectionStatusRadioUnit_to_int::connectionStatusRadioUnit_int */
  static connectionStatusRadioUnit_INT_T_DATA connectionStatusRadioUnit_int;
  
  IfBlock1_clock = connectionStatusRadioUnit_ct ==
    ENUM_connectionStatusRadioUnit_T_conn_unknown;
  if (IfBlock1_clock) {
    connectionStatusRadioUnit_int =
      INT_connectionStatusRadioUnit_T_conn_unknown;
  }
  else {
    _2_else_clock_IfBlock1 = connectionStatusRadioUnit_ct ==
      ENUM_connectionStatusRadioUnit_T_conn_no_connection;
    if (_2_else_clock_IfBlock1) {
      connectionStatusRadioUnit_int =
        INT_connectionStatusRadioUnit_T_conn_no_connection;
    }
    else {
      _1_else_clock_IfBlock1 = connectionStatusRadioUnit_ct ==
        ENUM_connectionStatusRadioUnit_T_conn_ConnectionUp;
      if (_1_else_clock_IfBlock1) {
        connectionStatusRadioUnit_int =
          INT_connectionStatusRadioUnit_T_conn_ConnectionUp;
      }
      else {
        else_clock_IfBlock1 = connectionStatusRadioUnit_ct ==
          ENUM_connectionStatusRadioUnit_T_conn_SetupFailed;
        if (else_clock_IfBlock1) {
          connectionStatusRadioUnit_int =
            INT_connectionStatusRadioUnit_T_conn_SetupFailed;
        }
        else {
          connectionStatusRadioUnit_int =
            INT_connectionStatusRadioUnit_T_conn_unknown;
        }
      }
    }
  }
  return connectionStatusRadioUnit_int;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_connectionStatusRadioUnit_to_int_DATA_Variables.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

