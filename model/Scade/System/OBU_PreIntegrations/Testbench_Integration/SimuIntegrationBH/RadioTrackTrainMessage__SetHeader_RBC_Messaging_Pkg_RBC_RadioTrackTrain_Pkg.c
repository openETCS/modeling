/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessage__SetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__SetHeader */
void RadioTrackTrainMessage__SetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__SetHeader::inRadioTrackTrainMessage */ CompressedRadioMessage_TM *inRadioTrackTrainMessage,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__SetHeader::inRadioTrackTrainHeader */ Radio_TrackTrain_Header_T_TM *inRadioTrackTrainHeader,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__SetHeader::outRadioTrackTrainMessage */ CompressedRadioMessage_TM *outRadioTrackTrainMessage)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__SetHeader::_L1 */
  static CompressedRadioMessage_TM _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__SetHeader::_L2 */
  static CompressedRadioMessage_TM _L2;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__SetHeader::_L3 */
  static Radio_TrackTrain_Header_T_TM _L3;
  
  kcg_copy_CompressedRadioMessage_TM(&_L2, inRadioTrackTrainMessage);
  kcg_copy_Radio_TrackTrain_Header_T_TM(&_L3, inRadioTrackTrainHeader);
  kcg_copy_CompressedRadioMessage_TM(&_L1, &_L2);
  if (kcg_true) {
    kcg_copy_Radio_TrackTrain_Header_T_TM(&_L1.Header, &_L3);
  }
  kcg_copy_CompressedRadioMessage_TM(outRadioTrackTrainMessage, &_L1);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainMessage__SetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

