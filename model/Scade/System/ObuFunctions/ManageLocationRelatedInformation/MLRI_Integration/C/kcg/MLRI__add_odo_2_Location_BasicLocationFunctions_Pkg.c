/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__add_odo_2_Location_BasicLocationFunctions_Pkg.h"

/** Calculates the target location after a reference location measured by the odometry: */
/** location = refLocation + (odoValue - refOdoValue). */
/** Applicable, if a reference location is given and a tracel distance behind it is measured with the odometry. */
/** "Remark_1" {Description = "Calculates the target location after a reference location measured by the odometry - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke   The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  "} */
/** "GdC_1" {Author = "Uwe Steinke", DateC = "Created : 2014-05-22", DateM = "Modified : 2014-05-22", Version = "00.02.00"} */
/* BasicLocationFunctions_Pkg::add_odo_2_Location */
void MLRI__add_odo_2_Location_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::refLocation */MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg *refLocation,
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::refOdoValue */MLRI__OdometryLocations_T_Obu_BasicTypes_Pkg *refOdoValue,
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::odoValue */MLRI__OdometryLocations_T_Obu_BasicTypes_Pkg *odoValue,
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::location */MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg *location)
{
  MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg tmp;
  
  /* 1 */
  MLRI__sub_2_odoDistances_BasicLocationFunctions_Pkg(
    odoValue,
    refOdoValue,
    &tmp);
  /* 1 */
  MLRI__add_2_Distances_BasicLocationFunctions_Pkg(&tmp, refLocation, location);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__add_odo_2_Location_BasicLocationFunctions_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

