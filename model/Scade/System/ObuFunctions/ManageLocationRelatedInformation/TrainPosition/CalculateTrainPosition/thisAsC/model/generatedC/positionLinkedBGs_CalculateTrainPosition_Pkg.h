/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/040_Model/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/TrainPosition/CalculateTrainPosition/KCG/config.txt
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */
#ifndef _positionLinkedBGs_CalculateTrainPosition_Pkg_H_
#define _positionLinkedBGs_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "positionLinkedBG_itr_CalculateTrainPosition_Pkg.h"

/* =====================  no input structure  ====================== */


/** "Remark_1" {Description = "Converts the linking information, received while passing a BG into an announced (= linked positioned) BG. - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke   The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  "} */
/** "GdC_1" {Author = "Uwe Steinke", DateC = "Created : 2014-05-22", DateM = "Modified : 2014-05-22", Version = "00.02.00"} */
/* CalculateTrainPosition_Pkg::positionLinkedBGs */
extern void positionLinkedBGs_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::positionLinkedBGs::passedPositionedBG */ positionedBG_T_TrainPosition_Types_Pck *passedPositionedBG,
  /* CalculateTrainPosition_Pkg::positionLinkedBGs::linkedBGs */ LinkedBGs_T_BG_Types_Pkg *linkedBGs,
  /* CalculateTrainPosition_Pkg::positionLinkedBGs::linkedPositionedBGs */ linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck *linkedPositionedBGs);

#endif /* _positionLinkedBGs_CalculateTrainPosition_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** positionLinkedBGs_CalculateTrainPosition_Pkg.h
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

