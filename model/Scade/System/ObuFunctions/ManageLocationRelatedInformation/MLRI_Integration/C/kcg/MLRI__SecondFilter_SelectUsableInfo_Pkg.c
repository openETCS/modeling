/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__SecondFilter_SelectUsableInfo_Pkg.h"

/* SelectUsableInfo_Pkg::SecondFilter */
MLRI__indRej_T_SelectUsableInfo_Pkg MLRI__SecondFilter_SelectUsableInfo_Pkg(
  /* SelectUsableInfo_Pkg::SecondFilter::TrainInfo_ */MLRI__TrainToTrackStatus_T_BG_Types_Pkg *TrainInfo_,
  /* SelectUsableInfo_Pkg::SecondFilter::passedBG */MLRI__passedBG_T_BG_Types_Pkg *passedBG,
  /* SelectUsableInfo_Pkg::SecondFilter::in_Indicator_Reject */MLRI__indRej_T_SelectUsableInfo_Pkg in_Indicator_Reject)
{
  /* SelectUsableInfo_Pkg::SecondFilter::Indicator_Reject */ MLRI__indRej_T_SelectUsableInfo_Pkg Indicator_Reject;
  
  Indicator_Reject = in_Indicator_Reject;
  return Indicator_Reject;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__SecondFilter_SelectUsableInfo_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

