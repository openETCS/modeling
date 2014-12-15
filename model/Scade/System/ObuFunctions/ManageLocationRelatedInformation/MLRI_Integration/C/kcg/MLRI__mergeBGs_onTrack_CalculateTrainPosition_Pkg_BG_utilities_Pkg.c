/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/** "Remark_1" {Description = "Merges two arrays of BGs by id.  - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke   The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  "} */
/** "GdC_1" {Author = "Uwe Steinke", DateC = "Created : 2014-05-22", DateM = "Modified : 2014-05-22", Version = "00.02.00"} */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack */
void MLRI__mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::BGs_1 */MLRI__positionedBGs_T_TrainPosition_Types_Pck *BGs_1,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::BGs_2 */MLRI__positionedBGs_T_TrainPosition_Types_Pck *BGs_2,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::BGs_out */MLRI__positionedBGs_T_TrainPosition_Types_Pck *BGs_out,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::overrun */kcg_bool *overrun)
{
  MLRI__struct__21484 tmp;
  kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::_L7 */ MLRI__positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg _L7;
  
  MLRI__kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L7.BGs, BGs_1);
  _L7.overrun = kcg_false;
  for (i = 0; i < 8; i++) {
    MLRI__kcg_copy_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg(
      &tmp,
      &_L7);
    /* 1 */
    MLRI__mergeBGs_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &tmp,
      &(*BGs_2)[i],
      &_L7);
  }
  *overrun = _L7.overrun;
  MLRI__kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(BGs_out, &_L7.BGs);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

