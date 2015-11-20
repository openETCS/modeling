/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessage__IsValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__IsValid */
kcg_bool RadioTrackTrainMessage__IsValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__IsValid::inRadioTrackTrainMessage */CompressedRadioMessage_TM *inRadioTrackTrainMessage)
{
  static NID_MESSAGE tmp1;
  static Radio_TrackTrain_Header_T_TM tmp;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__IsValid::outIsValid */
  static kcg_bool outIsValid;
  
  /* 1 */
  RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    inRadioTrackTrainMessage,
    &tmp);
  tmp1 = /* 1 */
    RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
      &tmp);
  if (tmp1 > 0) {
    outIsValid = kcg_true;
  }
  else {
    outIsValid = kcg_false;
  }
  return outIsValid;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrackTrainMessage__IsValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

