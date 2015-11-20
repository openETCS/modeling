/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage */
void BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::trackSideForCheck */ TrackSide_ForCheck_T_Common_Types_Pkg *trackSideForCheck,
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::q_nvlocacc */ Q_NVLOCACC q_nvlocacc,
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::checkedMessage */ ReceivedMessage_T_Common_Types_Pkg *checkedMessage)
{
  static kcg_int noname;
  static centerOfBalisePosition_T_BG_Types_Pkg _1_noname;
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::_L38 */
  static MsgSource_T_Common_Types_Pkg _L38;
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::_L40 */
  static ReceivedMessage_T_Common_Types_Pkg _L40;
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::_L44 */
  static kcg_bool _L44;
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::_L43 */
  static TelegramArray_T_BG_Types_Pkg _L43;
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::_L42 */
  static kcg_int _L42;
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::_L41 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L41;
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::_L46 */
  static RadioMetadata_T_Common_Types_Pkg _L46;
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::_L59 */
  static BG_Header_T_BG_Types_Pkg _L59;
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::_L60 */
  static TrackSide_ForCheck_T_Common_Types_Pkg _L60;
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::_L61 */
  static Q_NVLOCACC _L61;
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::_L62 */
  static TrackSide_ForCheck_T_Common_Types_Pkg _L62;
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::_L63 */
  static BG_Message_T_BG_Types_Pkg _L63;
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::_L66 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L66;
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::_L82 */
  static Telegram_T_BG_Types_Pkg _L82;
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::_L84 */
  static CompressedPackets_T_Common_Types_Pkg _L84;
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::_L85 */
  static RBC_Id_T_Common_Types_Pkg _L85;
  
  kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(&_L62, trackSideForCheck);
  kcg_copy_BG_Message_T_BG_Types_Pkg(&_L63, &_L62.telegramHeaders);
  _L44 = _L63.present;
  _L38 = cEurobalise_CheckBGConsistency_Pkg;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &_L46,
    (RadioMetadata_T_Common_Types_Pkg *)
      &cRadioMetadata_CheckBGConsistency_Pkg);
  kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(&_L60, trackSideForCheck);
  _L61 = q_nvlocacc;
  /* 1 */ bildBGHeader_CheckBGConsistency_Pkg_SubFunction(&_L60, _L61, &_L59);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L66,
    (Radio_TrackTrain_Header_T_Radio_Types_Pkg *)
      &cNoRadioHeader_CheckBGConsistency_Pkg);
  kcg_copy_TelegramArray_T_BG_Types_Pkg(&_L43, &_L63.Telegrams);
  /* 1 */
  MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction(
    &_L43,
    &_L82);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L84, &_L82.packets);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(
    &_L85,
    (RBC_Id_T_Common_Types_Pkg *) &cSendingRBC_CheckBGConsistency_Pkg);
  _L40.valid = _L44;
  _L40.source = _L38;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&_L40.radioMetadata, &_L46);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L40.BG_Common_Header, &_L59);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L40.Radio_Common_Header,
    &_L66);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L40.packets, &_L84);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L40.sendingRBC, &_L85);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(checkedMessage, &_L40);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &_L41,
    &_L63.centerOfBalisePosition);
  _L42 = _L63.numberBalises;
  noname = _L42;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&_1_noname, &_L41);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

