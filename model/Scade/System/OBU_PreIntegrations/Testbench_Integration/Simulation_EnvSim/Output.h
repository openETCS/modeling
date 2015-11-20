/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */
#ifndef _Output_H_
#define _Output_H_

#include "kcg_types.h"
#include "Output_To_BG_Management_OutputManagement.h"
#include "Output_To_DMI_OutputManagement.h"
#include "Output_Mode_Level_To_Use_OutputManagement.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_Mode_Level_Level_And_Mode_Types_Pkg /* Output::Compatible_Mode_And_Level */ Compatible_Mode_And_Level;
  T_Data_To_BG_Management_Level_And_Mode_Types_Pkg /* Output::Data_To_BG_Management */ Data_To_BG_Management;
  kcg_bool /* Output::Service_Brake_Command */ Service_Brake_Command;
  kcg_bool /* Output::EB_Requested */ EB_Requested;
  T_AnnouncedLevel_Level_And_Mode_Types_Pkg /* Output::announcedLevel */ announcedLevel;
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg /* Output::Data_To_DMI_Ack */ Data_To_DMI_Ack;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Output_Mode_Level_To_Use_OutputManagement /* 1 */ _1_Context_1;
  outC_Output_To_DMI_OutputManagement /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Output;

/* ===========  node initialization and cycle functions  =========== */
/* Output */
extern void Output(
  /* Output::next_level */M_LEVEL next_level,
  /* Output::needsAckFromDriver */kcg_bool needsAckFromDriver,
  /* Output::announcedLevelTransition */T_LevelTransition_Level_And_Mode_Types_Pkg *announcedLevelTransition,
  /* Output::service_brake_from_level */kcg_bool service_brake_from_level,
  /* Output::Connection_to_RBC_Requested */kcg_bool Connection_to_RBC_Requested,
  /* Output::PositionReportNeeded */kcg_bool PositionReportNeeded,
  /* Output::isNewLevel */kcg_bool isNewLevel,
  /* Output::isAvailableForUse */kcg_bool isAvailableForUse,
  /* Output::currentMode */T_Mode_Level_And_Mode_Types_Pkg currentMode,
  /* Output::EB_Requested_From_Mode */kcg_bool EB_Requested_From_Mode,
  /* Output::Service_Brake_Command_From_Mode */kcg_bool Service_Brake_Command_From_Mode,
  /* Output::Data_To_DMI_From_Mode */T_Data_To_DMI_Level_And_Mode_Types_Pkg *Data_To_DMI_From_Mode,
  /* Output::Data_To_BG_Management_From_Mode */T_Data_To_BG_Management_Level_And_Mode_Types_Pkg *Data_To_BG_Management_From_Mode,
  /* Output::Level_Mode_Compatible */kcg_bool Level_Mode_Compatible,
  outC_Output *outC);

extern void Output_reset(outC_Output *outC);

#endif /* _Output_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Output.h
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */

