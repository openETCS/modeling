/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Supervise_PosRepParam_ProvidePositionReport_Pkg_H_
#define _Supervise_PosRepParam_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "Supervision_N_Iter_ProvidePositionReport_Pkg.h"
#include "Supervision_D_Cycloc_ProvidePositionReport_Pkg.h"
#include "Supervision_T_Cycloc_ProvidePositionReport_Pkg.h"
#include "Supervision_M_Loc_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::Supervise_PosRepParam::trigger */ trigger;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Supervision_M_Loc_ProvidePositionReport_Pkg /* 1 */ _1_Context_1;
  outC_Supervision_T_Cycloc_ProvidePositionReport_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Supervise_PosRepParam_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::Supervise_PosRepParam */
extern void Supervise_PosRepParam_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::posRepParam */ P58_PositionReportParameters_T_Packet_Types_Pkg *posRepParam,
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::present */ kcg_bool present,
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::systemTime */ SystemTime_T_ProvidePositionReport_Pkg systemTime,
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::posBGs */ positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  outC_Supervise_PosRepParam_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Supervise_PosRepParam_reset_ProvidePositionReport_Pkg(
  outC_Supervise_PosRepParam_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Supervise_PosRepParam_init_ProvidePositionReport_Pkg(
  outC_Supervise_PosRepParam_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Supervise_PosRepParam_ProvidePositionReport_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Supervise_PosRepParam_ProvidePositionReport_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

