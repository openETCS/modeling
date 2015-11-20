/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_DMI_identifier_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_DMI_identifier */
DMI_DMI_Identifier_T_DMI_Types_Pkg CAST_int_to_DMI_DMI_identifier_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_DMI_identifier::dmi_dmi_identifier_int */ kcg_int dmi_dmi_identifier_int)
{
  /* DATA::Variables::CAST_int_to_DMI_DMI_identifier::error */
  static kcg_bool error2;
  /* DATA::Variables::CAST_int_to_DMI_DMI_identifier::dmi_dmi_identifier_ct */
  static DMI_DMI_Identifier_T_DMI_Types_Pkg _1_dmi_dmi_identifier_ct;
  /* DATA::Variables::CAST_int_to_DMI_DMI_identifier::IfBlock1::then::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_DMI_identifier::IfBlock1::then::_L1 */
  static DMI_DMI_Identifier_T_DMI_Types_Pkg _L1_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_DMI_identifier::error */
  static kcg_bool error;
  /* DATA::Variables::CAST_int_to_DMI_DMI_identifier::dmi_dmi_identifier_ct */
  static DMI_DMI_Identifier_T_DMI_Types_Pkg dmi_dmi_identifier_ct;
  /* DATA::Variables::CAST_int_to_DMI_DMI_identifier::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_DMI_identifier::IfBlock1::else::else::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_DMI_identifier::IfBlock1::else::else::_L1 */
  static DMI_DMI_Identifier_T_DMI_Types_Pkg _L19_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_DMI_identifier::dmi_dmi_identifier_ct */
  static DMI_DMI_Identifier_T_DMI_Types_Pkg _3_dmi_dmi_identifier_ct;
  /* DATA::Variables::CAST_int_to_DMI_DMI_identifier::error */
  static kcg_bool error4;
  /* DATA::Variables::CAST_int_to_DMI_DMI_identifier::IfBlock1::else::then::_L1 */
  static kcg_bool _L18_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_DMI_identifier::IfBlock1::else::then::_L3 */
  static DMI_DMI_Identifier_T_DMI_Types_Pkg _L37_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_DMI_identifier::dmi_dmi_identifier_ct */
  static DMI_DMI_Identifier_T_DMI_Types_Pkg _5_dmi_dmi_identifier_ct;
  /* DATA::Variables::CAST_int_to_DMI_DMI_identifier::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* DATA::Variables::CAST_int_to_DMI_DMI_identifier::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* DATA::Variables::CAST_int_to_DMI_DMI_identifier::error */
  static kcg_bool error10;
  /* DATA::Variables::CAST_int_to_DMI_DMI_identifier::_L22 */
  static kcg_bool _L22;
  /* DATA::Variables::CAST_int_to_DMI_DMI_identifier::dmi_dmi_identifier_ct */
  static DMI_DMI_Identifier_T_DMI_Types_Pkg _11_dmi_dmi_identifier_ct;
  
  IfBlock1_clock = dmi_dmi_identifier_int == INT_DMI_DMI_Identifier_T_DMI_1;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = ENUM_DMI_DMI_Identifier_T_DMI_1;
    _1_dmi_dmi_identifier_ct = _L1_IfBlock1;
    _11_dmi_dmi_identifier_ct = _1_dmi_dmi_identifier_ct;
    _L3_IfBlock1 = kcg_false;
    error2 = _L3_IfBlock1;
    error10 = error2;
  }
  else {
    else_clock_IfBlock1 = dmi_dmi_identifier_int ==
      INT_DMI_DMI_Identifier_T_DMI_2;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L37_IfBlock1 = ENUM_DMI_DMI_Identifier_T_DMI_2;
      _5_dmi_dmi_identifier_ct = _L37_IfBlock1;
      dmi_dmi_identifier_ct = _5_dmi_dmi_identifier_ct;
    }
    else {
      _L19_IfBlock1 = ENUM_DMI_DMI_Identifier_T_DMI_1;
      _3_dmi_dmi_identifier_ct = _L19_IfBlock1;
      dmi_dmi_identifier_ct = _3_dmi_dmi_identifier_ct;
    }
    _11_dmi_dmi_identifier_ct = dmi_dmi_identifier_ct;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L18_IfBlock1 = kcg_false;
      error6 = _L18_IfBlock1;
      error = error6;
    }
    else {
      _L2_IfBlock1 = kcg_true;
      error4 = _L2_IfBlock1;
      error = error4;
    }
    error10 = error;
  }
  _L22 = error10;
  noname = _L22;
  return _11_dmi_dmi_identifier_ct;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_DMI_identifier_DATA_Variables.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

