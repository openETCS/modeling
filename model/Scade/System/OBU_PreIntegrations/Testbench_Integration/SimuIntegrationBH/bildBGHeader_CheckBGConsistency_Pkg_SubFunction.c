/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
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
  static N_PIG noname;
  static M_DUP _1_noname;
  static MsgSource_T_Common_Types_Pkg _2_noname;
  static RadioMessage_T_Radio_Types_Pkg _3_noname;
  static T_internal_Type_Obu_BasicTypes_Pkg _4_noname;
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L2 */
  static BG_Header_T_BG_Types_Pkg _L2;
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L12 */
  static Q_UPDOWN _L12;
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L11 */
  static M_VERSION _L11;
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L10 */
  static Q_MEDIA _L10;
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L9 */
  static N_PIG _L9;
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L8 */
  static N_TOTAL _L8;
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L7 */
  static M_DUP _L7;
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L6 */
  static M_MCOUNT _L6;
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L5 */
  static NID_C _L5;
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L4 */
  static NID_BG _L4;
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L3 */
  static Q_LINK _L3;
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L19 */
  static kcg_bool _L19;
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L18 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L18;
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L17 */
  static MsgSource_T_Common_Types_Pkg _L17;
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L16 */
  static BG_Message_T_BG_Types_Pkg _L16;
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L15 */
  static RadioMessage_T_Radio_Types_Pkg _L15;
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L20 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L20;
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L21 */
  static odometry_T_Obu_BasicTypes_Pkg _L21;
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L22 */
  static kcg_bool _L22;
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L23 */
  static Q_NVLOCACC _L23;
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L25 */
  static Q_DIRLRBG _L25;
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L26 */
  static Q_DIRTRAIN _L26;
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L27 */
  static TelegramHeader_T_BG_Types_Pkg _L27;
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L28 */
  static TrackSide_ForCheck_T_Common_Types_Pkg _L28;
  
  kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(&_L28, trackSideForCheck);
  _L19 = _L28.valid;
  kcg_copy_BG_Message_T_BG_Types_Pkg(&_L16, &_L28.telegramHeaders);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &_L27,
    &_L16.Telegrams[0].telegramheader);
  _L12 = _L27.q_updown;
  _L11 = _L27.m_version;
  _L10 = _L27.q_media;
  _L8 = _L27.n_total;
  _L6 = _L27.m_mcount;
  _L5 = _L27.nid_c;
  _L4 = _L27.nid_bg;
  _L3 = _L27.q_link;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &_L21,
    &_L16.centerOfBalisePosition.odometerOfBaliseDetection);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &_L20,
    &_L16.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies);
  _L23 = q_nvlocacc;
  _L22 = kcg_false;
  _L25 = cQDirLRBGunknown_CheckBGConsistency_Pkg;
  _L26 = cQqDirTrain_CheckBGConsistency_Pkg;
  _L2.valid = _L19;
  _L2.q_updown = _L12;
  _L2.m_version = _L11;
  _L2.q_media = _L10;
  _L2.n_total = _L8;
  _L2.m_mcount = _L6;
  _L2.nid_c = _L5;
  _L2.nid_bg = _L4;
  _L2.q_link = _L3;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L2.bgPosition, &_L21);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &_L2.BG_centerDetectionInaccuraccuracies,
    &_L20);
  _L2.q_nvlocacc = _L23;
  _L2.noCoordinateSystemHasBeenAssigned = _L22;
  _L2.trainOrientationToBG = _L25;
  _L2.trainRunningDirectionToBG = _L26;
  kcg_copy_BG_Header_T_BG_Types_Pkg(bgHeader, &_L2);
  _L7 = _L27.m_dup;
  _L9 = _L27.n_pig;
  kcg_copy_RadioMessage_T_Radio_Types_Pkg(&_L15, &_L28.radio_Msg);
  _L17 = _L28.msg_type;
  _L18 = _L28.systemTime;
  noname = _L9;
  _1_noname = _L7;
  _2_noname = _L17;
  kcg_copy_RadioMessage_T_Radio_Types_Pkg(&_3_noname, &_L15);
  _4_noname = _L18;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** bildBGHeader_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

