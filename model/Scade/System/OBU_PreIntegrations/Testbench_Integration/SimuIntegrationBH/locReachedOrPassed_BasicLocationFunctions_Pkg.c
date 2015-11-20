/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "locReachedOrPassed_BasicLocationFunctions_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void locReachedOrPassed_init_BasicLocationFunctions_Pkg(
  outC_locReachedOrPassed_BasicLocationFunctions_Pkg *outC)
{
  outC->hit = kcg_true;
  /* 1 */ RisingEdge_init_digital(&outC->_1_Context_1);
  /* 2 */ signChanged_init_BasicLocationFunctions_Pkg(&outC->Context_2);
  /* 1 */ signChanged_init_BasicLocationFunctions_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void locReachedOrPassed_reset_BasicLocationFunctions_Pkg(
  outC_locReachedOrPassed_BasicLocationFunctions_Pkg *outC)
{
  /* 1 */ RisingEdge_reset_digital(&outC->_1_Context_1);
  /* 2 */ signChanged_reset_BasicLocationFunctions_Pkg(&outC->Context_2);
  /* 1 */ signChanged_reset_BasicLocationFunctions_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* BasicLocationFunctions_Pkg::locReachedOrPassed */
void locReachedOrPassed_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::loc_2 */ LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_2,
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::loc_1 */ LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_1,
  outC_locReachedOrPassed_BasicLocationFunctions_Pkg *outC)
{
  static LocWithInAcc_T_Obu_BasicTypes_Pkg noname;
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::_L35 */
  static kcg_bool _L35;
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::_L34 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L34;
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::_L36 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L36;
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::_L37 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L37;
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::_L38 */
  static kcg_bool _L38;
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::_L39 */
  static kcg_bool _L39;
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::_L40 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L40;
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::_L43 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L43;
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::_L42 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L42;
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::_L41 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L41;
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::_L47 */
  static kcg_bool _L47;
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::_L48 */
  static kcg_bool _L48;
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::_L50 */
  static kcg_bool _L50;
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::_L51 */
  static kcg_int _L51;
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::_L52 */
  static kcg_int _L52;
  
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L36, loc_2);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L37, loc_1);
  /* 1 */
  overlapOf_2_Locations_BasicLocationFunctions_Pkg(&_L36, &_L37, &_L34, &_L35);
  /* 1 */ sub_2_distances_BasicLocationFunctions_Pkg(&_L36, &_L37, &_L40);
  _L41 = _L40.nominal;
  _L42 = _L40.d_min;
  _L51 = _L41 + _L42;
  /* 1 */ signChanged_BasicLocationFunctions_Pkg(_L51, &outC->Context_1);
  _L47 = outC->Context_1.change;
  _L43 = _L40.d_max;
  _L52 = _L41 + _L43;
  /* 2 */ signChanged_BasicLocationFunctions_Pkg(_L52, &outC->Context_2);
  _L48 = outC->Context_2.change;
  _L50 = _L47 & _L48;
  _L38 = _L35 | _L50;
  /* 1 */ RisingEdge_digital(_L38, &outC->_1_Context_1);
  _L39 = outC->_1_Context_1.RE_Output;
  outC->hit = _L39;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&noname, &_L34);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** locReachedOrPassed_BasicLocationFunctions_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

