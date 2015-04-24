/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "overlapOf_2_Locations_BasicLocationFunctions_Pkg.h"

/* BasicLocationFunctions_Pkg::overlapOf_2_Locations */
void overlapOf_2_Locations_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::loc_2 */ LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_2,
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::loc_1 */ LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_1,
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::loc */ LocWithInAcc_T_Obu_BasicTypes_Pkg *loc,
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::overlap */ kcg_bool *overlap)
{
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L10 */ kcg_int _L10;
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L19 */ kcg_int _L19;
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L17 */ kcg_int _L17;
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L11 */ kcg_int _L11;
  
  _L17 = (*loc_1).d_max + (*loc_1).nominal;
  _L11 = (*loc_2).d_max + (*loc_2).nominal;
  if (_L17 <= _L11) {
    _L10 = _L17;
  }
  else {
    _L10 = _L11;
  }
  _L11 = (*loc_1).d_min + (*loc_1).nominal;
  _L17 = (*loc_2).d_min + (*loc_2).nominal;
  if (_L11 >= _L17) {
    _L19 = _L11;
  }
  else {
    _L19 = _L17;
  }
  _L11 = (_L10 - _L19) / 2 + _L19;
  (*loc).nominal = _L11;
  (*loc).d_min = _L19 - _L11;
  (*loc).d_max = _L10 - _L11;
  *overlap = _L10 >= _L19;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** overlapOf_2_Locations_BasicLocationFunctions_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

