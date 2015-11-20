/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _ManageLevelAndMode_H_
#define _ManageLevelAndMode_H_

#include "kcg_types.h"
#include "Input.h"
#include "CheckLevelAndMode.h"
#include "ManageModes.h"
#include "ManageLevels.h"
#include "Output.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_Mode_Level_Level_And_Mode_Types_Pkg /* ManageLevelAndMode::Compatible_Mode_And_Level */ Compatible_Mode_And_Level;
  T_Data_To_BG_Management_Level_And_Mode_Types_Pkg /* ManageLevelAndMode::Data_To_BG_Management */ Data_To_BG_Management;
  kcg_bool /* ManageLevelAndMode::Service_Brake_Command */ Service_Brake_Command;
  kcg_bool /* ManageLevelAndMode::EB_Requested */ EB_Requested;
  T_AnnouncedLevel_Level_And_Mode_Types_Pkg /* ManageLevelAndMode::announcedLevel */ announcedLevel;
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg /* ManageLevelAndMode::Data_To_DMI_Ack */ Data_To_DMI_Ack;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Output /* 1 */ _2_Context_1;
  outC_ManageModes /* 1 */ _1_Context_1;
  outC_ManageLevels /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_ManageLevelAndMode;

/* ===========  node initialization and cycle functions  =========== */
/* ManageLevelAndMode */
extern void ManageLevelAndMode(
  /* ManageLevelAndMode::Data_From_DMI */ DMI_To_Modes_T_DMI_Types_Pkg *Data_From_DMI,
  /* ManageLevelAndMode::Data_From_Localisation */ T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation,
  /* ManageLevelAndMode::Data_From_TIU */ Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *Data_From_TIU,
  /* ManageLevelAndMode::Data_From_Track_Messages */ T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *Data_From_Track_Messages,
  /* ManageLevelAndMode::Data_From_Track_Packets */ T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *Data_From_Track_Packets,
  /* ManageLevelAndMode::Data_From_Speed_and_Supervision */ T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision,
  /* ManageLevelAndMode::Cab_In */ cab_ID_T_TIU_Types_Pkg Cab_In,
  /* ManageLevelAndMode::driver_level_transition_In */ T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition_In,
  /* ManageLevelAndMode::ERTMS_capabilities_In */ T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities_In,
  /* ManageLevelAndMode::Data_from_Track_MASSPGradient */ T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg *Data_from_Track_MASSPGradient,
  /* ManageLevelAndMode::Data_From_F2_Functions */ T_Data_From_F2_functions_Level_And_Mode_Types_Pkg *Data_From_F2_Functions,
  /* ManageLevelAndMode::Data_From_STM */ T_Data_From_STM_Level_And_Mode_Types_Pkg *Data_From_STM,
  /* ManageLevelAndMode::MemorizedLevelIn */ M_LEVEL MemorizedLevelIn,
  outC_ManageLevelAndMode *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ManageLevelAndMode_reset(outC_ManageLevelAndMode *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ManageLevelAndMode_init(outC_ManageLevelAndMode *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _ManageLevelAndMode_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ManageLevelAndMode.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

