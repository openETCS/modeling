/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_Cabin_identifier_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_Cabin_identifier_to_int */
kcg_int CAST_DMI_Cabin_identifier_to_int_DATA_Variables(
  /* DATA::Variables::CAST_DMI_Cabin_identifier_to_int::dmi_cabin_identifier_ct */ DMI_Cabin_Identifier_T_DMI_Types_Pkg dmi_cabin_identifier_ct)
{
  /* DATA::Variables::CAST_DMI_Cabin_identifier_to_int::error */
  static kcg_bool error2;
  /* DATA::Variables::CAST_DMI_Cabin_identifier_to_int::dmi_cabin_identifier_int */
  static kcg_int _1_dmi_cabin_identifier_int;
  /* DATA::Variables::CAST_DMI_Cabin_identifier_to_int::IfBlock1::then::_L6 */
  static kcg_int _L6_IfBlock1;
  /* DATA::Variables::CAST_DMI_Cabin_identifier_to_int::IfBlock1::then::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* DATA::Variables::CAST_DMI_Cabin_identifier_to_int::error */
  static kcg_bool error;
  /* DATA::Variables::CAST_DMI_Cabin_identifier_to_int::dmi_cabin_identifier_int */
  static kcg_int dmi_cabin_identifier_int;
  /* DATA::Variables::CAST_DMI_Cabin_identifier_to_int::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* DATA::Variables::CAST_DMI_Cabin_identifier_to_int::IfBlock1::else::else::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* DATA::Variables::CAST_DMI_Cabin_identifier_to_int::IfBlock1::else::else::_L5 */
  static kcg_int _L5_IfBlock1;
  /* DATA::Variables::CAST_DMI_Cabin_identifier_to_int::dmi_cabin_identifier_int */
  static kcg_int _3_dmi_cabin_identifier_int;
  /* DATA::Variables::CAST_DMI_Cabin_identifier_to_int::error */
  static kcg_bool error4;
  /* DATA::Variables::CAST_DMI_Cabin_identifier_to_int::IfBlock1::else::then::_L1 */
  static kcg_bool _L1_IfBlock1;
  /* DATA::Variables::CAST_DMI_Cabin_identifier_to_int::IfBlock1::else::then::_L6 */
  static kcg_int _L67_IfBlock1;
  /* DATA::Variables::CAST_DMI_Cabin_identifier_to_int::dmi_cabin_identifier_int */
  static kcg_int _5_dmi_cabin_identifier_int;
  /* DATA::Variables::CAST_DMI_Cabin_identifier_to_int::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* DATA::Variables::CAST_DMI_Cabin_identifier_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* DATA::Variables::CAST_DMI_Cabin_identifier_to_int::error */
  static kcg_bool error8;
  /* DATA::Variables::CAST_DMI_Cabin_identifier_to_int::_L22 */
  static kcg_bool _L22;
  /* DATA::Variables::CAST_DMI_Cabin_identifier_to_int::dmi_cabin_identifier_int */
  static kcg_int _9_dmi_cabin_identifier_int;
  
  IfBlock1_clock = dmi_cabin_identifier_ct ==
    ENUM_DMI_Cabin_Identifier_T_cabin_A;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L6_IfBlock1 = INT_DMI_Cabin_Identifier_T_cabin_A;
    _1_dmi_cabin_identifier_int = _L6_IfBlock1;
    _9_dmi_cabin_identifier_int = _1_dmi_cabin_identifier_int;
    _L3_IfBlock1 = kcg_false;
    error2 = _L3_IfBlock1;
    error8 = error2;
  }
  else {
    else_clock_IfBlock1 = dmi_cabin_identifier_ct ==
      ENUM_DMI_Cabin_Identifier_T_cabin_B;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L67_IfBlock1 = INT_DMI_Cabin_Identifier_T_cabin_B;
      _5_dmi_cabin_identifier_int = _L67_IfBlock1;
      dmi_cabin_identifier_int = _5_dmi_cabin_identifier_int;
    }
    else {
      _L5_IfBlock1 = INT_DMI_Cabin_Identifier_T_cabin_A;
      _3_dmi_cabin_identifier_int = _L5_IfBlock1;
      dmi_cabin_identifier_int = _3_dmi_cabin_identifier_int;
    }
    _9_dmi_cabin_identifier_int = dmi_cabin_identifier_int;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L1_IfBlock1 = kcg_false;
      error6 = _L1_IfBlock1;
      error = error6;
    }
    else {
      _L2_IfBlock1 = kcg_true;
      error4 = _L2_IfBlock1;
      error = error4;
    }
    error8 = error;
  }
  _L22 = error8;
  noname = _L22;
  return _9_dmi_cabin_identifier_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_Cabin_identifier_to_int_DATA_Variables.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

