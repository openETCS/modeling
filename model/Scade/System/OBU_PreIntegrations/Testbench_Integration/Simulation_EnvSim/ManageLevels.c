/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ManageLevels.h"

void ManageLevels_reset(outC_ManageLevels *outC)
{
  /* 1 */ BuildOutputToRBC_reset_OutputToRBC(&outC->Context_1);
  /* 1 */ ManageAck_reset_Acknowledgement(&outC->_1_Context_1);
  /* 1 */
  SelectLevelTransition_reset_LevelTransitionSelection(&outC->_2_Context_1);
}

/* ManageLevels */
void ManageLevels(
  /* ManageLevels::trainStandstill */kcg_bool trainStandstill,
  /* ManageLevels::driverLevelTransition */T_LevelTransition_Level_And_Mode_Types_Pkg *driverLevelTransition,
  /* ManageLevels::levelAck */kcg_bool levelAck,
  /* ManageLevels::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* ManageLevels::ERTMScapabilities */T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMScapabilities,
  /* ManageLevels::DataFromTrackToLevel */T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg *DataFromTrackToLevel,
  /* ManageLevels::MemorizedLevelIn */M_LEVEL MemorizedLevelIn,
  outC_ManageLevels *outC)
{
  /* 1 */
  SelectLevelTransition_LevelTransitionSelection(
    MemorizedLevelIn,
    trainStandstill,
    driverLevelTransition,
    ERTMScapabilities,
    DataFromTrackToLevel,
    &outC->_2_Context_1);
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->announcedLevelTransition,
    &outC->_2_Context_1.selected_level_transition);
  outC->isAvailableForUse = outC->_2_Context_1.IsAvailableForUse;
  /* 1 */
  ProceedOnLevelChange_LevelChangement(
    MemorizedLevelIn,
    &outC->announcedLevelTransition,
    trainPosition,
    DataFromTrackToLevel,
    &outC->nextLevel,
    &outC->levelIsNew,
    &outC->TripTrainRequested);
  /* 1 */
  ManageAck_Acknowledgement(
    &outC->announcedLevelTransition,
    trainPosition,
    MemorizedLevelIn,
    levelAck,
    outC->levelIsNew,
    &outC->_1_Context_1);
  outC->needsAckFromDriver = outC->_1_Context_1.needsAckFromDriver;
  outC->serviceBrakeRequested = outC->_1_Context_1.service_brake;
  /* 1 */
  BuildOutputToRBC_OutputToRBC(
    &outC->announcedLevelTransition,
    MemorizedLevelIn,
    outC->nextLevel,
    trainPosition,
    &outC->Context_1);
  outC->connectionToRBCRequested = outC->Context_1.Connection_to_RBC_Requested;
  outC->positionReportNeeded = outC->Context_1.PositionReportNeeded;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ManageLevels.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

