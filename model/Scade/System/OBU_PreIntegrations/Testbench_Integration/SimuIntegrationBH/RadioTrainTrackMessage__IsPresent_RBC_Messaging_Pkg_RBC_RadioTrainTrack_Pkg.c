/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackMessage__IsPresent_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__IsPresent */
kcg_bool RadioTrainTrackMessage__IsPresent_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__IsPresent::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__IsPresent::_L1 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__IsPresent::_L2 */
  static kcg_bool _L2;
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__IsPresent::outIsPresent */
  static kcg_bool outIsPresent;
  
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &_L1,
    inRadioTrainTrackMessage);
  _L2 = _L1.present;
  outIsPresent = _L2;
  return outIsPresent;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackMessage__IsPresent_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

