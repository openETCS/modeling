/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__prevPassedLinkedBG_CalculateTrainPosition_Pkg.h"

/** "Remark_1" {Description = "Memorizes the previously passed BG when a new BG is passed and the IDs are different. - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke   The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  "} */
/** "GdC_1" {Author = "Uwe Steinke", DateC = "Created : 2014-05-22", DateM = "Modified : 2014-05-22", Version = "00.02.00"} */
/* CalculateTrainPosition_Pkg::prevPassedLinkedBG */
void MLRI__prevPassedLinkedBG_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::passedBG */MLRI__passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::last_BGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *last_BGs,
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::previouslyPassedBG */MLRI__positionedBG_T_TrainPosition_Types_Pck *previouslyPassedBG)
{
  kcg_bool tmp;
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L61 */ kcg_bool _L61;
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L60 */ kcg_int _L60;
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::_L64 */ MLRI__positionedBG_T_TrainPosition_Types_Pck _L64;
  
  /* 1 */
  MLRI__indexOfLastPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    kcg_true,
    last_BGs,
    (*passedBG).valid,
    &_L60,
    &_L61,
    &tmp);
  if ((0 <= _L60) & (_L60 < 8)) {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L64,
      &(*last_BGs)[_L60]);
  }
  else {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L64,
      (MLRI__positionedBG_T_TrainPosition_Types_Pck *)
        &MLRI__cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  tmp = /* 1 */
    MLRI__nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      _L64.nid_c,
      _L64.nid_bg,
      (*passedBG).BG_Header.nid_c,
      (*passedBG).BG_Header.nid_bg);
  if (_L61 & !tmp) {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      previouslyPassedBG,
      &_L64);
  }
  else {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      previouslyPassedBG,
      (MLRI__positionedBG_T_TrainPosition_Types_Pck *)
        &MLRI__cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__prevPassedLinkedBG_CalculateTrainPosition_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

