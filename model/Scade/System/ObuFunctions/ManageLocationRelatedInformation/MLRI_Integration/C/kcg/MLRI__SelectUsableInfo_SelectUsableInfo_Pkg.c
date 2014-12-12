/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__SelectUsableInfo_SelectUsableInfo_Pkg.h"

/* SelectUsableInfo_Pkg::SelectUsableInfo */
void MLRI__SelectUsableInfo_SelectUsableInfo_Pkg(
  /* SelectUsableInfo_Pkg::SelectUsableInfo::TrainInfo_ */MLRI__TrainToTrackStatus_T_BG_Types_Pkg *TrainInfo_,
  /* SelectUsableInfo_Pkg::SelectUsableInfo::passedBG */MLRI__passedBG_T_BG_Types_Pkg *passedBG,
  /* SelectUsableInfo_Pkg::SelectUsableInfo::Train_Data */MLRI__trainData_T_TIU_Types_Pkg *Train_Data,
  /* SelectUsableInfo_Pkg::SelectUsableInfo::out_passedBG */MLRI__passedBG_T_BG_Types_Pkg *out_passedBG)
{
  MLRI__indRej_T_SelectUsableInfo_Pkg tmp1;
  MLRI__indRej_T_SelectUsableInfo_Pkg tmp;
  /* SelectUsableInfo_Pkg::SelectUsableInfo::IfBlock1 */ kcg_bool IfBlock1_clock;
  
  tmp1 = /* 1 */ MLRI__FirstFilter_SelectUsableInfo_Pkg(TrainInfo_, passedBG);
  tmp = /* 1 */
    MLRI__SecondFilter_SelectUsableInfo_Pkg(TrainInfo_, passedBG, tmp1);
  tmp1 = /* 1 */
    MLRI__ThirdFilter_SelectUsableInfo_Pkg(
      TrainInfo_,
      passedBG,
      tmp,
      Train_Data);
  IfBlock1_clock = tmp1 == MLRI__IND_REJ_Accepted_SelectUsableInfo_Pkg;
  if (IfBlock1_clock) {
    MLRI__kcg_copy_passedBG_T_BG_Types_Pkg(out_passedBG, passedBG);
  }
  else {
    MLRI__kcg_copy_passedBG_T_BG_Types_Pkg(
      out_passedBG,
      (MLRI__passedBG_T_BG_Types_Pkg *) &MLRI__cEmptyPassedBG_BG_Types_Pkg);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__SelectUsableInfo_SelectUsableInfo_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

