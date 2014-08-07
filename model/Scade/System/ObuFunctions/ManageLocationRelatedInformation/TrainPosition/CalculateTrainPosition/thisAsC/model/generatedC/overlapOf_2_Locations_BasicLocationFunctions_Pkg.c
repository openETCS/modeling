/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/040_Model/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/TrainPosition/CalculateTrainPosition/KCG/config.txt
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "overlapOf_2_Locations_BasicLocationFunctions_Pkg.h"

/** "Remark_1" {Description = "Determines the overlapping section of 2 locations - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke   The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  "} */
/** "GdC_1" {Author = "Uwe Steinke", DateC = "Created : 2014-05-22", DateM = "Modified : 2014-05-22", Version = "00.02.00"} */
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
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

