/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Output.h"

void Output_reset(outC_Output *outC)
{
  /* 1 */ Output_To_DMI_reset_OutputManagement(&outC->Context_1);
  /* 1 */ Output_Mode_Level_To_Use_reset_OutputManagement(&outC->_1_Context_1);
}

/* Output */
void Output(
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
  outC_Output *outC)
{
  outC->EB_Requested = EB_Requested_From_Mode;
  outC->Service_Brake_Command = service_brake_from_level |
    Service_Brake_Command_From_Mode;
  /* 1 */
  Output_Mode_Level_To_Use_OutputManagement(
    next_level,
    currentMode,
    Level_Mode_Compatible,
    isNewLevel,
    &outC->_1_Context_1);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->Compatible_Mode_And_Level,
    &outC->_1_Context_1.Compatible_Mode_And_Level);
  /* 1 */
  Output_To_BG_Management_OutputManagement(
    Data_To_BG_Management_From_Mode,
    Connection_to_RBC_Requested,
    PositionReportNeeded,
    &outC->Data_To_BG_Management);
  /* 1 */
  Output_To_DMI_OutputManagement(
    Level_Mode_Compatible,
    needsAckFromDriver,
    Data_To_DMI_From_Mode,
    announcedLevelTransition,
    isAvailableForUse,
    &outC->Context_1);
  kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg(
    &outC->announcedLevel,
    &outC->Context_1.announcedLevel);
  kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
    &outC->Data_To_DMI_Ack,
    &outC->Context_1.Data_To_DMI_Ack);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Output.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

