/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AggregatePackets_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::AggregatePackets */
void AggregatePackets_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::AggregatePackets::inPacket0 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *inPacket0,
  /* ProvidePositionReport_Pkg::AggregatePackets::inPacket1 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *inPacket1,
  /* ProvidePositionReport_Pkg::AggregatePackets::inPacket4 */ PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *inPacket4,
  /* ProvidePositionReport_Pkg::AggregatePackets::inPacket5 */ PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *inPacket5,
  /* ProvidePositionReport_Pkg::AggregatePackets::outPackets */ outPackets_T_Common_Types_Pkg *outPackets)
{
  /* ProvidePositionReport_Pkg::AggregatePackets::_L4 */
  static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg _L4;
  /* ProvidePositionReport_Pkg::AggregatePackets::_L3 */
  static PT5_TrainRunningNumber_Packet_TrainTypes_Pkg _L3;
  /* ProvidePositionReport_Pkg::AggregatePackets::_L2 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L2;
  /* ProvidePositionReport_Pkg::AggregatePackets::_L1 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L1;
  /* ProvidePositionReport_Pkg::AggregatePackets::_L6 */
  static outPackets_T_Common_Types_Pkg _L6;
  /* ProvidePositionReport_Pkg::AggregatePackets::_L7 */
  static PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg _L7;
  /* ProvidePositionReport_Pkg::AggregatePackets::_L8 */
  static PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg _L8;
  /* ProvidePositionReport_Pkg::AggregatePackets::_L22 */
  static PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg _L22;
  
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(&_L4, inPacket4);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(&_L3, inPacket5);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&_L2, inPacket1);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&_L1, inPacket0);
  kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
    &_L7,
    (PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *)
      &cInitPT3_ProvidePositionReport_Pkg);
  kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
    &_L22,
    (PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg *)
      &cInitPT9_ProvidePositionReport_Pkg);
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
    &_L8,
    (PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *)
      &cInitPT11_ProvidePositionReport_Pkg);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&_L6.p0, &_L1);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&_L6.p1, &_L2);
  kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(&_L6.p3, &_L7);
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(&_L6.p4, &_L4);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(&_L6.p5, &_L3);
  kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
    &_L6.p9,
    &_L22);
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(&_L6.p11, &_L8);
  kcg_copy_outPackets_T_Common_Types_Pkg(outPackets, &_L6);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** AggregatePackets_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

