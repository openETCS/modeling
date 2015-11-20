/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "maintainTrainProperties_EVC_Support_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void maintainTrainProperties_init_EVC_Support_Pkg(
  outC_maintainTrainProperties_EVC_Support_Pkg *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->_L27 = 0;
  outC->_L26.nominal = 0;
  outC->_L26.d_min = 0;
  outC->_L26.d_max = 0;
  outC->_L25.nominal = 0;
  outC->_L25.d_min = 0;
  outC->_L25.d_max = 0;
  outC->_L24.nominal = 0;
  outC->_L24.d_min = 0;
  outC->_L24.d_max = 0;
  outC->_L23.nominal = 0;
  outC->_L23.d_min = 0;
  outC->_L23.d_max = 0;
  outC->_L22 = 0;
  outC->_L21 = 0;
  outC->_L19 = 0;
  outC->_L18.valid = kcg_true;
  outC->_L18.acknowledgedByDriver = kcg_true;
  outC->_L18.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L18.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L18.trainLength = 0;
  outC->_L18.brakePerctage = 0;
  outC->_L18.maxTrainSpeed = 0;
  outC->_L18.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L18.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L18.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L18.axleNumber = 0;
  outC->_L18.numberNationalSystems = 0;
  for (i = 0; i < 5; i++) {
    outC->_L18.nationSystems[i] = 0;
  }
  outC->_L18.numberTractionSystems = 0;
  for (i1 = 0; i1 < 4; i1++) {
    outC->_L18.tractionSystem[i1].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L18.tractionSystem[i1].nid_ctraction = 0;
  }
  outC->_L17.nid_engine = 0;
  outC->_L17.nid_operational = 0;
  outC->_L17.l_train = 0;
  outC->_L17.d_baliseAntenna_2_frontend.nominal = 0;
  outC->_L17.d_baliseAntenna_2_frontend.d_min = 0;
  outC->_L17.d_baliseAntenna_2_frontend.d_max = 0;
  outC->_L17.d_frontend_2_rearend.nominal = 0;
  outC->_L17.d_frontend_2_rearend.d_min = 0;
  outC->_L17.d_frontend_2_rearend.d_max = 0;
  outC->_L17.locationAccuracy_DefaultValue.nominal = 0;
  outC->_L17.locationAccuracy_DefaultValue.d_min = 0;
  outC->_L17.locationAccuracy_DefaultValue.d_max = 0;
  outC->_L17.centerDetectionAcc_DefaultValue.nominal = 0;
  outC->_L17.centerDetectionAcc_DefaultValue.d_min = 0;
  outC->_L17.centerDetectionAcc_DefaultValue.d_max = 0;
  outC->_L16 = 0;
  outC->_L15.nid_engine = 0;
  outC->_L15.nid_operational = 0;
  outC->_L15.l_train = 0;
  outC->_L15.d_baliseAntenna_2_frontend.nominal = 0;
  outC->_L15.d_baliseAntenna_2_frontend.d_min = 0;
  outC->_L15.d_baliseAntenna_2_frontend.d_max = 0;
  outC->_L15.d_frontend_2_rearend.nominal = 0;
  outC->_L15.d_frontend_2_rearend.d_min = 0;
  outC->_L15.d_frontend_2_rearend.d_max = 0;
  outC->_L15.locationAccuracy_DefaultValue.nominal = 0;
  outC->_L15.locationAccuracy_DefaultValue.d_min = 0;
  outC->_L15.locationAccuracy_DefaultValue.d_max = 0;
  outC->_L15.centerDetectionAcc_DefaultValue.nominal = 0;
  outC->_L15.centerDetectionAcc_DefaultValue.d_min = 0;
  outC->_L15.centerDetectionAcc_DefaultValue.d_max = 0;
  outC->_L14 = 0;
  outC->_L13 = 0;
  outC->_L11 = kcg_true;
  outC->_L10.valid = kcg_true;
  outC->_L10.systemTime = 0;
  outC->_L10.trainRunningNumber = 0;
  outC->UpdatedtrainProperties.nid_engine = 0;
  outC->UpdatedtrainProperties.nid_operational = 0;
  outC->UpdatedtrainProperties.l_train = 0;
  outC->UpdatedtrainProperties.d_baliseAntenna_2_frontend.nominal = 0;
  outC->UpdatedtrainProperties.d_baliseAntenna_2_frontend.d_min = 0;
  outC->UpdatedtrainProperties.d_baliseAntenna_2_frontend.d_max = 0;
  outC->UpdatedtrainProperties.d_frontend_2_rearend.nominal = 0;
  outC->UpdatedtrainProperties.d_frontend_2_rearend.d_min = 0;
  outC->UpdatedtrainProperties.d_frontend_2_rearend.d_max = 0;
  outC->UpdatedtrainProperties.locationAccuracy_DefaultValue.nominal = 0;
  outC->UpdatedtrainProperties.locationAccuracy_DefaultValue.d_min = 0;
  outC->UpdatedtrainProperties.locationAccuracy_DefaultValue.d_max = 0;
  outC->UpdatedtrainProperties.centerDetectionAcc_DefaultValue.nominal = 0;
  outC->UpdatedtrainProperties.centerDetectionAcc_DefaultValue.d_min = 0;
  outC->UpdatedtrainProperties.centerDetectionAcc_DefaultValue.d_max = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void maintainTrainProperties_reset_EVC_Support_Pkg(
  outC_maintainTrainProperties_EVC_Support_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* EVC_Support_Pkg::maintainTrainProperties */
void maintainTrainProperties_EVC_Support_Pkg(
  /* EVC_Support_Pkg::maintainTrainProperties::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* EVC_Support_Pkg::maintainTrainProperties::trainRunningNumber */ DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *trainRunningNumber,
  /* EVC_Support_Pkg::maintainTrainProperties::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* EVC_Support_Pkg::maintainTrainProperties::nid_engine */ NID_ENGINE nid_engine,
  outC_maintainTrainProperties_EVC_Support_Pkg *outC)
{
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &outC->_L10,
    trainRunningNumber);
  outC->_L11 = outC->_L10.valid;
  outC->_L13 = outC->_L10.trainRunningNumber;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L15,
    trainProperties);
  outC->_L16 = outC->_L15.nid_operational;
  /* 1 */ if (outC->_L11) {
    outC->_L14 = outC->_L13;
  }
  else {
    outC->_L14 = outC->_L16;
  }
  outC->_L27 = nid_engine;
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L18, trainData);
  outC->_L19 = outC->_L18.trainLength;
  outC->_L22 = 100;
  outC->_L21 = outC->_L19 / outC->_L22;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L24,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cD_Antenna2FE);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L25,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cD_FE2RE);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L26,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cLocationAccuracyDefault);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L23,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cCenterDetectionAccuracyDefault);
  outC->_L17.nid_engine = outC->_L27;
  outC->_L17.nid_operational = outC->_L14;
  outC->_L17.l_train = outC->_L21;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L17.d_baliseAntenna_2_frontend,
    &outC->_L24);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L17.d_frontend_2_rearend,
    &outC->_L25);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L17.locationAccuracy_DefaultValue,
    &outC->_L26);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L17.centerDetectionAcc_DefaultValue,
    &outC->_L23);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->UpdatedtrainProperties,
    &outC->_L17);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** maintainTrainProperties_EVC_Support_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

