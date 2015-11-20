/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _RBC__ProcessModeAndLevel_RBC_Model_Pkg_H_
#define _RBC__ProcessModeAndLevel_RBC_Model_Pkg_H_

#include "kcg_types.h"
#include "RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackPackets__GetP001_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackPackets__GetP000_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_MODE /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::out_mode */ out_mode;
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::out_modeChanged */ out_modeChanged;
  M_LEVEL /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::out_level */ out_level;
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::out_levelChanged */ out_levelChanged;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  M_MODE /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::mode */ mode;
  M_LEVEL /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::level */ level;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_RBC__ProcessModeAndLevel_RBC_Model_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::RBC__ProcessModeAndLevel */
extern void RBC__ProcessModeAndLevel_RBC_Model_Pkg(
  /* RBC_Model_Pkg::RBC__ProcessModeAndLevel::inTrainTrackMessage */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inTrainTrackMessage,
  outC_RBC__ProcessModeAndLevel_RBC_Model_Pkg *outC);

extern void RBC__ProcessModeAndLevel_reset_RBC_Model_Pkg(
  outC_RBC__ProcessModeAndLevel_RBC_Model_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void RBC__ProcessModeAndLevel_init_RBC_Model_Pkg(
  outC_RBC__ProcessModeAndLevel_RBC_Model_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _RBC__ProcessModeAndLevel_RBC_Model_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** RBC__ProcessModeAndLevel_RBC_Model_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

