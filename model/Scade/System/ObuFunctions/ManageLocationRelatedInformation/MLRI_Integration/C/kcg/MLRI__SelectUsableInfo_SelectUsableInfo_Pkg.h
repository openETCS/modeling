/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__SelectUsableInfo_SelectUsableInfo_Pkg_H_
#define _MLRI__SelectUsableInfo_SelectUsableInfo_Pkg_H_

#include "kcg_types.h"
#include "MLRI__FirstFilter_SelectUsableInfo_Pkg.h"
#include "MLRI__ThirdFilter_SelectUsableInfo_Pkg.h"
#include "MLRI__SecondFilter_SelectUsableInfo_Pkg.h"

/* =====================  no input structure  ====================== */


/* SelectUsableInfo_Pkg::SelectUsableInfo */
extern void MLRI__SelectUsableInfo_SelectUsableInfo_Pkg(
  /* SelectUsableInfo_Pkg::SelectUsableInfo::TrainInfo_ */MLRI__TrainToTrackStatus_T_BG_Types_Pkg *TrainInfo_,
  /* SelectUsableInfo_Pkg::SelectUsableInfo::passedBG */MLRI__passedBG_T_BG_Types_Pkg *passedBG,
  /* SelectUsableInfo_Pkg::SelectUsableInfo::Train_Data */MLRI__trainData_T_TIU_Types_Pkg *Train_Data,
  /* SelectUsableInfo_Pkg::SelectUsableInfo::out_passedBG */MLRI__passedBG_T_BG_Types_Pkg *out_passedBG);

#endif /* _MLRI__SelectUsableInfo_SelectUsableInfo_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__SelectUsableInfo_SelectUsableInfo_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

