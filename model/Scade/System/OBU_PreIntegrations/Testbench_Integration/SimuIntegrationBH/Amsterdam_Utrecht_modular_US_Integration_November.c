/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_modular_US_Integration_November.h"

/* US_Integration_November::Amsterdam_Utrecht_modular */
void Amsterdam_Utrecht_modular_US_Integration_November(
  /* US_Integration_November::Amsterdam_Utrecht_modular::TrainPos */ kcg_real TrainPos,
  /* US_Integration_November::Amsterdam_Utrecht_modular::Trigger_in */ kcg_int Trigger_in,
  /* US_Integration_November::Amsterdam_Utrecht_modular::SelectTrack */ TrackType_US_Integration_November SelectTrack,
  /* US_Integration_November::Amsterdam_Utrecht_modular::Balise_Packets */ CompressedPackets_T_Common_Types_Pkg *Balise_Packets,
  /* US_Integration_November::Amsterdam_Utrecht_modular::Balise_Header */ TelegramHeader_T_BG_Types_Pkg *Balise_Header,
  /* US_Integration_November::Amsterdam_Utrecht_modular::CompressedBaliseMessage */ CompressedBaliseMessage_TM *CompressedBaliseMessage,
  /* US_Integration_November::Amsterdam_Utrecht_modular::RadioTrackTrainHeader_out */ Radio_TrackTrain_Header_T_Radio_Types_Pkg *RadioTrackTrainHeader_out,
  /* US_Integration_November::Amsterdam_Utrecht_modular::Compressed_Packets_out */ CompressedPackets_T_Common_Types_Pkg *Compressed_Packets_out,
  /* US_Integration_November::Amsterdam_Utrecht_modular::Compressed_Radio_Message_out */ CompressedRadioMessage_TM *Compressed_Radio_Message_out)
{
  static TrackType_US_Integration_November noname;
  /* US_Integration_November::Amsterdam_Utrecht_modular::_L20 */
  static CompressedRadioMessage_TM _L20;
  /* US_Integration_November::Amsterdam_Utrecht_modular::_L19 */
  static CompressedPackets_T_Common_Types_Pkg _L19;
  /* US_Integration_November::Amsterdam_Utrecht_modular::_L18 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L18;
  /* US_Integration_November::Amsterdam_Utrecht_modular::_L17 */
  static CompressedBaliseMessage_TM _L17;
  /* US_Integration_November::Amsterdam_Utrecht_modular::_L16 */
  static TelegramHeader_T_BG_Types_Pkg _L16;
  /* US_Integration_November::Amsterdam_Utrecht_modular::_L15 */
  static CompressedPackets_T_Common_Types_Pkg _L15;
  /* US_Integration_November::Amsterdam_Utrecht_modular::_L21 */
  static kcg_real _L21;
  /* US_Integration_November::Amsterdam_Utrecht_modular::_L22 */
  static kcg_int _L22;
  /* US_Integration_November::Amsterdam_Utrecht_modular::_L23 */
  static TrackType_US_Integration_November _L23;
  
  _L21 = TrainPos;
  _L22 = Trigger_in;
  /* 1 */
  Sheet14_standalone_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    _L21,
    _L22,
    &_L15,
    &_L16,
    &_L17,
    &_L18,
    &_L19,
    &_L20);
  _L23 = SelectTrack;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(Balise_Packets, &_L15);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(Balise_Header, &_L16);
  kcg_copy_CompressedBaliseMessage_TM(CompressedBaliseMessage, &_L17);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    RadioTrackTrainHeader_out,
    &_L18);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(Compressed_Packets_out, &_L19);
  kcg_copy_CompressedRadioMessage_TM(Compressed_Radio_Message_out, &_L20);
  noname = _L23;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Amsterdam_Utrecht_modular_US_Integration_November.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

