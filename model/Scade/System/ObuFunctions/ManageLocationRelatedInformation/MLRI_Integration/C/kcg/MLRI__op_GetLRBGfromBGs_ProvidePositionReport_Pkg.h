/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__op_GetLRBGfromBGs_ProvidePositionReport_Pkg_H_
#define _MLRI__op_GetLRBGfromBGs_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "MLRI__op_findBG_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */


/* ProvidePositionReport_Pkg::op_GetLRBGfromBGs */
extern void MLRI__op_GetLRBGfromBGs_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::posBGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::trainPos */MLRI__trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::found */kcg_bool *found,
  /* ProvidePositionReport_Pkg::op_GetLRBGfromBGs::lrbg */MLRI__positionedBG_T_TrainPosition_Types_Pck *lrbg);

#endif /* _MLRI__op_GetLRBGfromBGs_ProvidePositionReport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__op_GetLRBGfromBGs_ProvidePositionReport_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

