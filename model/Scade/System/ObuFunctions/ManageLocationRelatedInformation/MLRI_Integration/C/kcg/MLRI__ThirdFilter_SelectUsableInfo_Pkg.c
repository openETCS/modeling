/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__ThirdFilter_SelectUsableInfo_Pkg.h"

/* SelectUsableInfo_Pkg::ThirdFilter */
MLRI__indRej_T_SelectUsableInfo_Pkg MLRI__ThirdFilter_SelectUsableInfo_Pkg(
  /* SelectUsableInfo_Pkg::ThirdFilter::TrainInfo_ */MLRI__TrainToTrackStatus_T_BG_Types_Pkg *TrainInfo_,
  /* SelectUsableInfo_Pkg::ThirdFilter::passedBG */MLRI__passedBG_T_BG_Types_Pkg *passedBG,
  /* SelectUsableInfo_Pkg::ThirdFilter::in_Indicator_Reject */MLRI__indRej_T_SelectUsableInfo_Pkg in_Indicator_Reject,
  /* SelectUsableInfo_Pkg::ThirdFilter::Train_Data */MLRI__trainData_T_TIU_Types_Pkg *Train_Data)
{
  kcg_bool tmp;
  /* SelectUsableInfo_Pkg::ThirdFilter::Indicator_Reject */ MLRI__indRej_T_SelectUsableInfo_Pkg Indicator_Reject;
  
  switch ((*TrainInfo_).m_mode) {
    case MLRI__M_MODE_Passive_Shunting :
      tmp = kcg_true;
      break;
    case MLRI__M_MODE_Shunting :
      tmp = kcg_true;
      break;
    case MLRI__M_MODE_Sleeping :
      tmp = kcg_true;
      break;
    case MLRI__M_MODE_Trip :
      tmp = kcg_true;
      break;
    case MLRI__M_MODE_Reversing :
      tmp = kcg_true;
      break;
    
    default :
      tmp = kcg_false;
  }
  if (tmp | (in_Indicator_Reject ==
      MLRI__IND_REJ_Accepted_SelectUsableInfo_Pkg)) {
    Indicator_Reject = MLRI__IND_REJ_Accepted_SelectUsableInfo_Pkg;
  }
  else if (((*TrainInfo_).m_mode == MLRI__M_MODE_System_Failure) |
    ((*TrainInfo_).m_mode == MLRI__M_MODE_Isolation)) {
    Indicator_Reject = MLRI__IND_REJ_Not_Relevant_SelectUsableInfo_Pkg;
  }
  else if ((*TrainInfo_).m_mode == MLRI__M_MODE_Post_Trip) {
    if ((MLRI__M_LEVEL_Level_1 == (*TrainInfo_).m_level) |
      !(*Train_Data).RecExit) {
      Indicator_Reject = MLRI__IND_REJ_Rejected_SelectUsableInfo_Pkg;
    }
    else {
      Indicator_Reject = MLRI__IND_REJ_Accepted_SelectUsableInfo_Pkg;
    }
  }
  else if (((*TrainInfo_).m_mode == MLRI__M_MODE_Stand_By) &
    !((MLRI__cabNone_Active_TIU_Types_Pkg != (*Train_Data).cabActiveStatus) &
      (*Train_Data).validData)) {
    Indicator_Reject = MLRI__IND_REJ_Rejected_SelectUsableInfo_Pkg;
  }
  else {
    Indicator_Reject = MLRI__IND_REJ_Accepted_SelectUsableInfo_Pkg;
  }
  return Indicator_Reject;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__ThirdFilter_SelectUsableInfo_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

