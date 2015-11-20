/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FirstFilter_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::FirstFilter */
void FirstFilter_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inLevel */M_LEVEL inLevel,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inFilterEvents */filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::messageForFilter2 */ReceivedMessage_T_Common_Types_Pkg *messageForFilter2,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::messageForBuffer */ReceivedMessage_T_Common_Types_Pkg *messageForBuffer,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::storeInBuffer1 */kcg_bool *storeInBuffer1)
{
  static kcg_int tmp_1;
  static array__155012 tmp;
  static kcg_int i;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L1 */
  static array_bool_30 _L1;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L114 */
  static array_bool_30 _L114;
  
  *storeInBuffer1 = kcg_false;
  (*messageForFilter2).valid = (*inMessage).valid;
  (*messageForFilter2).source = (*inMessage).source;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &(*messageForFilter2).radioMetadata,
    &(*inMessage).radioMetadata);
  kcg_copy_BG_Header_T_BG_Types_Pkg(
    &(*messageForFilter2).BG_Common_Header,
    &(*inMessage).BG_Common_Header);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &(*messageForFilter2).Radio_Common_Header,
    &(*inMessage).Radio_Common_Header);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(
    &(*messageForFilter2).sendingRBC,
    &(*inMessage).sendingRBC);
  (*messageForBuffer).valid = (*inMessage).valid;
  (*messageForBuffer).source = (*inMessage).source;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &(*messageForBuffer).radioMetadata,
    &(*inMessage).radioMetadata);
  kcg_copy_BG_Header_T_BG_Types_Pkg(
    &(*messageForBuffer).BG_Common_Header,
    &(*inMessage).BG_Common_Header);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &(*messageForBuffer).Radio_Common_Header,
    &(*inMessage).Radio_Common_Header);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(
    &(*messageForBuffer).sendingRBC,
    &(*inMessage).sendingRBC);
  for (i = 0; i < 30; i++) {
    tmp_1 = /* 1 */
      GetPacketId_InformationFilter_Pkg_Common(
        &(*inMessage).packets.PacketHeaders[i]);
    /* 1 */
    LevelFilter_InformationFilter_Pkg_FirstFilter(
      (*inFilterEvents).pendingL1Transition,
      (*inFilterEvents).pendingL12L3Transition,
      (*inFilterEvents).pendingAckOfTrainDataFromRBC,
      (*inFilterEvents).emergencyStopAccepted,
      (*inFilterEvents).lastAckTextMessageId,
      (*inFilterEvents).pendingNTCTransition,
      (*inFilterEvents).SPPAndGradientOnBoard,
      (*inFilterEvents).MACoverNotFullLength,
      inLevel,
      (*inMessage).source,
      tmp_1,
      &_L114[i],
      &_L1[i]);
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &(*messageForBuffer).packets,
    &(*inMessage).packets);
  for (i = 0; i < 30; i++) {
    /* 1 */
    SetValidFlag_InformationFilter_Pkg_Common(
      _L114[i],
      &(*inMessage).packets.PacketHeaders[i],
      &tmp[i]);
  }
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &(*messageForBuffer).packets.PacketHeaders,
    &tmp);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &(*messageForFilter2).packets,
    &(*inMessage).packets);
  for (i = 0; i < 30; i++) {
    /* 2 */
    SetValidFlag_InformationFilter_Pkg_Common(
      _L1[i],
      &(*inMessage).packets.PacketHeaders[i],
      &tmp[i]);
    *storeInBuffer1 = *storeInBuffer1 | _L114[i];
  }
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &(*messageForFilter2).packets.PacketHeaders,
    &tmp);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FirstFilter_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

