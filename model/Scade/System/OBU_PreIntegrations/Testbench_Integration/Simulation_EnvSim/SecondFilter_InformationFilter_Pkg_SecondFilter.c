/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SecondFilter_InformationFilter_Pkg_SecondFilter.h"

/* InformationFilter_Pkg::SecondFilter::SecondFilter */
void SecondFilter_InformationFilter_Pkg_SecondFilter(
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::messageForFilter2 */ReceivedMessage_T_Common_Types_Pkg *messageForFilter2,
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::inMessageForBuffer */ReceivedMessage_T_Common_Types_Pkg *inMessageForBuffer,
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::inSupervisingDevice */kcg_int inSupervisingDevice,
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::storeInBuffer2 */kcg_bool *storeInBuffer2,
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::outMessageForBuffer */ReceivedMessage_T_Common_Types_Pkg *outMessageForBuffer,
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::messageForFilter3 */ReceivedMessage_T_Common_Types_Pkg *messageForFilter3)
{
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2 */
  static kcg_bool IfBlock2_clock_IfBlock1;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::messagesForTransitionBuffer */
  static kcg_bool messagesForTransitionBuffer_IfBlock1_IfBlock2_IfBlock3;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3 */
  static kcg_bool IfBlock3_clock_IfBlock1_IfBlock2;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::isFromRBC */
  static kcg_bool isFromRBC;
  
  isFromRBC = (*messageForFilter2).source == msrc_Euroradio_Common_Types_Pkg;
  if (isFromRBC) {
    IfBlock2_clock_IfBlock1 =
      !((*messageForFilter2).Radio_Common_Header.radioDevice ==
        inSupervisingDevice);
    if (IfBlock2_clock_IfBlock1) {
      switch ((*messageForFilter2).Radio_Common_Header.nid_message) {
        case 9 :
          IfBlock3_clock_IfBlock1_IfBlock2 = !kcg_true;
          break;
        case 18 :
          IfBlock3_clock_IfBlock1_IfBlock2 = !kcg_true;
          break;
        
        default :
          IfBlock3_clock_IfBlock1_IfBlock2 = !kcg_false;
      }
      if (IfBlock3_clock_IfBlock1_IfBlock2) {
        switch ((*messageForFilter2).Radio_Common_Header.nid_message) {
          case 8 :
            messagesForTransitionBuffer_IfBlock1_IfBlock2_IfBlock3 = !kcg_true;
            break;
          case 38 :
            messagesForTransitionBuffer_IfBlock1_IfBlock2_IfBlock3 = !kcg_true;
            break;
          case 39 :
            messagesForTransitionBuffer_IfBlock1_IfBlock2_IfBlock3 = !kcg_true;
            break;
          
          default :
            messagesForTransitionBuffer_IfBlock1_IfBlock2_IfBlock3 = !kcg_false;
        }
        if (messagesForTransitionBuffer_IfBlock1_IfBlock2_IfBlock3) {
          *storeInBuffer2 = kcg_true;
          (*messageForFilter3).valid = kcg_false;
          (*messageForFilter3).source = (*messageForFilter2).source;
          kcg_copy_RadioMetadata_T_Common_Types_Pkg(
            &(*messageForFilter3).radioMetadata,
            &(*messageForFilter2).radioMetadata);
          kcg_copy_BG_Header_T_BG_Types_Pkg(
            &(*messageForFilter3).BG_Common_Header,
            &(*messageForFilter2).BG_Common_Header);
          kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
            &(*messageForFilter3).Radio_Common_Header,
            &(*messageForFilter2).Radio_Common_Header);
          kcg_copy_CompressedPackets_T_Common_Types_Pkg(
            &(*messageForFilter3).packets,
            &(*messageForFilter2).packets);
          kcg_copy_RBC_Id_T_Common_Types_Pkg(
            &(*messageForFilter3).sendingRBC,
            &(*messageForFilter2).sendingRBC);
          /* 1 */
          DetermineBufferMessage_InformationFilter_Pkg_SecondFilter(
            messageForFilter2,
            inMessageForBuffer,
            outMessageForBuffer);
        }
        else {
          *storeInBuffer2 = kcg_false;
          kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
            outMessageForBuffer,
            inMessageForBuffer);
          kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
            messageForFilter3,
            messageForFilter2);
        }
      }
      else {
        *storeInBuffer2 = kcg_false;
        (*messageForFilter3).valid = kcg_false;
        (*messageForFilter3).source = (*messageForFilter2).source;
        kcg_copy_RadioMetadata_T_Common_Types_Pkg(
          &(*messageForFilter3).radioMetadata,
          &(*messageForFilter2).radioMetadata);
        kcg_copy_BG_Header_T_BG_Types_Pkg(
          &(*messageForFilter3).BG_Common_Header,
          &(*messageForFilter2).BG_Common_Header);
        kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
          &(*messageForFilter3).Radio_Common_Header,
          &(*messageForFilter2).Radio_Common_Header);
        kcg_copy_CompressedPackets_T_Common_Types_Pkg(
          &(*messageForFilter3).packets,
          &(*messageForFilter2).packets);
        kcg_copy_RBC_Id_T_Common_Types_Pkg(
          &(*messageForFilter3).sendingRBC,
          &(*messageForFilter2).sendingRBC);
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          outMessageForBuffer,
          inMessageForBuffer);
      }
    }
    else {
      *storeInBuffer2 = kcg_false;
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        outMessageForBuffer,
        inMessageForBuffer);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        messageForFilter3,
        messageForFilter2);
    }
  }
  else {
    *storeInBuffer2 = kcg_false;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      outMessageForBuffer,
      inMessageForBuffer);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      messageForFilter3,
      messageForFilter2);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SecondFilter_InformationFilter_Pkg_SecondFilter.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

