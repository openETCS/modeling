/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__BuildPassedBG_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::BuildPassedBG */
void MLRI__BuildPassedBG_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::BuildPassedBG::telegram_in */MLRI__Telegram_T_BG_Types_Pkg *telegram_in,
  /* CheckBGConsistency_Pkg::SubFunction::BuildPassedBG::bgMessage */MLRI__BG_Message_T_BG_Types_Pkg *bgMessage,
  /* CheckBGConsistency_Pkg::SubFunction::BuildPassedBG::passedBG_out */MLRI__passedBG_T_BG_Types_Pkg *passedBG_out)
{
  (*passedBG_out).valid = kcg_true;
  MLRI__kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &(*passedBG_out).bgPosition,
    &(*bgMessage).centerOfBalisePosition.odometerOfBaliseDetection);
  MLRI__kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &(*passedBG_out).BG_centerDetectionInaccuraccuracies,
    &(*bgMessage).centerOfBalisePosition.BG_centerDetectionInaccuraccuracies);
  (*passedBG_out).q_nvlocacc = 0;
  MLRI__kcg_copy_LinkedBGs_T_BG_Types_Pkg(
    &(*passedBG_out).linkedBGs,
    &(*telegram_in).packets.linkingPackets);
  (*passedBG_out).noCoordinateSystemHasBeenAssigned = kcg_false;
  (*passedBG_out).trainOrientationToBG = MLRI__Q_DIRLRBG_Unknown;
  (*passedBG_out).trainRunningDirectionToBG = MLRI__Q_DIRTRAIN_Unknown;
  /* 1 */
  MLRI__BuildBGheader_CheckBGConsistency_Pkg_SubFunction(
    &(*telegram_in).telegramheader,
    &(*passedBG_out).BG_Header);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__BuildPassedBG_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

