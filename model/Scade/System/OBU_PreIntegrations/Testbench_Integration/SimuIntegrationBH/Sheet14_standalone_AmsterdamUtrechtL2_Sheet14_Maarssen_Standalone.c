/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Sheet14_standalone_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"

/* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone */
void Sheet14_standalone_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::TrainPos_in */ kcg_real TrainPos_in,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::Trigger_in */ kcg_int Trigger_in,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::Packets */ CompressedPackets_T_Common_Types_Pkg *Packets,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::Header */ TelegramHeader_T_BG_Types_Pkg *Header,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::CompressedBaliseMessage */ CompressedBaliseMessage_TM *CompressedBaliseMessage,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::RadioTrackTrainHeader_out */ Radio_TrackTrain_Header_T_Radio_Types_Pkg *RadioTrackTrainHeader_out,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::Compressed_Packets_out */ CompressedPackets_T_Common_Types_Pkg *Compressed_Packets_out,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::Compressed_Radio_Message_out */ CompressedRadioMessage_TM *Compressed_Radio_Message_out)
{
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::R_data_local */
  static R_data_internal_T_InfraLib R_data_local;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::B_data_local */
  static TrackSectionData_T_InfraLib B_data_local;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::_L1 */
  static R_data_internal_T_InfraLib _L1;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::_L2 */
  static TrackSectionData_T_InfraLib _L2;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::_L5 */
  static TelegramHeader_T_BG_Types_Pkg _L5;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::_L3 */
  static BaliseTelegramHeader_int_T_TM _L3;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::_L4 */
  static CompressedPackets_T_Common_Types_Pkg _L4;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::_L6 */
  static CompressedBaliseMessage_TM _L6;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::_L9 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L9;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::_L8 */
  static CompressedRadioMessage_TM _L8;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::_L7 */
  static Radio_TrackTrain_Header_T_TM _L7;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::_L11 */
  static CompressedPackets_T_Common_Types_Pkg _L11;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::_L10 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L10;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::_L12 */
  static R_data_internal_T_InfraLib _L12;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::_L13 */
  static TrackSectionData_T_InfraLib _L13;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::_L14 */
  static TrackSectionData_T_InfraLib _L14;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::_L17 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L17;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::_L18 */
  static CompressedPackets_T_Common_Types_Pkg _L18;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::_L19 */
  static kcg_bool _L19;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::_L20 */
  static kcg_int _L20;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::_L23 */
  static TrackSectionData_T_InfraLib _L23;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::_L24 */
  static R_data_internal_T_InfraLib _L24;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::_L25 */
  static kcg_real _L25;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::_L26 */
  static TrackSectionData_T_InfraLib _L26;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::_L27 */
  static R_data_internal_T_InfraLib _L27;
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone::_L28 */
  static TrackSectionData_T_InfraLib _L28;
  
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &_L17,
    (M_TrackTrain_Radio_T_TM_radio_messages *)
      &no_message_US_Integration_November);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &_L18,
    (CompressedPackets_T_Common_Types_Pkg *)
      &no_packets_US_Integration_November);
  _L20 = Trigger_in;
  _L19 = kcg_false;
  /* 1 */ RBC_init_RadioLib(&_L17, &_L18, _L20, _L19, &_L12);
  /* 1 */
  Sheet14_Radio_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &_L12,
    &_L27);
  kcg_copy_R_data_internal_T_InfraLib(&R_data_local, &_L27);
  kcg_copy_R_data_internal_T_InfraLib(&_L24, &R_data_local);
  /* 1 */
  RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &_L24,
    &_L1);
  _L25 = TrainPos_in;
  /* 1 */ TrackInit_InfraLib(_L25, 0, &_L13);
  /* 2 */ TrackDiscontinuity_InfraLib(&_L13, 0, 1000, &_L28);
  /* 1 */
  Sheet14_Balises_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &_L28,
    &_L26);
  /* 1 */ TrackDiscontinuity_InfraLib(&_L26, 27158, 32982, &_L14);
  kcg_copy_TrackSectionData_T_InfraLib(&B_data_local, &_L14);
  kcg_copy_TrackSectionData_T_InfraLib(&_L23, &B_data_local);
  /* 1 */
  Sheet14_Maarssen_balises_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &_L23,
    &_L2);
  /* 1 */ TrackClose_InfraLib(&_L2, &_L6);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L4, &_L6.Messages);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&_L3, &_L6.Header);
  /* 1 */ CASTLIB_BaliseHeaders_TM_conversions(&_L3, &_L5);
  kcg_copy_CompressedBaliseMessage_TM(CompressedBaliseMessage, &_L6);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(Packets, &_L4);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(Header, &_L5);
  /* 1 */ RBC_close_RadioLib(&_L1, &_L10, &_L11);
  /* 1 */
  compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(&_L10, &_L9);
  /* 1 */ C_TrackTrainMessage_to_Int_TM_conversions(&_L9, &_L7);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    RadioTrackTrainHeader_out,
    &_L9);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(Compressed_Packets_out, &_L11);
  kcg_copy_Radio_TrackTrain_Header_T_TM(&_L8.Header, &_L7);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L8.Messages, &_L11);
  kcg_copy_CompressedRadioMessage_TM(Compressed_Radio_Message_out, &_L8);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Sheet14_standalone_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

