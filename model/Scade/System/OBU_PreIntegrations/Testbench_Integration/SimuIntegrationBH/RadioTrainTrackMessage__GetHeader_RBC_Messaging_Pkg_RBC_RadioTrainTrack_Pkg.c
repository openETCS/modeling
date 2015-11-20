/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader */
void RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader::outRadioTrainTrackHeader */ Radio_TrainTrack_Header_T_Radio_Types_Pkg *outRadioTrainTrackHeader)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader::_L1 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader::_L2 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L2;
  
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &_L1,
    inRadioTrainTrackMessage);
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(&_L2, &_L1.header);
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    outRadioTrainTrackHeader,
    &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

