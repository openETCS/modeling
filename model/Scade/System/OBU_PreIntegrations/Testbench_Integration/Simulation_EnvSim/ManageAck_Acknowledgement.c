/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ManageAck_Acknowledgement.h"

void ManageAck_reset_Acknowledgement(outC_ManageAck_Acknowledgement *outC)
{
  /* 1 */ RequestAck_reset_Acknowledgement(&outC->Context_1);
}

/* Acknowledgement::ManageAck */
void ManageAck_Acknowledgement(
  /* Acknowledgement::ManageAck::selected_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* Acknowledgement::ManageAck::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* Acknowledgement::ManageAck::last_level */M_LEVEL last_level,
  /* Acknowledgement::ManageAck::levelAck */kcg_bool levelAck,
  /* Acknowledgement::ManageAck::IsNewLevel */kcg_bool IsNewLevel,
  outC_ManageAck_Acknowledgement *outC)
{
  /* 1 */
  RequestAck_Acknowledgement(
    /* 1 */ IsAckNeeded_Acknowledgement(selected_level_transition, last_level),
    selected_level_transition,
    trainPosition,
    levelAck,
    IsNewLevel,
    &outC->Context_1);
  outC->needsAckFromDriver = outC->Context_1.needsAckFromDriver;
  outC->service_brake = outC->Context_1.service_brake;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ManageAck_Acknowledgement.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

