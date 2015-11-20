/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainPacket057__Set_Q_DIR_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPac.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_Q_DIR */
void RadioTrackTrainPacket057__Set_Q_DIR_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPac(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_Q_DIR::inRadioTrackTrainPacket */ P057_trackside_int_T_TM *inRadioTrackTrainPacket,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_Q_DIR::in_Q_DIR */ Q_DIR in_Q_DIR,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_Q_DIR::outRadioTrackTrainPacket */ P057_trackside_int_T_TM *outRadioTrackTrainPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_Q_DIR::_L1 */
  static P057_trackside_int_T_TM _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_Q_DIR::_L2 */
  static Q_DIR _L2;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_Q_DIR::_L3 */
  static P057_trackside_int_T_TM _L3;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_Q_DIR::_L4 */
  static kcg_int _L4;
  
  kcg_copy_P057_trackside_int_T_TM(&_L1, inRadioTrackTrainPacket);
  _L2 = in_Q_DIR;
  _L4 = /* 1 */ CAST_Q_DIR_to_int_TM_conversions(_L2);
  kcg_copy_P057_trackside_int_T_TM(&_L3, &_L1);
  if (kcg_true) {
    _L3.Q_DIR = _L4;
  }
  kcg_copy_P057_trackside_int_T_TM(outRadioTrackTrainPacket, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainPacket057__Set_Q_DIR_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPac.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

