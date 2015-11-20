/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Sheet14_standalone_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"

/* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone */
void Sheet14_standalone_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::TrainPos_in */kcg_real TrainPos_in,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::Trigger_in */kcg_int Trigger_in,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::Packets */CompressedPackets_T_Common_Types_Pkg *Packets,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::Header */TelegramHeader_T_BG_Types_Pkg *Header,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::CompressedBaliseMessage */CompressedBaliseMessage_TM *CompressedBaliseMessage,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::RadioTrackTrainHeader_out */Radio_TrackTrain_Header_T_Radio_Types_Pkg *RadioTrackTrainHeader_out,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::Compressed_Packets_out */CompressedPackets_T_Common_Types_Pkg *Compressed_Packets_out,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::Compressed_Radio_Message_out */CompressedRadioMessage_TM *Compressed_Radio_Message_out)
{
  static TrackSectionData_T_InfraLib tmp3;
  static TrackSectionData_T_InfraLib tmp2;
  static R_data_internal_T_InfraLib tmp1;
  static R_data_internal_T_InfraLib tmp;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::_L10 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L10;
  
  /* 1 */ TrackInit_InfraLib(TrainPos_in, 0, &tmp2);
  /* 2 */ TrackDiscontinuity_InfraLib(&tmp2, 0, 1000, &tmp3);
  /* 1 */
  Sheet14_Balises_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &tmp3,
    &tmp2);
  /* 1 */ TrackDiscontinuity_InfraLib(&tmp2, 27158, 32982, &tmp3);
  /* 1 */
  Sheet14_Maarssen_balises_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &tmp3,
    &tmp2);
  /* 1 */ TrackClose_InfraLib(&tmp2, CompressedBaliseMessage);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    Packets,
    &(*CompressedBaliseMessage).Messages);
  /* 1 */
  RBC_init_RadioLib(
    (M_TrackTrain_Radio_T_TM_radio_messages *)
      &no_message_US_Integration_November,
    (CompressedPackets_T_Common_Types_Pkg *)
      &no_packets_US_Integration_November,
    Trigger_in,
    kcg_false,
    &tmp1);
  /* 1 */
  Sheet14_Radio_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &tmp1,
    &tmp);
  /* 1 */
  RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &tmp,
    &tmp1);
  /* 1 */ RBC_close_RadioLib(&tmp1, &_L10, Compressed_Packets_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &(*Compressed_Radio_Message_out).Messages,
    Compressed_Packets_out);
  /* 1 */
  compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
    &_L10,
    RadioTrackTrainHeader_out);
  /* 1 */
  C_TrackTrainMessage_to_Int_TM_conversions(
    RadioTrackTrainHeader_out,
    &(*Compressed_Radio_Message_out).Header);
  /* 1 */
  CASTLIB_BaliseHeaders_TM_conversions(
    &(*CompressedBaliseMessage).Header,
    Header);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Sheet14_standalone_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.c
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

