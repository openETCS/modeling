/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BuildOutput.h"

/* BuildOutput */
void BuildOutput(
  /* BuildOutput::message */ ReceivedMessage_T_Common_Types_Pkg *message,
  /* BuildOutput::valid */ kcg_bool valid,
  /* BuildOutput::ReceivedMessage */ ReceivedMessage_T_Common_Types_Pkg *ReceivedMessage)
{
  (*ReceivedMessage).valid = !(*message).valid & valid;
  (*ReceivedMessage).source = (*message).source;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &(*ReceivedMessage).radioMetadata,
    &(*message).radioMetadata);
  kcg_copy_BG_Header_T_BG_Types_Pkg(
    &(*ReceivedMessage).BG_Common_Header,
    &(*message).BG_Common_Header);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &(*ReceivedMessage).Radio_Common_Header,
    &(*message).Radio_Common_Header);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &(*ReceivedMessage).packets,
    &(*message).packets);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** BuildOutput.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

