/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/040_Model/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/TrainPosition/CalculateTrainPosition/KCG/config.txt
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */
#ifndef _mergeBGs_by_id_CalculateTrainPosition_Pkg_H_
#define _mergeBGs_by_id_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "mergeBGs_by_id_itr_CalculateTrainPosition_Pkg.h"

/* =====================  no input structure  ====================== */


/** "Remark_1" {Description = "Merges two arrays of BGs by id.  - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke   The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  "} */
/** "GdC_1" {Author = "Uwe Steinke", DateC = "Created : 2014-05-22", DateM = "Modified : 2014-05-22", Version = "00.02.00"} */
/* CalculateTrainPosition_Pkg::mergeBGs_by_id */
extern void mergeBGs_by_id_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::mergeBGs_by_id::BGs_1 */ positionedBGs_T_TrainPosition_Types_Pck *BGs_1,
  /* CalculateTrainPosition_Pkg::mergeBGs_by_id::BGs_2 */ positionedBGs_T_TrainPosition_Types_Pck *BGs_2,
  /* CalculateTrainPosition_Pkg::mergeBGs_by_id::BGs_out */ positionedBGs_T_TrainPosition_Types_Pck *BGs_out,
  /* CalculateTrainPosition_Pkg::mergeBGs_by_id::overrun */ kcg_bool *overrun);

#endif /* _mergeBGs_by_id_CalculateTrainPosition_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** mergeBGs_by_id_CalculateTrainPosition_Pkg.h
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

