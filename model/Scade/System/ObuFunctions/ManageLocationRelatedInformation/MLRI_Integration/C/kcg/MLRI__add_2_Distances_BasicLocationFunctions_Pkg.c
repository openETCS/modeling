/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__add_2_Distances_BasicLocationFunctions_Pkg.h"

/** Calculates the sum of 2 distances dist_2 + dist_1 */
/** "Remark_1" {Description = "Calculates the sum of 2 distances - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke   The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  "} */
/** "GdC_1" {Author = "Uwe Steinke", DateC = "Created : 2014-05-22", DateM = "Modified : 2014-05-22", Version = "00.02.00"} */
/* BasicLocationFunctions_Pkg::add_2_Distances */
void MLRI__add_2_Distances_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::add_2_Distances::dist_2 */MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg *dist_2,
  /* BasicLocationFunctions_Pkg::add_2_Distances::dist_1 */MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg *dist_1,
  /* BasicLocationFunctions_Pkg::add_2_Distances::distance */MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg *distance)
{
  (*distance).nominal = (*dist_2).nominal + (*dist_1).nominal;
  (*distance).d_min = (*dist_2).d_min + (*dist_1).d_min;
  (*distance).d_max = (*dist_2).d_max + (*dist_1).d_max;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__add_2_Distances_BasicLocationFunctions_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

