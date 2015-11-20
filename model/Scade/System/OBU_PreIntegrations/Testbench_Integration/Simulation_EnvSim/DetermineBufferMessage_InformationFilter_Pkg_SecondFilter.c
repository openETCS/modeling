/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DetermineBufferMessage_InformationFilter_Pkg_SecondFilter.h"

/* InformationFilter_Pkg::SecondFilter::DetermineBufferMessage */
void DetermineBufferMessage_InformationFilter_Pkg_SecondFilter(
  /* InformationFilter_Pkg::SecondFilter::DetermineBufferMessage::messageForFilter2 */ReceivedMessage_T_Common_Types_Pkg *messageForFilter2,
  /* InformationFilter_Pkg::SecondFilter::DetermineBufferMessage::inMessageForBuffer */ReceivedMessage_T_Common_Types_Pkg *inMessageForBuffer,
  /* InformationFilter_Pkg::SecondFilter::DetermineBufferMessage::outMessageForBuffer */ReceivedMessage_T_Common_Types_Pkg *outMessageForBuffer)
{
  static array__155012 tmp;
  static kcg_int i;
  
  (*outMessageForBuffer).valid = (*messageForFilter2).valid;
  (*outMessageForBuffer).source = (*messageForFilter2).source;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &(*outMessageForBuffer).radioMetadata,
    &(*messageForFilter2).radioMetadata);
  kcg_copy_BG_Header_T_BG_Types_Pkg(
    &(*outMessageForBuffer).BG_Common_Header,
    &(*messageForFilter2).BG_Common_Header);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &(*outMessageForBuffer).Radio_Common_Header,
    &(*messageForFilter2).Radio_Common_Header);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(
    &(*outMessageForBuffer).sendingRBC,
    &(*messageForFilter2).sendingRBC);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &(*outMessageForBuffer).packets,
    &(*messageForFilter2).packets);
  for (i = 0; i < 30; i++) {
    /* DetermineValidFlags */
    DetermineValidFlags_InformationFilter_Pkg_SecondFilter(
      &(*messageForFilter2).packets.PacketHeaders[i],
      &(*inMessageForBuffer).packets.PacketHeaders[i],
      &tmp[i]);
  }
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &(*outMessageForBuffer).packets.PacketHeaders,
    &tmp);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DetermineBufferMessage_InformationFilter_Pkg_SecondFilter.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

