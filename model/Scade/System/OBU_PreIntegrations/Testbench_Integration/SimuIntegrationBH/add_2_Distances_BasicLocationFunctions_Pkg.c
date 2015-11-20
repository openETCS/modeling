/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "add_2_Distances_BasicLocationFunctions_Pkg.h"

/* BasicLocationFunctions_Pkg::add_2_Distances */
void add_2_Distances_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::add_2_Distances::dist_2 */ LocWithInAcc_T_Obu_BasicTypes_Pkg *dist_2,
  /* BasicLocationFunctions_Pkg::add_2_Distances::dist_1 */ LocWithInAcc_T_Obu_BasicTypes_Pkg *dist_1,
  /* BasicLocationFunctions_Pkg::add_2_Distances::distance */ LocWithInAcc_T_Obu_BasicTypes_Pkg *distance)
{
  /* BasicLocationFunctions_Pkg::add_2_Distances::_L1 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L1;
  /* BasicLocationFunctions_Pkg::add_2_Distances::_L2 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L2;
  /* BasicLocationFunctions_Pkg::add_2_Distances::_L3 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L3;
  /* BasicLocationFunctions_Pkg::add_2_Distances::_L4 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L4;
  /* BasicLocationFunctions_Pkg::add_2_Distances::_L5 */
  static kcg_int _L5;
  /* BasicLocationFunctions_Pkg::add_2_Distances::_L17 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L17;
  /* BasicLocationFunctions_Pkg::add_2_Distances::_L16 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L16;
  /* BasicLocationFunctions_Pkg::add_2_Distances::_L15 */
  static kcg_int _L15;
  /* BasicLocationFunctions_Pkg::add_2_Distances::_L14 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L14;
  /* BasicLocationFunctions_Pkg::add_2_Distances::_L13 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L13;
  /* BasicLocationFunctions_Pkg::add_2_Distances::_L22 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L22;
  /* BasicLocationFunctions_Pkg::add_2_Distances::_L21 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L21;
  /* BasicLocationFunctions_Pkg::add_2_Distances::_L20 */
  static kcg_int _L20;
  /* BasicLocationFunctions_Pkg::add_2_Distances::_L19 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L19;
  /* BasicLocationFunctions_Pkg::add_2_Distances::_L18 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L18;
  /* BasicLocationFunctions_Pkg::add_2_Distances::_L23 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L23;
  
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L1, dist_2);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L2, dist_1);
  _L3 = _L1.nominal;
  _L4 = _L2.nominal;
  _L5 = _L3 + _L4;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L16, dist_2);
  _L14 = _L16.d_min;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L17, dist_1);
  _L13 = _L17.d_min;
  _L15 = _L14 + _L13;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L19, dist_2);
  _L22 = _L19.d_max;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L18, dist_1);
  _L21 = _L18.d_max;
  _L20 = _L22 + _L21;
  _L23.nominal = _L5;
  _L23.d_min = _L15;
  _L23.d_max = _L20;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(distance, &_L23);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** add_2_Distances_BasicLocationFunctions_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

