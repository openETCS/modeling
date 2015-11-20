/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessage__IsValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__IsValid */
kcg_bool RadioTrackTrainMessage__IsValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__IsValid::inRadioTrackTrainMessage */ CompressedRadioMessage_TM *inRadioTrackTrainMessage)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__IsValid::_L1 */
  static CompressedRadioMessage_TM _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__IsValid::_L2 */
  static Radio_TrackTrain_Header_T_TM _L2;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__IsValid::_L3 */
  static NID_MESSAGE _L3;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__IsValid::_L4 */
  static kcg_bool _L4;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__IsValid::_L5 */
  static kcg_bool _L5;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__IsValid::_L6 */
  static kcg_int _L6;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__IsValid::_L7 */
  static kcg_bool _L7;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__IsValid::_L8 */
  static kcg_bool _L8;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__IsValid::outIsValid */
  static kcg_bool outIsValid;
  
  kcg_copy_CompressedRadioMessage_TM(&_L1, inRadioTrackTrainMessage);
  /* 1 */
  RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &_L1,
    &_L2);
  _L3 = /* 1 */
    RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
      &_L2);
  _L6 = 0;
  _L5 = _L3 > _L6;
  _L7 = kcg_true;
  _L8 = kcg_false;
  /* 1 */ if (_L5) {
    _L4 = _L7;
  }
  else {
    _L4 = _L8;
  }
  outIsValid = _L4;
  return outIsValid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainMessage__IsValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

