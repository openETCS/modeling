/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__FirstFilter_SelectUsableInfo_Pkg.h"

/* SelectUsableInfo_Pkg::FirstFilter */
MLRI__indRej_T_SelectUsableInfo_Pkg MLRI__FirstFilter_SelectUsableInfo_Pkg(
  /* SelectUsableInfo_Pkg::FirstFilter::TrainInfo_ */MLRI__TrainToTrackStatus_T_BG_Types_Pkg *TrainInfo_,
  /* SelectUsableInfo_Pkg::FirstFilter::passedBG */MLRI__passedBG_T_BG_Types_Pkg *passedBG)
{
  /* SelectUsableInfo_Pkg::FirstFilter::Indicator_Reject */ MLRI__indRej_T_SelectUsableInfo_Pkg Indicator_Reject;
  
  if (MLRI__M_LEVEL_Level_1 == (*TrainInfo_).m_level) {
    Indicator_Reject = MLRI__IND_REJ_Accepted_SelectUsableInfo_Pkg;
  }
  else if ((*TrainInfo_).m_leveltr == MLRI__M_LEVELTR_Level_1) {
    Indicator_Reject = MLRI__IND_REJ_Accepted_SelectUsableInfo_Pkg;
  }
  else {
    Indicator_Reject = MLRI__IND_REJ_Rejected_SelectUsableInfo_Pkg;
  }
  return Indicator_Reject;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__FirstFilter_SelectUsableInfo_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

