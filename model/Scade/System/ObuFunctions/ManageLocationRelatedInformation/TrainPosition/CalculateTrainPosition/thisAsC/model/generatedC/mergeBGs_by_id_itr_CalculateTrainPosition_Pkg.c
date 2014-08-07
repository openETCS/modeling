/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/040_Model/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/TrainPosition/CalculateTrainPosition/KCG/config.txt
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mergeBGs_by_id_itr_CalculateTrainPosition_Pkg.h"

/** "Remark_1" {Description = "Iterated function for the merge of a BG into an array of BGs. - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke   The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  "} */
/** "GdC_1" {Author = "Uwe Steinke", DateC = "Created : 2014-05-22", DateM = "Modified : 2014-05-22", Version = "00.02.00"} */
/* CalculateTrainPosition_Pkg::mergeBGs_by_id_itr */
void mergeBGs_by_id_itr_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::mergeBGs_by_id_itr::BGs_in */ positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg *BGs_in,
  /* CalculateTrainPosition_Pkg::mergeBGs_by_id_itr::BG */ positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::mergeBGs_by_id_itr::BGs_out */ positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg *BGs_out)
{
  /* CalculateTrainPosition_Pkg::mergeBGs_by_id_itr::_L13 */ kcg_bool _L13;
  
  /* 1 */
  mergeBG_by_id_CalculateTrainPosition_Pkg(
    BG,
    &(*BGs_in).BGs,
    &(*BGs_out).BGs,
    &_L13);
  (*BGs_out).overrun = _L13 | (*BGs_in).overrun;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** mergeBGs_by_id_itr_CalculateTrainPosition_Pkg.c
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

