/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "locReachedOrPassed_BasicLocationFunctions_Pkg.h"

void locReachedOrPassed_reset_BasicLocationFunctions_Pkg(
  outC_locReachedOrPassed_BasicLocationFunctions_Pkg *outC)
{
  /* 1 */ RisingEdge_reset_digital(&outC->Context_1);
  /* 2 */ signChanged_reset_BasicLocationFunctions_Pkg(&outC->Context_2);
  /* 1 */ signChanged_reset_BasicLocationFunctions_Pkg(&outC->_1_Context_1);
}

/* BasicLocationFunctions_Pkg::locReachedOrPassed */
void locReachedOrPassed_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::loc_2 */LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_2,
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::loc_1 */LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_1,
  outC_locReachedOrPassed_BasicLocationFunctions_Pkg *outC)
{
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::_L35 */
  static kcg_bool _L35;
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::_L34 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L34;
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::_L40 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L40;
  
  /* 1 */ sub_2_distances_BasicLocationFunctions_Pkg(loc_2, loc_1, &_L40);
  /* 1 */
  overlapOf_2_Locations_BasicLocationFunctions_Pkg(loc_2, loc_1, &_L34, &_L35);
  /* 1 */
  signChanged_BasicLocationFunctions_Pkg(
    _L40.nominal + _L40.d_min,
    &outC->_1_Context_1);
  /* 2 */
  signChanged_BasicLocationFunctions_Pkg(
    _L40.nominal + _L40.d_max,
    &outC->Context_2);
  /* 1 */
  RisingEdge_digital(
    (kcg_bool) (_L35 | (outC->_1_Context_1.change & outC->Context_2.change)),
    &outC->Context_1);
  outC->hit = outC->Context_1.RE_Output;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** locReachedOrPassed_BasicLocationFunctions_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

