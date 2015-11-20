/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Msg155ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentHeader */
kcg_bool Msg155ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentHeader::inRadioTrainTrackHeader */ Radio_TrainTrack_Header_T_Radio_Types_Pkg *inRadioTrainTrackHeader)
{
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentHeader::_L8 */
  static kcg_bool _L8;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentHeader::_L7 */
  static T_TRAIN _L7;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentHeader::_L6 */
  static kcg_bool _L6;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentHeader::_L5 */
  static Q_MARQSTREASON _L5;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentHeader::_L4 */
  static Q_MARQSTREASON _L4;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentHeader::_L3 */
  static T_TRAIN _L3;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentHeader::_L2 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L2;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentHeader::_L1 */
  static kcg_bool _L1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentHeader::outIsConsistent */
  static kcg_bool outIsConsistent;
  
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &_L2,
    inRadioTrainTrackHeader);
  _L4 = /* 1 */
    RadioTrainTrackHeader__Get_Q_MARQSTREASON_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
      &_L2);
  _L5 = Q_MARQSTREASON_DEFAULT;
  _L1 = _L4 == _L5;
  _L3 = /* 1 */
    RadioTrainTrackHeader__Get_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
      &_L2);
  _L7 = T_TRAIN_MIN;
  _L6 = _L3 == _L7;
  _L8 = _L6 & _L1;
  outIsConsistent = _L8;
  return outIsConsistent;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Msg155ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

