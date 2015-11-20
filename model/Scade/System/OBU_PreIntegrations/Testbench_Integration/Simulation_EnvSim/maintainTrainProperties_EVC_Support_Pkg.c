/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "maintainTrainProperties_EVC_Support_Pkg.h"

/* EVC_Support_Pkg::maintainTrainProperties */
void maintainTrainProperties_EVC_Support_Pkg(
  /* EVC_Support_Pkg::maintainTrainProperties::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* EVC_Support_Pkg::maintainTrainProperties::trainRunningNumber */DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *trainRunningNumber,
  /* EVC_Support_Pkg::maintainTrainProperties::trainData */trainData_T_TIU_Types_Pkg *trainData,
  /* EVC_Support_Pkg::maintainTrainProperties::nid_engine */NID_ENGINE nid_engine,
  /* EVC_Support_Pkg::maintainTrainProperties::UpdatedtrainProperties */trainProperties_T_TrainPosition_Types_Pck *UpdatedtrainProperties)
{
  (*UpdatedtrainProperties).nid_engine = nid_engine;
  (*UpdatedtrainProperties).l_train = (*trainData).trainLength / 100;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &(*UpdatedtrainProperties).d_baliseAntenna_2_frontend,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cD_Antenna2FE);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &(*UpdatedtrainProperties).d_frontend_2_rearend,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cD_FE2RE);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &(*UpdatedtrainProperties).locationAccuracy_DefaultValue,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cLocationAccuracyDefault);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &(*UpdatedtrainProperties).centerDetectionAcc_DefaultValue,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cCenterDetectionAccuracyDefault);
  if ((*trainRunningNumber).valid) {
    (*UpdatedtrainProperties).nid_operational =
      (*trainRunningNumber).trainRunningNumber;
  }
  else {
    (*UpdatedtrainProperties).nid_operational =
      (*trainProperties).nid_operational;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** maintainTrainProperties_EVC_Support_Pkg.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

