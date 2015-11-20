/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Msg147ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg147ConsistencyChecker__HasConsistentHeader */
kcg_bool Msg147ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg147ConsistencyChecker__HasConsistentHeader::inRadioTrainTrackHeader */ Radio_TrainTrack_Header_T_Radio_Types_Pkg *inRadioTrainTrackHeader)
{
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg noname;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg147ConsistencyChecker__HasConsistentHeader::_L7 */
  static kcg_bool _L7;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg147ConsistencyChecker__HasConsistentHeader::_L8 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L8;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg147ConsistencyChecker__HasConsistentHeader::outIsConsistent */
  static kcg_bool outIsConsistent;
  
  _L7 = kcg_true;
  outIsConsistent = _L7;
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &_L8,
    inRadioTrainTrackHeader);
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(&noname, &_L8);
  return outIsConsistent;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Msg147ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

