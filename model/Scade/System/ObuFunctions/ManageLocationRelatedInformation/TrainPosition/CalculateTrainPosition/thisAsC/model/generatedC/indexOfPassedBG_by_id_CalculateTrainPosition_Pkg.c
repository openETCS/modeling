/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/040_Model/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/TrainPosition/CalculateTrainPosition/KCG/config.txt
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOfPassedBG_by_id_CalculateTrainPosition_Pkg.h"

/** "Remark_1" {Description = "Determines the index of a passed BG in BGs - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke   The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  "} */
/** "GdC_1" {Author = "Uwe Steinke", DateC = "Created : 2014-05-22", DateM = "Modified : 2014-05-22", Version = "00.02.00"} */
/* CalculateTrainPosition_Pkg::indexOfPassedBG_by_id */
void indexOfPassedBG_by_id_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::indexOfPassedBG_by_id::BG */ passedBG_T_BG_Types_Pkg *BG,
  /* CalculateTrainPosition_Pkg::indexOfPassedBG_by_id::BGs */ positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::indexOfPassedBG_by_id::enable */ kcg_bool enable,
  /* CalculateTrainPosition_Pkg::indexOfPassedBG_by_id::indexOfBG */ kcg_int *indexOfBG,
  /* CalculateTrainPosition_Pkg::indexOfPassedBG_by_id::BG_found */ kcg_bool *BG_found,
  /* CalculateTrainPosition_Pkg::indexOfPassedBG_by_id::indexValid */ kcg_bool *indexValid)
{
  positionedBG_T_TrainPosition_Types_Pck tmp;
  
  tmp.valid = (*BG).valid;
  tmp.nid_c = (*BG).BG_Header.nid_c;
  tmp.nid_bg = (*BG).BG_Header.nid_bg;
  tmp.q_link = (*BG).BG_Header.q_link;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &tmp.location,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cLocWithInAcc_0_Obu_BasicTypes_Pkg);
  tmp.seqNoOnTrack = 0;
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &tmp.infoFromLinking,
    (infoFromLinking_T_TrainPosition_Types_Pck *)
      &cNoInfoFromLinking_CalculateTrainPosition_Pkg);
  kcg_copy_passedBG_T_BG_Types_Pkg(&tmp.infoFromPassing, BG);
  /* 1 */
  indexOfBG_by_id_CalculateTrainPosition_Pkg(
    &tmp,
    BGs,
    enable,
    indexOfBG,
    BG_found,
    indexValid);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** indexOfPassedBG_by_id_CalculateTrainPosition_Pkg.c
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

