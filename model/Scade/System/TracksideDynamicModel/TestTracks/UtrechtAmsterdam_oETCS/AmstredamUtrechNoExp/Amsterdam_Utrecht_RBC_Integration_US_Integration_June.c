/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/AmstredamUtrechNoExp\kcg_s2c_config.txt
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_RBC_Integration_US_Integration_June.h"

/* US_Integration_June::Amsterdam_Utrecht_RBC_Integration */
void Amsterdam_Utrecht_RBC_Integration_US_Integration_June(
  /* US_Integration_June::Amsterdam_Utrecht_RBC_Integration::Trigger_in */kcg_int _4_Trigger_in,
  /* US_Integration_June::Amsterdam_Utrecht_RBC_Integration::RadioTrackTrainHeader_out */Radio_TrackTrain_Header_T_Radio_Types_Pkg *_3_RadioTrackTrainHeader_out,
  /* US_Integration_June::Amsterdam_Utrecht_RBC_Integration::Compressed_Packets_out */CompressedPackets_T_Common_Types_Pkg *_2_Compressed_Packets_out,
  /* US_Integration_June::Amsterdam_Utrecht_RBC_Integration::Compressed_Radio_Message_out */CompressedRadioMessage_TM *_1_Compressed_Radio_Message_out)
{
  /* US_Integration_June::Amsterdam_Utrecht_RBC_Integration::_L1 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L1;
  
  /* 1 */
  Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
    (M_TrackTrain_Radio_T_TM_radio_messages *) &no_message_US_Integration_June,
    (CompressedPackets_T_Common_Types_Pkg *) &no_packets_US_Integration_June,
    _4_Trigger_in,
    kcg_false,
    &_L1,
    _2_Compressed_Packets_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &(*_1_Compressed_Radio_Message_out).Messages,
    _2_Compressed_Packets_out);
  /* 1 */
  compressed_to_Radio_Track_Train_H_TM_RBC_conversions(
    &_L1,
    _3_RadioTrackTrainHeader_out);
  /* 1 */
  C_TrackTrainMessage_to_Int_TM_conversions(
    _3_RadioTrackTrainHeader_out,
    &(*_1_Compressed_Radio_Message_out).Header);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Amsterdam_Utrecht_RBC_Integration_US_Integration_June.c
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

