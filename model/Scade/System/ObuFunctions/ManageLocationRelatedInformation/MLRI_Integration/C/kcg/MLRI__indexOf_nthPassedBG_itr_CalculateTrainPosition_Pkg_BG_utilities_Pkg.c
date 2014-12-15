/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/** "Remark_1" {Description = "Iterated function for determing the index of BG in BGs - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke   The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  "} */
/** "GdC_1" {Author = "Uwe Steinke", DateC = "Created : 2014-05-22", DateM = "Modified : 2014-05-22", Version = "Version : 00.02.00"} */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr */
void MLRI__indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::iteratorIndex */kcg_int iteratorIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::acc_in */MLRI__BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *acc_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::linked */kcg_bool linked,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::n */kcg_int n,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::BG */MLRI__positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::cont */kcg_bool *cont,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::acc_out */MLRI__BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *acc_out)
{
  MLRI__Q_LINK tmp;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::_L26 */ kcg_bool _L26;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::_L39 */ kcg_int _L39;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::_L44 */ kcg_bool _L44;
  
  if (linked) {
    tmp = MLRI__Q_LINK_Linked;
  }
  else {
    tmp = MLRI__Q_LINK_Unlinked;
  }
  _L26 = (*BG).valid & (*BG).infoFromPassing.valid & ((*BG).q_link == tmp);
  if (_L26) {
    _L39 = 1 + (*acc_in).noOfFoundBGs;
  }
  else {
    _L39 = (*acc_in).noOfFoundBGs;
  }
  (*acc_out).noOfFoundBGs = _L39;
  _L44 = (_L39 == n) | (*acc_in).BGFound;
  (*acc_out).BGFound = _L44;
  *cont = (*BG).valid & !_L44;
  if (_L26) {
    (*acc_out).index = iteratorIndex;
  }
  else {
    (*acc_out).index = (*acc_in).index;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

