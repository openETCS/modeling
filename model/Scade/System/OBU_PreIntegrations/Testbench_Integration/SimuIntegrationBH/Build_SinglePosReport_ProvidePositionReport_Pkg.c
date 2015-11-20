/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_SinglePosReport_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Build_SinglePosReport */
void Build_SinglePosReport_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::errorMsg */ ErrorMessage_T_ProvidePositionReport_Pkg *errorMsg,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::in_packet0 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *in_packet0,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::in_packet1 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *in_packet1,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::t_train */ T_TRAIN t_train,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::posRepHeader */ Radio_TrainTrack_Header_T_Radio_Types_Pkg *posRepHeader,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::packet0 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::packet1 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::packet4 */ PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *packet4,
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::packet5 */ PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *packet5)
{
  /* ProvidePositionReport_Pkg::Build_SinglePosReport */
  static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg op_call;
  /* ProvidePositionReport_Pkg::Build_SinglePosReport */
  static kcg_bool ck_every;
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::_L9 */
  static ErrorMessage_T_ProvidePositionReport_Pkg _L9;
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::_L1 */
  static trainProperties_T_TrainPosition_Types_Pck _L1;
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::_L10 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L10;
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::_L15 */
  static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg _L15;
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::_L16 */
  static kcg_bool _L16;
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::_L17 */
  static PT5_TrainRunningNumber_Packet_TrainTypes_Pkg _L17;
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::_L19 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L19;
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::_L20 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L20;
  /* ProvidePositionReport_Pkg::Build_SinglePosReport::_L21 */
  static T_TRAIN _L21;
  
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&_L9, errorMsg);
  _L16 = _L9.present;
  ck_every = _L16;
  /* ck_Build_SinglePosReport */ if (ck_every) {
    /* 1 */ Build_Packet4_ProvidePositionReport_Pkg(&_L9, &op_call);
  }
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&_L19, in_packet0);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(packet0, &_L19);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L1, trainProps);
  /* 1 */ Build_Packet5_ProvidePositionReport_Pkg(&_L1, &_L17);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(packet5, &_L17);
  /* ck_Build_SinglePosReport */ if (ck_every) {
    kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(&_L15, &op_call);
  }
  else {
    kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
      &_L15,
      (PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *)
        &emptyPacket4_ProvidePositionReport_Pkg);
  }
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(packet4, &_L15);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&_L20, in_packet1);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(packet1, &_L20);
  _L21 = t_train;
  /* 1 */ Build_Header_ProvidePositionReport_Pkg(&_L1, _L21, &_L10);
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(posRepHeader, &_L10);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_SinglePosReport_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

