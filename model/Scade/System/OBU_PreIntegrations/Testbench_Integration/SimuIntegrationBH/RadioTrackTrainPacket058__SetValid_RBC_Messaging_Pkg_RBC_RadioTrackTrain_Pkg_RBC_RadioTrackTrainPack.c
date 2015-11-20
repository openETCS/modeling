/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainPacket058__SetValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPack.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetValid */
void RadioTrackTrainPacket058__SetValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPack(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetValid::inRadioTrackTrainPacket */ P058_trackside_int_T_TM *inRadioTrackTrainPacket,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetValid::inIsValid */ kcg_bool inIsValid,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetValid::outRadioTrackTrainPacket */ P058_trackside_int_T_TM *outRadioTrackTrainPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetValid::_L1 */
  static P058_trackside_int_T_TM _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetValid::_L2 */
  static kcg_bool _L2;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetValid::_L3 */
  static P058_trackside_int_T_TM _L3;
  
  kcg_copy_P058_trackside_int_T_TM(&_L1, inRadioTrackTrainPacket);
  _L2 = inIsValid;
  kcg_copy_P058_trackside_int_T_TM(&_L3, &_L1);
  if (kcg_true) {
    _L3.valid = _L2;
  }
  kcg_copy_P058_trackside_int_T_TM(outRadioTrackTrainPacket, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainPacket058__SetValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPack.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

