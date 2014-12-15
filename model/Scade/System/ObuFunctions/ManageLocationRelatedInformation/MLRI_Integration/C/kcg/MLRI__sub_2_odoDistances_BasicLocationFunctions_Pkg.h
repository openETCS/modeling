/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__sub_2_odoDistances_BasicLocationFunctions_Pkg_H_
#define _MLRI__sub_2_odoDistances_BasicLocationFunctions_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */


/** Calculates the distance o2 - o1 based on odometry data */
/** "Remark_1" {Description = "Calculates the distance o2 - o1 based on odometry data - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke   The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  "} */
/** "GdC_1" {Author = "Uwe Steinke", DateC = "Created : 2014-05-22", DateM = "Modified : 2014-05-22", Version = "00.02.00"} */
/* BasicLocationFunctions_Pkg::sub_2_odoDistances */
extern void MLRI__sub_2_odoDistances_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::sub_2_odoDistances::odo_2 */MLRI__OdometryLocations_T_Obu_BasicTypes_Pkg *odo_2,
  /* BasicLocationFunctions_Pkg::sub_2_odoDistances::odo_1 */MLRI__OdometryLocations_T_Obu_BasicTypes_Pkg *odo_1,
  /* BasicLocationFunctions_Pkg::sub_2_odoDistances::distance */MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg *distance);

#endif /* _MLRI__sub_2_odoDistances_BasicLocationFunctions_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__sub_2_odoDistances_BasicLocationFunctions_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

