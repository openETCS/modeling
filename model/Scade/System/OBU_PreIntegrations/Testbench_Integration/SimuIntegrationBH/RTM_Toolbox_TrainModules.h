/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _RTM_Toolbox_TrainModules_H_
#define _RTM_Toolbox_TrainModules_H_

#include "kcg_types.h"
#include "C_Int_TrackTrainMessage_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  API_TrackSideInput_T_API_Msg_Pkg /* Toolbox::TrainModules::RTM::TrackMessage */ TrackMessage;
  mobileHWStatus_Type_MoRC_Pck /* Toolbox::TrainModules::RTM::mobileHWStatus */ mobileHWStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init1;
  kcg_bool init;
  kcg_bool init2;
  /* ----------------------- local memories  ------------------------- */
  struct_169236 /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement::Registering::_L2 */ fby__L2_GSM_R_MobileManagement_Registering;
  struct_169236 /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement::Connecting::_L2 */ fby__L2_GSM_R_MobileManagement_Connecting;
  SSM_ST_GSM_R_MobileManagement /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */ GSM_R_MobileManagement_state_nxt;
  kcg_bool /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */ GSM_R_MobileManagement_reset_act;
  kcg_bool /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */ GSM_R_MobileManagement_reset_nxt;
  kcg_bool /* Toolbox::TrainModules::RTM::registrationFinished */ registrationFinished;
  kcg_bool /* Toolbox::TrainModules::RTM::connectionEstablished */ connectionEstablished;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_RTM_Toolbox_TrainModules;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::TrainModules::RTM */
extern void RTM_Toolbox_TrainModules(
  /* Toolbox::TrainModules::RTM::systemTime */ T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* Toolbox::TrainModules::RTM::Packets */ CompressedPackets_T_Common_Types_Pkg *Packets,
  /* Toolbox::TrainModules::RTM::RadioHeader */ Radio_TrackTrain_Header_T_TM *RadioHeader,
  /* Toolbox::TrainModules::RTM::RadioManagementMessage */ RadioManagement_T_API_RadioCommunication_Pkg *RadioManagementMessage,
  outC_RTM_Toolbox_TrainModules *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RTM_reset_Toolbox_TrainModules(outC_RTM_Toolbox_TrainModules *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RTM_init_Toolbox_TrainModules(outC_RTM_Toolbox_TrainModules *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _RTM_Toolbox_TrainModules_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** RTM_Toolbox_TrainModules.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

