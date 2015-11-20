/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _PosReport_Supervision_ProvidePositionReport_Pkg_H_
#define _PosReport_Supervision_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "Supervise_PosRepParam_ProvidePositionReport_Pkg.h"
#include "Supervise_Events_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::PosReport_Supervision::trigger */ trigger;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Supervise_Events_ProvidePositionReport_Pkg /* 1 */ Context_1;
  outC_Supervise_PosRepParam_ProvidePositionReport_Pkg /* Supervise_PosRepParam */ Context_Supervise_PosRepParam;
  /* ----------------- no clocks of observable data ------------------ */
} outC_PosReport_Supervision_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::PosReport_Supervision */
extern void PosReport_Supervision_ProvidePositionReport_Pkg(
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
  outC_PosReport_Supervision_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void PosReport_Supervision_reset_ProvidePositionReport_Pkg(
  outC_PosReport_Supervision_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void PosReport_Supervision_init_ProvidePositionReport_Pkg(
  outC_PosReport_Supervision_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _PosReport_Supervision_ProvidePositionReport_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** PosReport_Supervision_ProvidePositionReport_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

