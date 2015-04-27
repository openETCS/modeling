/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "bildBGHeader_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::bildBGHeader */
void bildBGHeader_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::trackSideForCheck */ TrackSide_ForCheck_T_Common_Types_Pkg *trackSideForCheck,
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::q_nvlocacc */ Q_NVLOCACC q_nvlocacc,
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::bgHeader */ BG_Header_T_BG_Types_Pkg *bgHeader)
{
  (*bgHeader).valid = (*trackSideForCheck).valid;
  (*bgHeader).q_updown =
    (*trackSideForCheck).telegramHeaders.Telegrams[0].telegramheader.q_updown;
  (*bgHeader).m_version =
    (*trackSideForCheck).telegramHeaders.Telegrams[0].telegramheader.m_version;
  (*bgHeader).q_media =
    (*trackSideForCheck).telegramHeaders.Telegrams[0].telegramheader.q_media;
  (*bgHeader).n_total =
    (*trackSideForCheck).telegramHeaders.Telegrams[0].telegramheader.n_total;
  (*bgHeader).m_mcount =
    (*trackSideForCheck).telegramHeaders.Telegrams[0].telegramheader.m_mcount;
  (*bgHeader).nid_c =
    (*trackSideForCheck).telegramHeaders.Telegrams[0].telegramheader.nid_c;
  (*bgHeader).nid_bg =
    (*trackSideForCheck).telegramHeaders.Telegrams[0].telegramheader.nid_bg;
  (*bgHeader).q_link =
    (*trackSideForCheck).telegramHeaders.Telegrams[0].telegramheader.q_link;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &(*bgHeader).bgPosition,
    &(*trackSideForCheck).telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &(*bgHeader).BG_centerDetectionInaccuraccuracies,
    &(*trackSideForCheck).telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies);
  (*bgHeader).q_nvlocacc = q_nvlocacc;
  (*bgHeader).noCoordinateSystemHasBeenAssigned = kcg_false;
  (*bgHeader).trainOrientationToBG = cQDirLRBGunknown_CheckBGConsistency_Pkg;
  (*bgHeader).trainRunningDirectionToBG = cQqDirTrain_CheckBGConsistency_Pkg;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** bildBGHeader_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

