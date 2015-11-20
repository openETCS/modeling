/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosReport_Supervision_ProvidePositionReport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void PosReport_Supervision_init_ProvidePositionReport_Pkg(
  outC_PosReport_Supervision_ProvidePositionReport_Pkg *outC)
{
  outC->trigger = kcg_true;
  /* 1 */ Supervise_Events_init_ProvidePositionReport_Pkg(&outC->Context_1);
  /* Supervise_PosRepParam */
  Supervise_PosRepParam_init_ProvidePositionReport_Pkg(
    &outC->Context_Supervise_PosRepParam);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void PosReport_Supervision_reset_ProvidePositionReport_Pkg(
  outC_PosReport_Supervision_ProvidePositionReport_Pkg *outC)
{
  /* 1 */ Supervise_Events_reset_ProvidePositionReport_Pkg(&outC->Context_1);
  /* Supervise_PosRepParam */
  Supervise_PosRepParam_reset_ProvidePositionReport_Pkg(
    &outC->Context_Supervise_PosRepParam);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::PosReport_Supervision */
void PosReport_Supervision_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::PosReport_Supervision::present */ kcg_bool present,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::posRepParam */ P58_PositionReportParameters_T_Packet_Types_Pkg *posRepParam,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::systemTime */ SystemTime_T_ProvidePositionReport_Pkg systemTime,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::rbcComm */ RBC_Communication_T_ProvidePositionReport_Pkg *rbcComm,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::trackInfo */ LocationBasedEvents_T_ProvidePositionReport_Pkg *trackInfo,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::train2trackStatus */ TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::modeLevelStatus */ ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::posBGs */ positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  outC_PosReport_Supervision_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::PosReport_Supervision */
  static kcg_bool op_call;
  /* ProvidePositionReport_Pkg::PosReport_Supervision */
  static kcg_bool ck_every;
  /* ProvidePositionReport_Pkg::PosReport_Supervision::_L1 */
  static P58_PositionReportParameters_T_Packet_Types_Pkg _L1;
  /* ProvidePositionReport_Pkg::PosReport_Supervision::_L35 */
  static trainPosition_T_TrainPosition_Types_Pck _L35;
  /* ProvidePositionReport_Pkg::PosReport_Supervision::_L36 */
  static positionedBGs_T_TrainPosition_Types_Pck _L36;
  /* ProvidePositionReport_Pkg::PosReport_Supervision::_L43 */
  static kcg_bool _L43;
  /* ProvidePositionReport_Pkg::PosReport_Supervision::_L44 */
  static SystemTime_T_ProvidePositionReport_Pkg _L44;
  /* ProvidePositionReport_Pkg::PosReport_Supervision::_L52 */
  static kcg_bool _L52;
  /* ProvidePositionReport_Pkg::PosReport_Supervision::_L69 */
  static kcg_bool _L69;
  /* ProvidePositionReport_Pkg::PosReport_Supervision::_L70 */
  static kcg_bool _L70;
  /* ProvidePositionReport_Pkg::PosReport_Supervision::_L76 */
  static ModeLevel2PositionReport_T_ProvidePositionReport_Pkg _L76;
  /* ProvidePositionReport_Pkg::PosReport_Supervision::_L77 */
  static odometry_T_Obu_BasicTypes_Pkg _L77;
  /* ProvidePositionReport_Pkg::PosReport_Supervision::_L78 */
  static TrainToTrackStatus_T_BG_Types_Pkg _L78;
  /* ProvidePositionReport_Pkg::PosReport_Supervision::_L79 */
  static RBC_Communication_T_ProvidePositionReport_Pkg _L79;
  /* ProvidePositionReport_Pkg::PosReport_Supervision::_L80 */
  static LocationBasedEvents_T_ProvidePositionReport_Pkg _L80;
  /* ProvidePositionReport_Pkg::PosReport_Supervision::_L81 */
  static kcg_bool _L81;
  /* ProvidePositionReport_Pkg::PosReport_Supervision::_L82 */
  static kcg_bool _L82;
  
  kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(&_L1, posRepParam);
  _L81 = _L1.valid;
  ck_every = _L81;
  _L43 = present;
  _L44 = systemTime;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L35, trainPos);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L36, posBGs);
  /* ck_PosReport_Supervision */ if (ck_every) {
    /* Supervise_PosRepParam */
    Supervise_PosRepParam_ProvidePositionReport_Pkg(
      &_L1,
      _L43,
      _L44,
      &_L35,
      &_L36,
      &outC->Context_Supervise_PosRepParam);
    op_call = outC->Context_Supervise_PosRepParam.trigger;
  }
  _L82 = kcg_false;
  /* ck_PosReport_Supervision */ if (ck_every) {
    _L52 = op_call;
  }
  else {
    _L52 = _L82;
  }
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &_L76,
    modeLevelStatus);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L77, odometry);
  kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg(&_L78, train2trackStatus);
  kcg_copy_RBC_Communication_T_ProvidePositionReport_Pkg(&_L79, rbcComm);
  kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg(&_L80, trackInfo);
  /* 1 */
  Supervise_Events_ProvidePositionReport_Pkg(
    &_L36,
    &_L35,
    &_L76,
    &_L77,
    &_L78,
    &_L79,
    &_L80,
    &outC->Context_1);
  _L69 = outC->Context_1.result;
  _L70 = _L52 | _L69;
  outC->trigger = _L70;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PosReport_Supervision_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

