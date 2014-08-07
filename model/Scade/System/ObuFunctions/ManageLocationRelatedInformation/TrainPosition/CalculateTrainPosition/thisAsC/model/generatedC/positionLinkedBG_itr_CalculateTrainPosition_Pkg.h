/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/040_Model/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/TrainPosition/CalculateTrainPosition/KCG/config.txt
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */
#ifndef _positionLinkedBG_itr_CalculateTrainPosition_Pkg_H_
#define _positionLinkedBG_itr_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "sub_2_distances_BasicLocationFunctions_Pkg.h"
#include "add_2_Distances_BasicLocationFunctions_Pkg.h"
#include "scaledDLINK_2_dlink_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */


/** "Remark_1" {Description = "Iterated function for the conversion of the linking information, received while passing a BG into an announced (= linked positioned) BG. - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke   The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  "} */
/** "GdC_1" {Author = "Uwe Steinke", DateC = "Created : 2014-05-22", DateM = "Modified : 2014-05-22", Version = "00.02.00"} */
/* CalculateTrainPosition_Pkg::positionLinkedBG_itr */
extern void positionLinkedBG_itr_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::positionLinkedBG_itr::prevLinkedBGLocation */ LocWithInAcc_T_Obu_BasicTypes_Pkg *prevLinkedBGLocation,
  /* CalculateTrainPosition_Pkg::positionLinkedBG_itr::passedPositionedBG */ positionedBG_T_TrainPosition_Types_Pck *passedPositionedBG,
  /* CalculateTrainPosition_Pkg::positionLinkedBG_itr::linkedBG */ LinkedBG_T_BG_Types_Pkg *linkedBG,
  /* CalculateTrainPosition_Pkg::positionLinkedBG_itr::location */ LocWithInAcc_T_Obu_BasicTypes_Pkg *location,
  /* CalculateTrainPosition_Pkg::positionLinkedBG_itr::linkedPositionedBG */ positionedBG_T_TrainPosition_Types_Pck *linkedPositionedBG);

#endif /* _positionLinkedBG_itr_CalculateTrainPosition_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** positionLinkedBG_itr_CalculateTrainPosition_Pkg.h
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

