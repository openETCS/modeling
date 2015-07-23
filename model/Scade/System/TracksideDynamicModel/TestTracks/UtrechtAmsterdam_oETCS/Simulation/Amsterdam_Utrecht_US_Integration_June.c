/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_US_Integration_June.h"

void Amsterdam_Utrecht_reset_US_Integration_June(void)
{
  /* 1 */
  CASTLIB_BaliseHeaders_reset_TM_conversions(
    &Ctxt_Amsterdam_Utrecht_US_Integration_June._2_Context_1);
  /* 1 */
  Amsterdam_Utrecht_RBC_Int_reset_US_Integration_June(
    &Ctxt_Amsterdam_Utrecht_US_Integration_June._1_Context_1);
  /* 1 */
  Amsterdam_Utrecht_Lijn1_b_reset_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
    &Ctxt_Amsterdam_Utrecht_US_Integration_June.Context_1);
}

/* US_Integration_June::Amsterdam_Utrecht */
void Amsterdam_Utrecht_US_Integration_June(void)
{
  Ctxt_Amsterdam_Utrecht_US_Integration_June._L2 = TrainPos;
  /* 1 */
  Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
    Ctxt_Amsterdam_Utrecht_US_Integration_June._L2,
    &Ctxt_Amsterdam_Utrecht_US_Integration_June.Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &Ctxt_Amsterdam_Utrecht_US_Integration_June._L1,
    &Ctxt_Amsterdam_Utrecht_US_Integration_June.Context_1.BaliseMessage);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &Ctxt_Amsterdam_Utrecht_US_Integration_June._L6,
    &Ctxt_Amsterdam_Utrecht_US_Integration_June._L1.Messages);
  Ctxt_Amsterdam_Utrecht_US_Integration_June._L13 = Trigger_in;
  /* 1 */
  Amsterdam_Utrecht_RBC_Int_US_Integration_June(
    Ctxt_Amsterdam_Utrecht_US_Integration_June._L13,
    &Ctxt_Amsterdam_Utrecht_US_Integration_June._1_Context_1);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &Ctxt_Amsterdam_Utrecht_US_Integration_June._L8,
    &Ctxt_Amsterdam_Utrecht_US_Integration_June._1_Context_1.RadioTrackTrainHeader_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &Ctxt_Amsterdam_Utrecht_US_Integration_June._L9,
    &Ctxt_Amsterdam_Utrecht_US_Integration_June._1_Context_1.Compressed_Packets_out);
  kcg_copy_CompressedRadioMessage_TM(
    &Ctxt_Amsterdam_Utrecht_US_Integration_June._L10,
    &Ctxt_Amsterdam_Utrecht_US_Integration_June._1_Context_1.Compressed_Radio_Message_out);
  kcg_copy_CompressedRadioMessage_TM(
    &Compressed_Radio_Message_out,
    &Ctxt_Amsterdam_Utrecht_US_Integration_June._L10);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &Compressed_Packets_out,
    &Ctxt_Amsterdam_Utrecht_US_Integration_June._L9);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &RadioTrackTrainHeader_out,
    &Ctxt_Amsterdam_Utrecht_US_Integration_June._L8);
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &Ctxt_Amsterdam_Utrecht_US_Integration_June._L5,
    &Ctxt_Amsterdam_Utrecht_US_Integration_June._L1.Header);
  /* 1 */
  CASTLIB_BaliseHeaders_TM_conversions(
    &Ctxt_Amsterdam_Utrecht_US_Integration_June._L5,
    &Ctxt_Amsterdam_Utrecht_US_Integration_June._2_Context_1);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &Ctxt_Amsterdam_Utrecht_US_Integration_June._L7,
    &Ctxt_Amsterdam_Utrecht_US_Integration_June._2_Context_1.Out);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &Balise_Header,
    &Ctxt_Amsterdam_Utrecht_US_Integration_June._L7);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &Balise_Packets,
    &Ctxt_Amsterdam_Utrecht_US_Integration_June._L6);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Amsterdam_Utrecht_US_Integration_June.c
** Generation date: 2015-07-21T17:55:35
*************************************************************$ */

