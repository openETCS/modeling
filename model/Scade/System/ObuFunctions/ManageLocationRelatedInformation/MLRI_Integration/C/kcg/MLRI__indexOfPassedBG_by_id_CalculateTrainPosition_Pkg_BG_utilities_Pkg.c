/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/** "Remark_1" {Description = "Determines the index of a passed BG in BGs - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke   The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  "} */
/** "GdC_1" {Author = "Uwe Steinke", DateC = "Created : 2014-05-22", DateM = "Modified : 2014-05-22", Version = "00.02.00"} */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id */
void MLRI__indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::BG */MLRI__passedBG_T_BG_Types_Pkg *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::BGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::enable */kcg_bool enable,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::indexOfBG */kcg_int *indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::BG_found */kcg_bool *BG_found,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::indexValid */kcg_bool *indexValid)
{
  MLRI__struct__21396 tmp;
  
  tmp.valid = (*BG).valid;
  tmp.nid_c = (*BG).BG_Header.nid_c;
  tmp.nid_bg = (*BG).BG_Header.nid_bg;
  tmp.q_link = (*BG).BG_Header.q_link;
  MLRI__kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &tmp.location,
    (MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg *)
      &MLRI__cLocWithInAcc_0_Obu_BasicTypes_Pkg);
  tmp.seqNoOnTrack = 0;
  MLRI__kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &tmp.infoFromLinking,
    (MLRI__infoFromLinking_T_TrainPosition_Types_Pck *)
      &MLRI__cNoInfoFromLinking_CalculateTrainPosition_Pkg);
  MLRI__kcg_copy_passedBG_T_BG_Types_Pkg(&tmp.infoFromPassing, BG);
  /* 1 */
  MLRI__indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &tmp,
    BGs,
    enable,
    indexOfBG,
    BG_found,
    indexValid);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

