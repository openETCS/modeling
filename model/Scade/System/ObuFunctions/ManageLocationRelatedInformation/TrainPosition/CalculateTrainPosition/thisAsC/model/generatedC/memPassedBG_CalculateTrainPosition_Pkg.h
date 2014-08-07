/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/040_Model/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/TrainPosition/CalculateTrainPosition/KCG/config.txt
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */
#ifndef _memPassedBG_CalculateTrainPosition_Pkg_H_
#define _memPassedBG_CalculateTrainPosition_Pkg_H_

#include "kcg_types.h"
#include "improveUnlinkedBGLocation_CalculateTrainPosition_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::memPassedBG::passedLinkedBG */ passedLinkedBG;
  positionedBG_T_TrainPosition_Types_Pck /* CalculateTrainPosition_Pkg::memPassedBG::passedUnlinkedBG */ passedUnlinkedBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_memPassedBG_CalculateTrainPosition_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/** "Remark_1" {Description = "Memorizes the passed linked and unlinked BG - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke   The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  "} */
/** "GdC_1" {Author = "Uwe Steinke", DateC = "Created : 2014-05-22", DateM = "Modified : 2014-05-22", Version = "00.02.00"} */
/* CalculateTrainPosition_Pkg::memPassedBG */
extern void memPassedBG_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::memPassedBG::passedBG */ positionedBG_T_TrainPosition_Types_Pck *passedBG,
  /* CalculateTrainPosition_Pkg::memPassedBG::prevPassedLinkedBG */ positionedBG_T_TrainPosition_Types_Pck *prevPassedLinkedBG,
  /* CalculateTrainPosition_Pkg::memPassedBG::reset */ kcg_bool reset,
  outC_memPassedBG_CalculateTrainPosition_Pkg *outC);

extern void memPassedBG_reset_CalculateTrainPosition_Pkg(
  outC_memPassedBG_CalculateTrainPosition_Pkg *outC);
extern void memPassedBG_init_CalculateTrainPosition_Pkg(
  outC_memPassedBG_CalculateTrainPosition_Pkg *outC);

#endif /* _memPassedBG_CalculateTrainPosition_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** memPassedBG_CalculateTrainPosition_Pkg.h
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

