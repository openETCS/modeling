/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__validateDataDirection_ValidateDataDirection_Pkg_H_
#define _MLRI__validateDataDirection_ValidateDataDirection_Pkg_H_

#include "kcg_types.h"
#include "MLRI__DetermineBGOrientation_ValidateDataDirection_Pkg_DetermineBG_Orientation_Pkg.h"
#include "MLRI__modifyLinkedBG_ValidateDataDirection_Pkg.h"

/* =====================  no input structure  ====================== */


/* ValidateDataDirection_Pkg::validateDataDirection */
extern void MLRI__validateDataDirection_ValidateDataDirection_Pkg(
  /* ValidateDataDirection_Pkg::validateDataDirection::passedBG_in */MLRI__passedBG_T_BG_Types_Pkg *passedBG_in,
  /* ValidateDataDirection_Pkg::validateDataDirection::LRBG */MLRI__positionedBG_T_TrainPosition_Types_Pck *LRBG,
  /* ValidateDataDirection_Pkg::validateDataDirection::trainPosition */MLRI__trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* ValidateDataDirection_Pkg::validateDataDirection::passedBG_out */MLRI__passedBG_T_BG_Types_Pkg *passedBG_out);

#endif /* _MLRI__validateDataDirection_ValidateDataDirection_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__validateDataDirection_ValidateDataDirection_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

