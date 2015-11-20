/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainPacket057__Set_T_MAR_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPac.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_T_MAR */
void RadioTrackTrainPacket057__Set_T_MAR_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPac(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_T_MAR::inRadioTrackTrainPacket */ P057_trackside_int_T_TM *inRadioTrackTrainPacket,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_T_MAR::in_T_MAR */ T_MAR in_T_MAR,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_T_MAR::outRadioTrackTrainPacket */ P057_trackside_int_T_TM *outRadioTrackTrainPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_T_MAR::_L2 */
  static P057_trackside_int_T_TM _L2;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_T_MAR::_L3 */
  static T_MAR _L3;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_T_MAR::_L4 */
  static P057_trackside_int_T_TM _L4;
  
  kcg_copy_P057_trackside_int_T_TM(&_L2, inRadioTrackTrainPacket);
  _L3 = in_T_MAR;
  kcg_copy_P057_trackside_int_T_TM(&_L4, &_L2);
  if (kcg_true) {
    _L4.T_MAR = _L3;
  }
  kcg_copy_P057_trackside_int_T_TM(outRadioTrackTrainPacket, &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainPacket057__Set_T_MAR_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPac.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

