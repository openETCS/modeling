/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader */
void RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader::inRadioTrackTrainMessage */ CompressedRadioMessage_TM *inRadioTrackTrainMessage,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader::outRadioTrackTrainHeader */ Radio_TrackTrain_Header_T_TM *outRadioTrackTrainHeader)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader::_L1 */
  static CompressedRadioMessage_TM _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader::_L2 */
  static Radio_TrackTrain_Header_T_TM _L2;
  
  kcg_copy_CompressedRadioMessage_TM(&_L1, inRadioTrackTrainMessage);
  kcg_copy_Radio_TrackTrain_Header_T_TM(&_L2, &_L1.Header);
  kcg_copy_Radio_TrackTrain_Header_T_TM(outRadioTrackTrainHeader, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

