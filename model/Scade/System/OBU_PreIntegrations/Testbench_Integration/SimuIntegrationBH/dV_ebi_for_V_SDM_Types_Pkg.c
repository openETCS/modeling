/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "dV_ebi_for_V_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::dV_ebi_for_V */
V_internal_real_Type_SDM_Types_Pkg dV_ebi_for_V_SDM_Types_Pkg(
  /* SDM_Types_Pkg::dV_ebi_for_V::V_input */ V_internal_real_Type_SDM_Types_Pkg V_input)
{
  /* math::Min::Mi_Output */
  static kcg_real Mi_Output_1;
  /* math::Min::I2 */
  static kcg_real I2_1;
  /* math::Min::I1 */
  static kcg_real I1_1;
  /* math::Min::_L25 */
  static kcg_bool _L25_1;
  /* math::Min::_L24 */
  static kcg_real _L24_1;
  /* math::Min::_L22 */
  static kcg_real _L22_1;
  /* math::Min::_L21 */
  static kcg_real _L21_1;
  /* SDM_Types_Pkg::dV_ebi_for_V::_L1 */
  static V_internal_real_Type_SDM_Types_Pkg _L1;
  /* SDM_Types_Pkg::dV_ebi_for_V::_L2 */
  static kcg_real _L2;
  /* SDM_Types_Pkg::dV_ebi_for_V::_L4 */
  static V_internal_real_Type_SDM_Types_Pkg _L4;
  /* SDM_Types_Pkg::dV_ebi_for_V::_L5 */
  static kcg_real _L5;
  /* SDM_Types_Pkg::dV_ebi_for_V::_L6 */
  static kcg_bool _L6;
  /* SDM_Types_Pkg::dV_ebi_for_V::_L7 */
  static V_internal_real_Type_SDM_Types_Pkg _L7;
  /* SDM_Types_Pkg::dV_ebi_for_V::_L8 */
  static kcg_real _L8;
  /* SDM_Types_Pkg::dV_ebi_for_V::_L10 */
  static kcg_real _L10;
  /* SDM_Types_Pkg::dV_ebi_for_V::_L11 */
  static V_internal_real_Type_SDM_Types_Pkg _L11;
  /* SDM_Types_Pkg::dV_ebi_for_V::_L12 */
  static kcg_real _L12;
  /* SDM_Types_Pkg::dV_ebi_for_V::_L13 */
  static V_internal_real_Type_SDM_Types_Pkg _L13;
  /* SDM_Types_Pkg::dV_ebi_for_V::_L14 */
  static V_internal_real_Type_SDM_Types_Pkg _L14;
  /* SDM_Types_Pkg::dV_ebi_for_V::_L15 */
  static kcg_real _L15;
  /* SDM_Types_Pkg::dV_ebi_for_V::_L16 */
  static V_internal_real_Type_SDM_Types_Pkg _L16;
  /* SDM_Types_Pkg::dV_ebi_for_V::_L17 */
  static V_internal_real_Type_SDM_Types_Pkg _L17;
  /* SDM_Types_Pkg::dV_ebi_for_V::_L18 */
  static kcg_real _L18;
  /* SDM_Types_Pkg::dV_ebi_for_V::_L20 */
  static V_internal_real_Type_SDM_Types_Pkg _L20;
  /* SDM_Types_Pkg::dV_ebi_for_V::_L21 */
  static V_internal_real_Type_SDM_Types_Pkg _L21;
  /* SDM_Types_Pkg::dV_ebi_for_V::_L22 */
  static kcg_real _L22;
  /* SDM_Types_Pkg::dV_ebi_for_V::dv_ebi */
  static V_internal_real_Type_SDM_Types_Pkg dv_ebi;
  
  _L1 = V_input;
  _L4 = V_ebi_min_SDM_Types_Pkg;
  _L6 = _L1 > _L4;
  _L11 = V_ebi_min_SDM_Types_Pkg;
  _L10 = _L1 - _L11;
  _L13 = dV_ebi_max_SDM_Types_Pkg;
  _L14 = dV_ebi_min_SDM_Types_Pkg;
  _L15 = _L13 - _L14;
  _L16 = V_ebi_max_SDM_Types_Pkg;
  _L17 = V_ebi_min_SDM_Types_Pkg;
  _L18 = _L16 - _L17;
  _L22 = _L15 / _L18;
  _L12 = _L10 * _L22;
  _L7 = dV_ebi_min_SDM_Types_Pkg;
  _L8 = _L12 + _L7;
  I1_1 = _L8;
  _L21_1 = I1_1;
  _L20 = dV_ebi_max_SDM_Types_Pkg;
  I2_1 = _L20;
  _L22_1 = I2_1;
  _L25_1 = _L21_1 <= _L22_1;
  /* 1 */ if (_L25_1) {
    _L24_1 = _L21_1;
  }
  else {
    _L24_1 = _L22_1;
  }
  Mi_Output_1 = _L24_1;
  _L5 = Mi_Output_1;
  _L21 = dV_ebi_min_SDM_Types_Pkg;
  /* 1 */ if (_L6) {
    _L2 = _L5;
  }
  else {
    _L2 = _L21;
  }
  dv_ebi = _L2;
  return dv_ebi;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** dV_ebi_for_V_SDM_Types_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

