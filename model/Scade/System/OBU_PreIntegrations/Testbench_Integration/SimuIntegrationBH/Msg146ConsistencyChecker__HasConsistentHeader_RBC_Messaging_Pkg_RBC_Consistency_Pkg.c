/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Msg146ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg146ConsistencyChecker__HasConsistentHeader */
kcg_bool Msg146ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg146ConsistencyChecker__HasConsistentHeader::inRadioTrainTrackHeader */ Radio_TrainTrack_Header_T_Radio_Types_Pkg *inRadioTrainTrackHeader)
{
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg146ConsistencyChecker__HasConsistentHeader::_L6 */
  static kcg_bool _L6;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg146ConsistencyChecker__HasConsistentHeader::_L5 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L5;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg146ConsistencyChecker__HasConsistentHeader::_L4 */
  static Q_MARQSTREASON _L4;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg146ConsistencyChecker__HasConsistentHeader::_L1 */
  static Q_MARQSTREASON _L1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg146ConsistencyChecker__HasConsistentHeader::outIsConsistent */
  static kcg_bool outIsConsistent;
  
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &_L5,
    inRadioTrainTrackHeader);
  _L1 = /* 1 */
    RadioTrainTrackHeader__Get_Q_MARQSTREASON_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
      &_L5);
  _L4 = Q_MARQSTREASON_DEFAULT;
  _L6 = _L1 == _L4;
  outIsConsistent = _L6;
  return outIsConsistent;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Msg146ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

