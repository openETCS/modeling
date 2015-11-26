/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/modeling/test/EnvSim/Scade/Simulation/config.txt
** Generation date: 2015-11-25T10:38:38
*************************************************************$ */
#ifndef _GenAll_EnvSim_Internal_H_
#define _GenAll_EnvSim_Internal_H_

#include "kcg_types.h"
#include "RemoteDMI_EnvSim.h"
#include "ScriptedTrack_EnvSim.h"
#include "RemoteEVC_EnvSim.h"
#include "RemoteGUI_EnvSim.h"
#include "RemoteDMIBus_EnvSim.h"
#include "RemoteEVCBus_EnvSim.h"
#include "ProbeTracksideInput_EnvSim.h"
#include "ProbeSDM_EnvSim.h"
#include "ProbeEVC_EnvSim.h"
#include "InjectRadioMessage_EnvSim.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_InjectRadioMessage_EnvSim /* 1 */ _9_Context_1;
  outC_ProbeEVC_EnvSim /* 1 */ _8_Context_1;
  outC_ProbeSDM_EnvSim /* 1 */ _7_Context_1;
  outC_ProbeTracksideInput_EnvSim /* 1 */ _6_Context_1;
  outC_RemoteEVCBus_EnvSim /* 1 */ _5_Context_1;
  outC_RemoteDMIBus_EnvSim /* 1 */ _4_Context_1;
  outC_RemoteGUI_EnvSim /* 1 */ _3_Context_1;
  outC_RemoteEVC_EnvSim /* 1 */ _2_Context_1;
  outC_ScriptedTrack_EnvSim /* 1 */ _1_Context_1;
  outC_RemoteDMI_EnvSim /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_to_EVC_Message_T_API_DMI_Pkg /* EnvSim::Internal::GenAll::_L1 */ _L1;
  CompressedRadioMessage_TM /* EnvSim::Internal::GenAll::_L3 */ _L3;
  CompressedBaliseMessage_TM /* EnvSim::Internal::GenAll::_L2 */ _L2;
  EVC_to_DMI_Message_T_API_DMI_Pkg /* EnvSim::Internal::GenAll::_L5 */ _L5;
  kcg_real /* EnvSim::Internal::GenAll::_L6 */ _L6;
  EVC_to_DMI_Message_T_API_DMI_Pkg /* EnvSim::Internal::GenAll::_L7 */ _L7;
  DMI_to_EVC_Message_T_API_DMI_Pkg /* EnvSim::Internal::GenAll::_L8 */ _L8;
  TIU_Input_msg_API_TIU_Pkg /* EnvSim::Internal::GenAll::_L9 */ _L9;
  TIU_Input_msg_API_TIU_Pkg /* EnvSim::Internal::GenAll::_L10 */ _L10;
  GUI_to_EVC_EnvSim /* EnvSim::Internal::GenAll::_L11 */ _L11;
  EVC_to_GUI_EnvSim /* EnvSim::Internal::GenAll::_L12 */ _L12;
  kcg_bool /* EnvSim::Internal::GenAll::_L13 */ _L13;
  DMI_to_EVC_Message_int_T_API_DMI_Pkg /* EnvSim::Internal::GenAll::_L14 */ _L14;
  TIU_Input_msg_API_TIU_Pkg /* EnvSim::Internal::GenAll::_L15 */ _L15;
  EVC_to_DMI_Message_int_T_API_DMI_Pkg /* EnvSim::Internal::GenAll::_L16 */ _L16;
  kcg_bool /* EnvSim::Internal::GenAll::_L19 */ _L19;
  TIU_Input_msg_API_TIU_Pkg /* EnvSim::Internal::GenAll::_L18 */ _L18;
  EVC_to_DMI_Message_int_T_API_DMI_Pkg /* EnvSim::Internal::GenAll::_L17 */ _L17;
  DMI_to_EVC_Message_int_T_API_DMI_Pkg /* EnvSim::Internal::GenAll::_L20 */ _L20;
  TargetCollection_T_TargetManagement_types /* EnvSim::Internal::GenAll::_L22 */ _L22;
  CurveCollection_T_CalcBrakingCurves_types /* EnvSim::Internal::GenAll::_L23 */ _L23;
  Target_T_TargetManagement_types /* EnvSim::Internal::GenAll::_L24 */ _L24;
  CompressedBaliseMessage_TM /* EnvSim::Internal::GenAll::_L25 */ _L25;
  CompressedRadioMessage_TM /* EnvSim::Internal::GenAll::_L26 */ _L26;
  kcg_bool /* EnvSim::Internal::GenAll::_L27 */ _L27;
  kcg_real /* EnvSim::Internal::GenAll::_L28 */ _L28;
  M_TrainTrack_Message_T_TM_radio_messages /* EnvSim::Internal::GenAll::_L29 */ _L29;
  kcg_bool /* EnvSim::Internal::GenAll::_L30 */ _L30;
  kcg_bool /* EnvSim::Internal::GenAll::_L31 */ _L31;
  MSG_Errors_T_Common_Types_Pkg /* EnvSim::Internal::GenAll::_L32 */ _L32;
  positionErrors_T_TrainPosition_Types_Pck /* EnvSim::Internal::GenAll::_L33 */ _L33;
  morcStatus_T_RCM_Session_Types_Pkg /* EnvSim::Internal::GenAll::_L34 */ _L34;
  CompressedRadioMessage_TM /* EnvSim::Internal::GenAll::_L35 */ _L35;
  CompressedRadioMessage_TM /* EnvSim::Internal::GenAll::_L36 */ _L36;
} outC_GenAll_EnvSim_Internal;

/* ===========  node initialization and cycle functions  =========== */
/* EnvSim::Internal::GenAll */
extern void GenAll_EnvSim_Internal(outC_GenAll_EnvSim_Internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void GenAll_reset_EnvSim_Internal(outC_GenAll_EnvSim_Internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void GenAll_init_EnvSim_Internal(outC_GenAll_EnvSim_Internal *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _GenAll_EnvSim_Internal_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** GenAll_EnvSim_Internal.h
** Generation date: 2015-11-25T10:38:38
*************************************************************$ */

