/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_US_US_Integration_November.h"

/* US_Integration_November::Amsterdam_Utrecht_US */
void Amsterdam_Utrecht_US_US_Integration_November(
  /* US_Integration_November::Amsterdam_Utrecht_US::TrainPos */ kcg_real TrainPos,
  /* US_Integration_November::Amsterdam_Utrecht_US::Trigger_in */ kcg_int Trigger_in,
  /* US_Integration_November::Amsterdam_Utrecht_US::SelectTrack */ TrackType_US_Integration_November SelectTrack,
  /* US_Integration_November::Amsterdam_Utrecht_US::Balise_Packets */ CompressedPackets_T_Common_Types_Pkg *Balise_Packets,
  /* US_Integration_November::Amsterdam_Utrecht_US::Balise_Header */ TelegramHeader_T_BG_Types_Pkg *Balise_Header,
  /* US_Integration_November::Amsterdam_Utrecht_US::CompressedBaliseMessage */ CompressedBaliseMessage_TM *CompressedBaliseMessage,
  /* US_Integration_November::Amsterdam_Utrecht_US::RadioTrackTrainHeader_out */ Radio_TrackTrain_Header_T_Radio_Types_Pkg *RadioTrackTrainHeader_out,
  /* US_Integration_November::Amsterdam_Utrecht_US::Compressed_Packets_out */ CompressedPackets_T_Common_Types_Pkg *Compressed_Packets_out,
  /* US_Integration_November::Amsterdam_Utrecht_US::Compressed_Radio_Message_out */ CompressedRadioMessage_TM *Compressed_Radio_Message_out)
{
  /* US_Integration_November::Amsterdam_Utrecht_US::_L1 */
  static CompressedBaliseMessage_TM _L1;
  /* US_Integration_November::Amsterdam_Utrecht_US::_L2 */
  static kcg_real _L2;
  /* US_Integration_November::Amsterdam_Utrecht_US::_L6 */
  static CompressedPackets_T_Common_Types_Pkg _L6;
  /* US_Integration_November::Amsterdam_Utrecht_US::_L5 */
  static BaliseTelegramHeader_int_T_TM _L5;
  /* US_Integration_November::Amsterdam_Utrecht_US::_L7 */
  static TelegramHeader_T_BG_Types_Pkg _L7;
  /* US_Integration_November::Amsterdam_Utrecht_US::_L9 */
  static CompressedPackets_T_Common_Types_Pkg _L9;
  /* US_Integration_November::Amsterdam_Utrecht_US::_L8 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L8;
  /* US_Integration_November::Amsterdam_Utrecht_US::_L13 */
  static kcg_int _L13;
  /* US_Integration_November::Amsterdam_Utrecht_US::_L10 */
  static CompressedRadioMessage_TM _L10;
  /* US_Integration_November::Amsterdam_Utrecht_US::_L14 */
  static TrackType_US_Integration_November _L14;
  
  _L2 = TrainPos;
  /* 1 */
  Amsterdam_Utrecht_Lijn1_balises_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
    _L2,
    &_L1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L6, &_L1.Messages);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(Balise_Packets, &_L6);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&_L5, &_L1.Header);
  /* 1 */ CASTLIB_BaliseHeaders_TM_conversions(&_L5, &_L7);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(Balise_Header, &_L7);
  _L13 = Trigger_in;
  _L14 = SelectTrack;
  /* 1 */
  Amsterdam_Utrecht_RBC_Integration_US_Integration_November(
    _L13,
    _L14,
    &_L8,
    &_L9,
    &_L10);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    RadioTrackTrainHeader_out,
    &_L8);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(Compressed_Packets_out, &_L9);
  kcg_copy_CompressedRadioMessage_TM(Compressed_Radio_Message_out, &_L10);
  kcg_copy_CompressedBaliseMessage_TM(CompressedBaliseMessage, &_L1);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Amsterdam_Utrecht_US_US_Integration_November.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

