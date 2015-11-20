/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainPacket058__Set_M_LOC_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPac.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_M_LOC */
void RadioTrackTrainPacket058__Set_M_LOC_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPac(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_M_LOC::inRadioTrackTrainPacket */ P058_trackside_int_T_TM *inRadioTrackTrainPacket,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_M_LOC::in_M_LOC */ M_LOC in_M_LOC,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_M_LOC::outRadioTrackTrainPacket */ P058_trackside_int_T_TM *outRadioTrackTrainPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_M_LOC::_L1 */
  static P058_trackside_int_T_TM _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_M_LOC::_L2 */
  static M_LOC _L2;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_M_LOC::_L3 */
  static P058_trackside_int_T_TM _L3;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_M_LOC::_L4 */
  static kcg_int _L4;
  
  kcg_copy_P058_trackside_int_T_TM(&_L1, inRadioTrackTrainPacket);
  _L2 = in_M_LOC;
  _L4 = /* 1 */ CAST_M_LOC_to_int_TM_conversions(_L2);
  kcg_copy_P058_trackside_int_T_TM(&_L3, &_L1);
  if (kcg_true) {
    _L3.M_LOC = _L4;
  }
  kcg_copy_P058_trackside_int_T_TM(outRadioTrackTrainPacket, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainPacket058__Set_M_LOC_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPac.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

