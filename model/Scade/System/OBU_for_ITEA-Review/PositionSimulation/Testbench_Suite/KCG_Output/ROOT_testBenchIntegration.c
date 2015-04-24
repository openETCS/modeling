/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ROOT_testBenchIntegration.h"

void ROOT_testBenchIntegration_init(void)
{
  int i1;
  int i;
  
  Ctxt_ROOT_testBenchIntegration.init = kcg_true;
  Ctxt_ROOT_testBenchIntegration._L662 = 0.0;
  Ctxt_ROOT_testBenchIntegration._L663 = 0.0;
  Ctxt_ROOT_testBenchIntegration._L477 = kcg_true;
  Ctxt_ROOT_testBenchIntegration.SDM_speedSupervisionBrakeCommand.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_testBenchIntegration.SDM_speedSupervisionBrakeCommand.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_testBenchIntegration.SDM_speedSupervisionBrakeCommand.valid =
    kcg_true;
  Ctxt_ROOT_testBenchIntegration.EVC_cutOffCommand.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_testBenchIntegration.EVC_cutOffCommand.m_mainpowerswitch_cm =
    open_main_power_swicth_TIU_Types_Pkg;
  Ctxt_ROOT_testBenchIntegration.EVC_cutOffCommand.m_airtightness_cm =
    airtightness_command_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_testBenchIntegration.EVC_cutOffCommand.m_pantograph_cm =
    pantograph_command_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_testBenchIntegration.EVC_cutOffCommand.valid = kcg_true;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.radioEVCtoUnit.networkID =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.radioEVCtoUnit.cmd =
    cmdr_not_relevant_API_RadioCommunication_Pkg;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.radioEVCtoUnit.valid =
    kcg_true;
  for (i = 0; i < 3; i++) {
    Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p11.nid_ntc[i] =
      0;
  }
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p11.nIter_ntc =
    0;
  for (i = 0; i < 3; i++) {
    Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p11.tractionIdentity[i].nid_ctraction =
      0;
    Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p11.tractionIdentity[i].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
  }
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p11.nIter_tractionIdentity =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p11.n_axle =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p11.m_axleloadcat =
    M_AXLELOADCAT_A;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p11.v_maxtrain =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p11.l_train =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p11.NC_TRAIN =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p11.NC_CDTRAIN =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p11.valid =
    kcg_true;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p5.TrainRunningNumber =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p5.valid =
    kcg_true;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p4.M_ERROR =
    M_ERROR_Balise_group_linking_consistency_error;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p4.valid =
    kcg_true;
  for (i = 0; i < 1; i++) {
    for (i1 = 0; i1 < 15; i1++) {
      Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p3.aNID_RADIO[i].telephoneNumber[i1] =
        0;
    }
    Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p3.aNID_RADIO[i].valid =
      kcg_true;
  }
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p3.number =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p3.valid =
    kcg_true;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p1.packet1.NID_NTC =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p1.packet1.level =
    M_LEVEL_Level_0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p1.packet1.V_TRAIN =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p1.packet1.L_TRAININT =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p1.packet1.L_DOUBTUNDER =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p1.packet1.L_DOUBTOVER =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p1.packet1.dlrbg =
    Q_DLRBG_Reverse;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p1.packet1.D_LRBG =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p1.packet1.NID_PRVLRBG =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p1.packet1.NID_LRBG =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p1.packet1.L_PACKET =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p1.packet1.NID_PACKET =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p1.valid =
    kcg_true;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p0.packet0.NID_NTC =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p0.packet0.level =
    M_LEVEL_Level_0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p0.packet0.V_TRAIN =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p0.packet0.L_TRAININT =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p0.packet0.L_DOUBTUNDER =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p0.packet0.L_DOUBTOVER =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p0.packet0.dlrbg =
    Q_DLRBG_Reverse;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p0.packet0.D_LRBG =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p0.packet0.NID_LRBG =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p0.packet0.L_PACKET =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p0.packet0.NID_PACKET =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.packets.p0.valid =
    kcg_true;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.header.xT_TRAIN =
    0.0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.header.nid_engine =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.header.t_train =
    0.0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.header.nid_message =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.header.present =
    kcg_true;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.thirdOutput.present =
    kcg_true;
  for (i = 0; i < 3; i++) {
    Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p11.nid_ntc[i] =
      0;
  }
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p11.nIter_ntc =
    0;
  for (i = 0; i < 3; i++) {
    Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p11.tractionIdentity[i].nid_ctraction =
      0;
    Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p11.tractionIdentity[i].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
  }
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p11.nIter_tractionIdentity =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p11.n_axle =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p11.m_axleloadcat =
    M_AXLELOADCAT_A;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p11.v_maxtrain =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p11.l_train =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p11.NC_TRAIN =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p11.NC_CDTRAIN =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p11.valid =
    kcg_true;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p5.TrainRunningNumber =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p5.valid =
    kcg_true;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p4.M_ERROR =
    M_ERROR_Balise_group_linking_consistency_error;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p4.valid =
    kcg_true;
  for (i = 0; i < 1; i++) {
    for (i1 = 0; i1 < 15; i1++) {
      Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p3.aNID_RADIO[i].telephoneNumber[i1] =
        0;
    }
    Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p3.aNID_RADIO[i].valid =
      kcg_true;
  }
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p3.number =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p3.valid =
    kcg_true;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p1.packet1.NID_NTC =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p1.packet1.level =
    M_LEVEL_Level_0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p1.packet1.V_TRAIN =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p1.packet1.L_TRAININT =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p1.packet1.L_DOUBTUNDER =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p1.packet1.L_DOUBTOVER =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p1.packet1.dlrbg =
    Q_DLRBG_Reverse;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p1.packet1.D_LRBG =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p1.packet1.NID_PRVLRBG =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p1.packet1.NID_LRBG =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p1.packet1.L_PACKET =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p1.packet1.NID_PACKET =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p1.valid =
    kcg_true;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p0.packet0.NID_NTC =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p0.packet0.level =
    M_LEVEL_Level_0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p0.packet0.V_TRAIN =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p0.packet0.L_TRAININT =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p0.packet0.L_DOUBTUNDER =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p0.packet0.L_DOUBTOVER =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p0.packet0.dlrbg =
    Q_DLRBG_Reverse;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p0.packet0.D_LRBG =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p0.packet0.NID_LRBG =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p0.packet0.L_PACKET =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p0.packet0.NID_PACKET =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.packets.p0.valid =
    kcg_true;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.header.xT_TRAIN =
    0.0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.header.nid_engine =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.header.t_train =
    0.0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.header.nid_message =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.header.present =
    kcg_true;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.secondOutput.present =
    kcg_true;
  for (i = 0; i < 3; i++) {
    Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p11.nid_ntc[i] =
      0;
  }
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p11.nIter_ntc =
    0;
  for (i = 0; i < 3; i++) {
    Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p11.tractionIdentity[i].nid_ctraction =
      0;
    Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p11.tractionIdentity[i].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
  }
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p11.nIter_tractionIdentity =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p11.n_axle =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p11.m_axleloadcat =
    M_AXLELOADCAT_A;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p11.v_maxtrain =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p11.l_train =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p11.NC_TRAIN =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p11.NC_CDTRAIN =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p11.valid =
    kcg_true;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p5.TrainRunningNumber =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p5.valid =
    kcg_true;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p4.M_ERROR =
    M_ERROR_Balise_group_linking_consistency_error;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p4.valid =
    kcg_true;
  for (i = 0; i < 1; i++) {
    for (i1 = 0; i1 < 15; i1++) {
      Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p3.aNID_RADIO[i].telephoneNumber[i1] =
        0;
    }
    Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p3.aNID_RADIO[i].valid =
      kcg_true;
  }
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p3.number =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p3.valid =
    kcg_true;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p1.packet1.NID_NTC =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p1.packet1.level =
    M_LEVEL_Level_0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p1.packet1.V_TRAIN =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p1.packet1.L_TRAININT =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p1.packet1.L_DOUBTUNDER =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p1.packet1.L_DOUBTOVER =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p1.packet1.dlrbg =
    Q_DLRBG_Reverse;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p1.packet1.D_LRBG =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p1.packet1.NID_PRVLRBG =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p1.packet1.NID_LRBG =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p1.packet1.L_PACKET =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p1.packet1.NID_PACKET =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p1.valid =
    kcg_true;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p0.packet0.NID_NTC =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p0.packet0.level =
    M_LEVEL_Level_0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p0.packet0.V_TRAIN =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p0.packet0.L_TRAININT =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p0.packet0.L_DOUBTUNDER =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p0.packet0.L_DOUBTOVER =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p0.packet0.dlrbg =
    Q_DLRBG_Reverse;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p0.packet0.D_LRBG =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p0.packet0.NID_LRBG =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p0.packet0.L_PACKET =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p0.packet0.NID_PACKET =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.packets.p0.valid =
    kcg_true;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.header.xT_TRAIN =
    0.0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.header.nid_engine =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.header.t_train =
    0.0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.header.nid_message =
    0;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.header.present =
    kcg_true;
  Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM.firstOutput.present =
    kcg_true;
  Ctxt_ROOT_testBenchIntegration.DMI_currentDMIStatus.DMI_Identifier.M_VERSION =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i = 0; i < 255; i++) {
    Ctxt_ROOT_testBenchIntegration.DMI_currentDMIStatus.DMI_Identifier.DMI_name[i] =
      ' ';
  }
  Ctxt_ROOT_testBenchIntegration.DMI_currentDMIStatus.DMI_Identifier.l_name = 0;
  Ctxt_ROOT_testBenchIntegration.DMI_currentDMIStatus.DMI_Identifier.Cabin_Identifier =
    cabin_A_DMI_Types_Pkg;
  Ctxt_ROOT_testBenchIntegration.DMI_currentDMIStatus.DMI_Identifier.DMI_Identifier =
    DMI_1_DMI_Types_Pkg;
  Ctxt_ROOT_testBenchIntegration.DMI_currentDMIStatus.DMI_Identifier.systemTime =
    0;
  Ctxt_ROOT_testBenchIntegration.DMI_currentDMIStatus.DMI_Identifier.valid =
    kcg_true;
  Ctxt_ROOT_testBenchIntegration.DMI_currentDMIStatus.DMI_StartReceived =
    kcg_true;
  Ctxt_ROOT_testBenchIntegration.DMI_currentDMIStatus.DMI_TrainDataValidated =
    kcg_true;
  Ctxt_ROOT_testBenchIntegration.DMI_currentDMIStatus.DMI_TrainRunningNumberValidated =
    kcg_true;
  Ctxt_ROOT_testBenchIntegration.DMI_currentDMIStatus.DMI_TrainRunningNumberFirstValidation =
    kcg_true;
  Ctxt_ROOT_testBenchIntegration.DMI_currentDMIStatus.DMI_DriverIdValidated =
    kcg_true;
  Ctxt_ROOT_testBenchIntegration.DMI_currentDMIStatus.DMI_Error = kcg_true;
  Ctxt_ROOT_testBenchIntegration.DMI_currentDMIStatus.DMI_Active = kcg_true;
  Ctxt_ROOT_testBenchIntegration.PROC_powerOff_to_MoRC = kcg_true;
  Ctxt_ROOT_testBenchIntegration.PROC_statusstartofmissionongoing_to_MoRC =
    kcg_true;
  Ctxt_ROOT_testBenchIntegration.PROC_powerUp_to_MoRC = kcg_true;
  Ctxt_ROOT_testBenchIntegration.PROC_radioCmdFromProcedures.p45.nid_mn = 0;
  Ctxt_ROOT_testBenchIntegration.PROC_radioCmdFromProcedures.p45.q_dir =
    Q_DIR_Reverse;
  Ctxt_ROOT_testBenchIntegration.PROC_radioCmdFromProcedures.p45.valid =
    kcg_true;
  Ctxt_ROOT_testBenchIntegration.PROC_radioCmdFromProcedures.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  Ctxt_ROOT_testBenchIntegration.PROC_radioCmdFromProcedures.p42.nid_radio = 0;
  Ctxt_ROOT_testBenchIntegration.PROC_radioCmdFromProcedures.p42.nid_rbc = 0;
  Ctxt_ROOT_testBenchIntegration.PROC_radioCmdFromProcedures.p42.nid_c = 0;
  Ctxt_ROOT_testBenchIntegration.PROC_radioCmdFromProcedures.p42.q_rbc =
    Q_RBC_Terminate_communication_session;
  Ctxt_ROOT_testBenchIntegration.PROC_radioCmdFromProcedures.p42.q_dir =
    Q_DIR_Reverse;
  Ctxt_ROOT_testBenchIntegration.PROC_radioCmdFromProcedures.p42.valid =
    kcg_true;
  Ctxt_ROOT_testBenchIntegration.PROC_radioCmdFromProcedures.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  Ctxt_ROOT_testBenchIntegration.PROC_radioCmdFromProcedures.Radio_Common_Header.d_emergencystop =
    0;
  Ctxt_ROOT_testBenchIntegration.PROC_radioCmdFromProcedures.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  Ctxt_ROOT_testBenchIntegration.PROC_radioCmdFromProcedures.Radio_Common_Header.d_ref =
    0;
  Ctxt_ROOT_testBenchIntegration.PROC_radioCmdFromProcedures.Radio_Common_Header.t_sh_rqst =
    0.0;
  Ctxt_ROOT_testBenchIntegration.PROC_radioCmdFromProcedures.Radio_Common_Header.d_sr =
    0;
  Ctxt_ROOT_testBenchIntegration.PROC_radioCmdFromProcedures.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  Ctxt_ROOT_testBenchIntegration.PROC_radioCmdFromProcedures.Radio_Common_Header.nid_em =
    0;
  Ctxt_ROOT_testBenchIntegration.PROC_radioCmdFromProcedures.Radio_Common_Header.t_train_reference =
    0.0;
  Ctxt_ROOT_testBenchIntegration.PROC_radioCmdFromProcedures.Radio_Common_Header.nid_lrbg =
    0;
  Ctxt_ROOT_testBenchIntegration.PROC_radioCmdFromProcedures.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  Ctxt_ROOT_testBenchIntegration.PROC_radioCmdFromProcedures.Radio_Common_Header.t_train =
    0.0;
  Ctxt_ROOT_testBenchIntegration.PROC_radioCmdFromProcedures.Radio_Common_Header.nid_message =
    0;
  Ctxt_ROOT_testBenchIntegration.PROC_radioCmdFromProcedures.Radio_Common_Header.receivedSystemTime =
    0;
  Ctxt_ROOT_testBenchIntegration.PROC_radioCmdFromProcedures.Radio_Common_Header.radioDevice =
    0;
  Ctxt_ROOT_testBenchIntegration.PROC_radioCmdFromProcedures.messageSource =
    msrc_undefined_Common_Types_Pkg;
  Ctxt_ROOT_testBenchIntegration.PROC_radioCmdFromProcedures.valid = kcg_true;
  Ctxt_ROOT_testBenchIntegration.EVC_currentMode = M_MODE_Full_Supervision;
  Ctxt_ROOT_testBenchIntegration.API_currentTimestamp = 0;
  Ctxt_ROOT_testBenchIntegration.ModeAndLevelManagement_state_nxt =
    SSM_st_STANDBY_ModeAndLevelManagement;
  for (i = 0; i < 10; i++) {
    Ctxt_ROOT_testBenchIntegration.fby__L714.items[i] = kcg_true;
  }
  Ctxt_ROOT_testBenchIntegration.fby__L714.idx = 0;
  TestEnvironmentSimulation_init(&Ctxt_ROOT_testBenchIntegration.Context_1);
  brl_init_BRL_Pkg(&Ctxt_ROOT_testBenchIntegration._1_Context_1);
  manageTIU_input_init_input_from_TIU_API_Pkg(
    &Ctxt_ROOT_testBenchIntegration.Context_2);
  SpeedSupervision_Integration_init_SpeedSupervision_Integration_Pkg(
    &Ctxt_ROOT_testBenchIntegration._2_Context_1);
  Master_Procedure_init_ManageProcedure_Pkg(
    &Ctxt_ROOT_testBenchIntegration._3_Context_1);
  DMI_Integrator_init_manage_DMI_Output_Pkg(
    &Ctxt_ROOT_testBenchIntegration._4_Context_1);
  DMI_Controller_init_DMI_Control_Pkg(
    &Ctxt_ROOT_testBenchIntegration._5_Context_2);
  manageDMI_Input_init_manage_DMI_Input_Pkg(
    &Ctxt_ROOT_testBenchIntegration._6_Context_1);
  FlipFlopJK_init_digital(&Ctxt_ROOT_testBenchIntegration._7_Context_1);
}


void ROOT_testBenchIntegration_reset(void)
{
  Ctxt_ROOT_testBenchIntegration.init = kcg_true;
  /* 1 */
  FlipFlopJK_reset_digital(&Ctxt_ROOT_testBenchIntegration._7_Context_1);
  /* 1 */
  manageDMI_Input_reset_manage_DMI_Input_Pkg(
    &Ctxt_ROOT_testBenchIntegration._6_Context_1);
  /* 2 */
  DMI_Controller_reset_DMI_Control_Pkg(
    &Ctxt_ROOT_testBenchIntegration._5_Context_2);
  /* 1 */
  DMI_Integrator_reset_manage_DMI_Output_Pkg(
    &Ctxt_ROOT_testBenchIntegration._4_Context_1);
  /* 1 */
  Master_Procedure_reset_ManageProcedure_Pkg(
    &Ctxt_ROOT_testBenchIntegration._3_Context_1);
  /* 1 */
  SpeedSupervision_Integration_reset_SpeedSupervision_Integration_Pkg(
    &Ctxt_ROOT_testBenchIntegration._2_Context_1);
  /* 2 */
  manageTIU_input_reset_input_from_TIU_API_Pkg(
    &Ctxt_ROOT_testBenchIntegration.Context_2);
  /* 1 */ brl_reset_BRL_Pkg(&Ctxt_ROOT_testBenchIntegration._1_Context_1);
  /* 1 */
  TestEnvironmentSimulation_reset(&Ctxt_ROOT_testBenchIntegration.Context_1);
}

/* ROOT_testBenchIntegration */
void ROOT_testBenchIntegration(void)
{
  DMI_to_EVC_Message_T_API_DMI_Pkg tmp;
  ModeAndLevelStatus_T_BG_Types_Pkg tmp1;
  nationValuesForDMI_T_DMI_Types_Pkg tmp2;
  kcg_int i;
  Brake_command_T_TIU_Types_Pkg tmp9;
  Type_I_train_commands_T_TIU_Types_Pkg tmp8;
  API_EuroRadioOutput_T_API_RadioCommunication_Pkg tmp7;
  kcg_bool tmp6;
  radioManagementMessage_T_Common_Types_Pkg tmp5;
  kcg_bool tmp4;
  safeRadioConnectionStatus_Type_MoRC_Pck tmp3;
  /* ROOT_testBenchIntegration::GUI_enableGUIModeSelect */ kcg_bool last_GUI_enableGUIModeSelect;
  /* ROOT_testBenchIntegration::ModeAndLevelManagement */ SSM_ST_ModeAndLevelManagement ModeAndLevelManagement_state_sel;
  /* ROOT_testBenchIntegration::ModeAndLevelManagement */ SSM_ST_ModeAndLevelManagement ModeAndLevelManagement_state_act;
  /* ROOT_testBenchIntegration::MoRC_MessageToRBC */ Radio_TrainTrack_Message_T_Radio_Types_Pkg MoRC_MessageToRBC;
  /* ROOT_testBenchIntegration::CALC_currentPositionReport */ Radio_TrainTrack_Message_T_Radio_Types_Pkg CALC_currentPositionReport;
  /* ROOT_testBenchIntegration::MoRC_cmdsToMobile */ mobileHWCmd_Type_MoRC_Pck MoRC_cmdsToMobile;
  /* ROOT_testBenchIntegration::TIU_EVCToTIUMessage */ TIU_Output_msg_API_TIU_Pkg TIU_EVCToTIUMessage;
  /* ROOT_testBenchIntegration::_L162 */ TIU_commandStatus_T_TIU_Types_Pkg _L162;
  /* ROOT_testBenchIntegration::_L279 */ EVC_to_DMI_Message_T_API_DMI_Pkg _L279;
  /* ROOT_testBenchIntegration::_L298 */ array_bool_12 _L298;
  /* ROOT_testBenchIntegration::_L419 */ M_MODE _L419;
  /* ROOT_testBenchIntegration::_L523 */ DMI_EVC_status_T_DMI_Types_Pkg _L523;
  /* ROOT_testBenchIntegration::_L578 */ kcg_bool _L578;
  /* ROOT_testBenchIntegration::_L583 */ kcg_bool _L583;
  
  resetOut = GUI_reset;
  if (Ctxt_ROOT_testBenchIntegration.init) {
    GUI_velocity = 0.0;
    GUI_position = 0.0;
    GUI_timestamp = 0;
    kcg_copy_Brake_command_T_TIU_Types_Pkg(
      &tmp9,
      (Brake_command_T_TIU_Types_Pkg *) &cEmptyBrakeCommand);
    kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg(
      &tmp8,
      (Type_I_train_commands_T_TIU_Types_Pkg *) &cTractionCutOff);
    _L583 = kcg_false;
    tmp4 = kcg_false;
    tmp6 = kcg_false;
    kcg_copy_API_EuroRadioOutput_T_API_RadioCommunication_Pkg(
      &tmp7,
      (API_EuroRadioOutput_T_API_RadioCommunication_Pkg *)
        &cEmptyRadioCommunicationMessage);
    _L419 = M_MODE_No_Power;
    kcg_copy_radioManagementMessage_T_Common_Types_Pkg(
      &tmp5,
      (radioManagementMessage_T_Common_Types_Pkg *) &cEmptyRadioCmd);
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &_L523,
      (DMI_EVC_status_T_DMI_Types_Pkg *) &cEmptyDMIStatus);
    for (i = 0; i < 10; i++) {
      Ctxt_ROOT_testBenchIntegration.fby__L714.items[i] = kcg_true;
    }
    Ctxt_ROOT_testBenchIntegration.fby__L714.idx = 0;
    _L578 = kcg_false;
    ModeAndLevelManagement_state_sel = SSM_st_STANDBY_ModeAndLevelManagement;
    Ctxt_ROOT_testBenchIntegration.init = kcg_false;
    last_GUI_enableGUIModeSelect = kcg_false;
  }
  else {
    GUI_velocity = Ctxt_ROOT_testBenchIntegration._L663;
    GUI_position = Ctxt_ROOT_testBenchIntegration._L662;
    GUI_timestamp = Ctxt_ROOT_testBenchIntegration.API_currentTimestamp;
    kcg_copy_Brake_command_T_TIU_Types_Pkg(
      &tmp9,
      &Ctxt_ROOT_testBenchIntegration.SDM_speedSupervisionBrakeCommand);
    kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg(
      &tmp8,
      &Ctxt_ROOT_testBenchIntegration.EVC_cutOffCommand);
    kcg_copy_API_EuroRadioOutput_T_API_RadioCommunication_Pkg(
      &tmp7,
      &Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM);
    tmp6 = Ctxt_ROOT_testBenchIntegration.PROC_powerOff_to_MoRC;
    tmp4 = Ctxt_ROOT_testBenchIntegration.PROC_powerUp_to_MoRC;
    _L583 =
      Ctxt_ROOT_testBenchIntegration.PROC_statusstartofmissionongoing_to_MoRC;
    _L419 = Ctxt_ROOT_testBenchIntegration.EVC_currentMode;
    kcg_copy_radioManagementMessage_T_Common_Types_Pkg(
      &tmp5,
      &Ctxt_ROOT_testBenchIntegration.PROC_radioCmdFromProcedures);
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &_L523,
      &Ctxt_ROOT_testBenchIntegration.DMI_currentDMIStatus);
    _L578 = Ctxt_ROOT_testBenchIntegration._L477;
    ModeAndLevelManagement_state_sel =
      Ctxt_ROOT_testBenchIntegration.ModeAndLevelManagement_state_nxt;
    last_GUI_enableGUIModeSelect = GUI_enableGUIModeSelect;
  }
  /* 1 */
  TIU_OutputIntegration_output_to_TIU_API_Pkg(
    (Isolation_Status_T_TIU_Types_Pkg *) &cEmtpyIsolationStatus,
    &tmp9,
    (Brake_command_T_TIU_Types_Pkg *) &cEmptyBrakeCommand,
    (Brake_inhibition_command_T_TIU_Types_Pkg *) &cEmptyBrakeInhibitionCommand,
    &tmp8,
    (Change_traction_system_T_TIU_Types_Pkg *) &cEmptyChangeTractionSystem,
    (Passenger_door_control_info_T_TIU_Types_Pkg *) &cPassengerDoorControlInfo,
    (Change_of_allowed_current_consumption_T_TIU_Types_Pkg *)
      &cEmptyChangeOfAllowedCurrentConsumption,
    &TIU_EVCToTIUMessage,
    &_L162);
  /* 1 */
  TestEnvironmentSimulation(
    resetOut,
    GUI_accelerationPercent,
    GUI_initialPosition,
    0.0,
    GUI_mode,
    GUI_level,
    GUI_mobileHWStatus,
    GUI_openDesk,
    &tmp7,
    &TIU_EVCToTIUMessage,
    tmp6,
    tmp4,
    _L583,
    &Ctxt_ROOT_testBenchIntegration.Context_1);
  Ctxt_ROOT_testBenchIntegration.API_currentTimestamp =
    Ctxt_ROOT_testBenchIntegration.Context_1.EVC_currentTimestamp;
  Ctxt_ROOT_testBenchIntegration._L662 =
    Ctxt_ROOT_testBenchIntegration.Context_1.EVC_currentPositionInM;
  Ctxt_ROOT_testBenchIntegration._L663 =
    Ctxt_ROOT_testBenchIntegration.Context_1.EVC_currentVelocityInKmH;
  GUI_emergencyBrake =
    Ctxt_ROOT_testBenchIntegration.Context_1.GUI_emergencyBrake;
  GUI_serviceBrake = Ctxt_ROOT_testBenchIntegration.Context_1.GUI_serviceBrake;
  GUI_TractionCutOff =
    Ctxt_ROOT_testBenchIntegration.Context_1.GUI_TractionCutOff;
  /* 1 */
  brl_BRL_Pkg(
    Ctxt_ROOT_testBenchIntegration.API_currentTimestamp,
    &Ctxt_ROOT_testBenchIntegration.Context_1.EVC_currentOdometrie,
    _L419,
    Ctxt_ROOT_testBenchIntegration.Context_1.EVC_level,
    cEmptyLevelTr,
    &Ctxt_ROOT_testBenchIntegration.Context_1.EVC_TrackSideMessage,
    &tmp5,
    resetOut,
    (P3_NationalValues_T_Packet_Types_Pkg *) &cEmptyP3NationalValues,
    kcg_false,
    0,
    Q_LENGTH_Train_integrity_confirmed_by_integrity_monitoring_device,
    (LocationBasedEvents_T_ProvidePositionReport_Pkg *)
      &cEmptyLocationBasedEvents,
    &Ctxt_ROOT_testBenchIntegration.Context_1.EVC_obuPhasesAndEvents,
    (radioNetWorkIDs_T_MoRC_Pck *) &cEmptyRadioNetworkIds,
    &Ctxt_ROOT_testBenchIntegration.Context_1.EVC_mobileHWStatusOut,
    (kcg_real) Ctxt_ROOT_testBenchIntegration.API_currentTimestamp,
    100,
    100,
    (PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *)
      &cOnboardTelephoneNumbers,
    (trainProperties_T_TrainPosition_Types_Pck *) &cTrainProperties,
    &Ctxt_ROOT_testBenchIntegration._1_Context_1);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &CALC_currentPositionReport,
    &Ctxt_ROOT_testBenchIntegration._1_Context_1.positionReport);
  kcg_copy_mobileHWCmd_Type_MoRC_Pck(
    &MoRC_cmdsToMobile,
    &Ctxt_ROOT_testBenchIntegration._1_Context_1.cmdsToMobile);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &MoRC_MessageToRBC,
    &Ctxt_ROOT_testBenchIntegration._1_Context_1.MessageToRBC);
  GUI_debugTrainPositionDeltaMax =
    Ctxt_ROOT_testBenchIntegration._1_Context_1.debugTrainPosition.trainPosition.d_max;
  GUI_debugTrainPositionDeltaMin =
    Ctxt_ROOT_testBenchIntegration._1_Context_1.debugTrainPosition.trainPosition.d_min;
  GUI_debugTrainPositionNominal = 0;
  /* 2 */
  manageTIU_input_input_from_TIU_API_Pkg(
    &Ctxt_ROOT_testBenchIntegration.Context_1.EVC_MessageFromTIU,
    resetOut,
    (trainData_T_TIU_Types_Pkg *) &cICE3TrainData,
    &Ctxt_ROOT_testBenchIntegration.Context_2);
  /* 1 */
  SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg(
    (MRSP_Profile_t *) &cSDMTestMRSP,
    (MAs_t *) &cSDMTestMA,
    (P3_NationalValues_T_Packet_Types_Pkg *) &cP3NationalValuesUtrechtAmsterdam,
    &Ctxt_ROOT_testBenchIntegration._1_Context_1.debugTrainPosition,
    &Ctxt_ROOT_testBenchIntegration.Context_1.EVC_currentOdometrie,
    Ctxt_ROOT_testBenchIntegration.Context_1.EVC_level,
    (trainProperties_T_TrainPosition_Types_Pck *) &cTrainProperties,
    Ctxt_ROOT_testBenchIntegration.fby__L714.items[Ctxt_ROOT_testBenchIntegration.fby__L714.idx],
    Ctxt_ROOT_testBenchIntegration.fby__L714.items[Ctxt_ROOT_testBenchIntegration.fby__L714.idx],
    &Ctxt_ROOT_testBenchIntegration._2_Context_1);
  if (DBG_overrideSDM) {
    kcg_copy_Brake_command_T_TIU_Types_Pkg(
      &Ctxt_ROOT_testBenchIntegration.SDM_speedSupervisionBrakeCommand,
      (Brake_command_T_TIU_Types_Pkg *) &cEmptyBrakeCommand);
  }
  else {
    kcg_copy_Brake_command_T_TIU_Types_Pkg(
      &Ctxt_ROOT_testBenchIntegration.SDM_speedSupervisionBrakeCommand,
      &Ctxt_ROOT_testBenchIntegration._2_Context_1.brakeCmd);
  }
  _L583 = Ctxt_ROOT_testBenchIntegration.Context_1.EVC_level == M_LEVEL_Level_2;
  if (_L583 | (Ctxt_ROOT_testBenchIntegration.Context_1.EVC_level ==
      M_LEVEL_Level_3)) {
    tmp4 = kcg_true;
  }
  else {
    tmp4 = kcg_false;
  }
  /* 1 */
  Master_Procedure_ManageProcedure_Pkg(
    &_L523,
    _L578,
    kcg_true,
    Ctxt_ROOT_testBenchIntegration.API_currentTimestamp,
    &Ctxt_ROOT_testBenchIntegration._1_Context_1.mobileSWStatus,
    Ctxt_ROOT_testBenchIntegration._1_Context_1.sessionStatus,
    &Ctxt_ROOT_testBenchIntegration.Context_2.outTIUStatus,
    kcg_true,
    tmp4,
    &Ctxt_ROOT_testBenchIntegration._3_Context_1);
  kcg_copy_radioManagementMessage_T_Common_Types_Pkg(
    &Ctxt_ROOT_testBenchIntegration.PROC_radioCmdFromProcedures,
    &Ctxt_ROOT_testBenchIntegration._3_Context_1.request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC);
  Ctxt_ROOT_testBenchIntegration.PROC_powerUp_to_MoRC =
    Ctxt_ROOT_testBenchIntegration._3_Context_1.powerUp_to_MoRC;
  Ctxt_ROOT_testBenchIntegration.PROC_statusstartofmissionongoing_to_MoRC =
    Ctxt_ROOT_testBenchIntegration._3_Context_1.statusstartofmissionongoing_to_MoRC;
  Ctxt_ROOT_testBenchIntegration.PROC_powerOff_to_MoRC =
    Ctxt_ROOT_testBenchIntegration._3_Context_1.powerOff_to_MoRC;
  Ctxt_ROOT_testBenchIntegration._L477 =
    Ctxt_ROOT_testBenchIntegration._3_Context_1.request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management;
  if (Ctxt_ROOT_testBenchIntegration._1_Context_1.safeRadioConnectionStatus_toDriver.valid) {
    tmp3 =
      Ctxt_ROOT_testBenchIntegration._1_Context_1.safeRadioConnectionStatus_toDriver.status;
  }
  else {
    tmp3 = cEmptySafeRadioConnectionStatus;
  }
  tmp2.valid = kcg_true;
  tmp2.nid_c = cP3NationalValuesUtrechtAmsterdam.nid_cArray[0].nid_c;
  tmp2.nid_c_valid = kcg_true;
  tmp1.m_mode = _L419;
  tmp1.m_level = Ctxt_ROOT_testBenchIntegration.Context_1.EVC_level;
  tmp1.m_leveltr = cEmptyLevelTr;
  /* 1 */
  DMI_Integrator_manage_DMI_Output_Pkg(
    &_L523,
    Ctxt_ROOT_testBenchIntegration.API_currentTimestamp,
    &Ctxt_ROOT_testBenchIntegration.Context_2.outTIUStatus,
    &Ctxt_ROOT_testBenchIntegration.Context_1.EVC_currentOdometrie,
    &Ctxt_ROOT_testBenchIntegration._1_Context_1.debugTrainPosition,
    &Ctxt_ROOT_testBenchIntegration.SDM_speedSupervisionBrakeCommand,
    &Ctxt_ROOT_testBenchIntegration._2_Context_1.sdmToDMI,
    &tmp1,
    &tmp2,
    (movementAuthorityForDMI_T_DMI_Types_Pkg *) &cEmptyDMIMA,
    (morePositions_T_DMI_Types_Pkg *) &cEmptyDMIMorePositions,
    tmp3,
    (trainData_T_TIU_Types_Pkg *) &cICE3TrainData,
    &Ctxt_ROOT_testBenchIntegration._3_Context_1.DMI_Entry_Request_to_DMI,
    (DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cEmptyDMIEVCcodedTrainData,
    (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *) &cEmptyDMITextMessage,
    (DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cEmptyDMITrackDescription,
    (DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cDMIIdentifierRequest,
    (DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cEmptyDMISystemVersion,
    (DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cEmptyDMIDisplayControl,
    (DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cEmptyDMI_EVCLevelData,
    (DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg *) &cEmptyDMIRadioNet,
    (DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *)
      &cEmptyDMIDriverIdentifier,
    (DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *)
      &cEmptyDMITrainRunningNumber,
    (DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *)
      &cEmptyDMIAdhesionFactorData,
    kcg_false,
    (DMI_To_Modes_T_DMI_Types_Pkg *) &cEmptyDMI_toModeAndLevel,
    &Ctxt_ROOT_testBenchIntegration._4_Context_1);
  if (Ctxt_ROOT_testBenchIntegration._4_Context_1.to_DMI.present) {
    kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg(
      &_L279,
      &Ctxt_ROOT_testBenchIntegration._4_Context_1.to_DMI);
  }
  else {
    kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg(
      &_L279,
      (EVC_to_DMI_Message_T_API_DMI_Pkg *) &cEmptyDMIMessage);
  }
  for (i = 0; i < 12; i++) {
    _L298[i] = kcg_false;
  }
  /* 2 */
  DMI_Controller_DMI_Control_Pkg(
    DMI_MousePressed,
    &_L298,
    0.0,
    &DMI_arraykey,
    DMI_DriverID_Ack,
    &_L279.entry_request,
    DMI_TrainRN_Ack,
    &_L279.identifierRequest,
    &_L279.menu_request,
    DMI_confirmTrainData,
    DMI_openTrainDataWindow,
    &_L279.dynamic,
    DMI_startRequest,
    &_L279.textMessage,
    &_L279.trainData,
    DMI_traindataAck,
    DMI_traindataYesAck,
    DMI_traindataNoAck,
    _L279.dynamic.system_clock,
    DMI_textMsgAck,
    DMI_openDriverID,
    DMI_openTrainRN,
    DMI_closeButton,
    &Ctxt_ROOT_testBenchIntegration.Context_2.outTIUStatus,
    &_L279.iconRequest,
    kcg_false,
    kcg_false,
    &Ctxt_ROOT_testBenchIntegration._5_Context_2);
  DMI_TrainPosition_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.TrainPosition_toDisplay;
  DMI_ETCS_LevelSymbol_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.ETCS_LevelSymbol_toDisplay;
  DMI_LevelSymbolVisibility_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.LevelSymbolVisibility_toDisplay;
  DMI_TrainSpeed_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.TrainSpeed_toDisplay;
  DMI_TrainDataWindowVisibility_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.TrainDataWindowVisibility_toDisplay;
  DMI_SpeedDigitOne_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.SpeedDigitOne_toDisplay;
  DMI_SpeedDigitTwo_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.SpeedDigitTwo_toDisplay;
  DMI_SpeedDigitThree_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.SpeedDigitThree_toDisplay;
  DMI_SpeedTarget_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.SpeedTarget_toDisplay;
  DMI_SpeedPermitted_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.SpeedPermitted_toDisplay;
  DMI_SpeedRelease_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.SpeedRelease_toDisplay;
  DMI_SpeedIntervention_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.SpeedIntervention_toDisplay;
  kcg_copy_array_real_12(
    &DMI_GradientsStart_toDisplay,
    &Ctxt_ROOT_testBenchIntegration._5_Context_2.GradientsStart_toDisplay);
  kcg_copy_array_real_12(
    &DMI_GradientsEnd_toDisplay,
    &Ctxt_ROOT_testBenchIntegration._5_Context_2.GradientsEnd_toDisplay);
  kcg_copy_array_real_12(
    &DMI_GradientsValue_toDisplay,
    &Ctxt_ROOT_testBenchIntegration._5_Context_2.GradientsValue_toDisplay);
  DMI_DistanceToTarget_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.DistanceToTarget_toDisplay;
  DMI_DistanceToTargetVisible_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.DistanceToTargetVisibilityDigital_toDisplay;
  DMI_InterpolatedDistanceToTarget_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.InterpolatedDistanceToTarget_toDisplay;
  DMI_StatusSymbolBrake_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.StatusSymbolBrake_toDisplay;
  DMI_PointerColor_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.PointerColor_toDisplay;
  kcg_copy_array_int_9(
    &DMI_DriverID_Display_toDisplay,
    &Ctxt_ROOT_testBenchIntegration._5_Context_2.DriverID_Display_toDisplay);
  kcg_copy_array_int_9(
    &DMI_TrainRN_Display_toDisplay,
    &Ctxt_ROOT_testBenchIntegration._5_Context_2.TrainRN_Display_toDisplay);
  kcg_copy_array_bool_15(
    &DMI_window_mask_visibility__toDisplay,
    &Ctxt_ROOT_testBenchIntegration._5_Context_2.window_mask_visibility__toDisplay);
  kcg_copy_array_int_30(
    &DMI_ArrayButtonsEnabler_toDisplay,
    &Ctxt_ROOT_testBenchIntegration._5_Context_2.ArrayButtonsEnabler_toDisplay);
  DMI_CloseButtonEnabler_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.CloseButtonEnabler_toDisplay;
  DMI_StatusSymbolVisibility_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.StatusSymbolVisibility_toDisplay;
  DMI_RBC_status_symbol_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.RBC_status_symbol_toDisplay;
  DMI_DistanceToTargetBarVisibility_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.DistanceToTargetBarVisibility_toDisplay;
  DMI_ModeSymbol_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.ModeSymbol_toDisplay;
  DMI_ModeSymbolVisibility_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.ModeSymbolVisibility_toDisplay;
  kcg_copy_array_int_5(
    &DMI_ArrayOfMsgIndex_toDisplay,
    &Ctxt_ROOT_testBenchIntegration._5_Context_2.ArrayOfMsgIndex_toDisplay);
  DMI_trainCategoryIndex_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.trainCategoryIndex_toDisplay;
  DMI_trainAxleloadIndex_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.trainAxleloadIndex_toDisplay;
  DMI_trainAirtightIndex_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.trainAirtightIndex_toDisplay;
  DMI_trainLoadingGougeIndex_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.trainLoadingGougeIndex_toDisplay;
  DMI_trainLenght_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.trainLenght_toDisplay;
  DMI_trainBrakePerc_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.trainBrakePerc_toDisplay;
  DMI_trainMaxspeed_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.trainMaxspeed_toDisplay;
  DMI_traindataValidWinVisibility_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.traindataValidWinVisibility_toDisplay;
  DMI_traindataYesNoIndex_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.traindataYesNoIndex_toDisplay;
  DMI_textMsgEnable_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.textMsgEnable_toDisplay;
  DMI_yellowBorderMsg_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.yellowBorderMsg_toDisplay;
  DMI_closeButtonIndex_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.closeButtonIndex_toDisplay;
  DMI_openDesk_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.openDesk_toDisplay;
  DMI_yellowBorderBrakeSymbol_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.yellowBorderBrakeSymbol_toDisplay;
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &DMI_icons_ack,
    &Ctxt_ROOT_testBenchIntegration._5_Context_2.DMI_icons_ack);
  DMI_yellowBorderC1Area_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.yellowBorderC1Area_toDisplay;
  DMI_iconGroupIndex_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.iconGroupIndex_toDisplay;
  DMI_levelSymbolAnnouncementIndex_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.levelSymbolAnnouncementIndex_toDisplay;
  DMI_modeSymbolAnnouncementIndex_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.modeSymbolAnnouncementIndex_toDisplay;
  DMI_hourGlassCounter_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.hourGlassCounter_toDisplay;
  DMI_hourGlassVisibility_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.hourGlassVisibility_toDisplay;
  DMI_VpermColor_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.VpermColor_toDisplay;
  DMI_VreleaseColor_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.VreleaseColor_toDisplay;
  DMI_VtargetColor_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.VtargetColor_toDisplay;
  DMI_Vtarget_permVisibility_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.Vtarget_permVisibility_toDisplay;
  DMI_Vinterv_Visibility_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.Vinterv_Visibility_toDisplay;
  DMI_vtarget_permColor_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.vtarget_permColor_toDisplay;
  DMI_Vinterv_Color_toDisplay =
    Ctxt_ROOT_testBenchIntegration._5_Context_2.Vinterv_Color_toDisplay;
  tmp.present = kcg_true;
  kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
    &tmp.status,
    &Ctxt_ROOT_testBenchIntegration._5_Context_2.DMI_status_report);
  kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
    &tmp.identifier,
    &Ctxt_ROOT_testBenchIntegration._5_Context_2.DMI_identifier);
  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    &tmp.driverRequest,
    &Ctxt_ROOT_testBenchIntegration._5_Context_2.DMI_driver_request);
  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    &tmp.driverIdentifier,
    &Ctxt_ROOT_testBenchIntegration._5_Context_2.DMI_driver_identifier);
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &tmp.trainRunningNumber,
    &Ctxt_ROOT_testBenchIntegration._5_Context_2.DMI_train_running_number_id);
  kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
    &tmp.radioNetData,
    (DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg *)
      &cEmptyDMIRadioNetData);
  kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &tmp.textMessageAck,
    &Ctxt_ROOT_testBenchIntegration._5_Context_2.DMI_text_message_ack);
  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &tmp.trainDataAck,
    &Ctxt_ROOT_testBenchIntegration._5_Context_2.DMI_train_data_ack);
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
    &tmp.trainData,
    (DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *) &cEmptyDMITrainData);
  kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
    &tmp.adhesionFactor,
    (DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *)
      &cEmptyDMIAdhesionFactorData);
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &tmp.iconAck,
    (DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *) &cEmptyDMIIconAck);
  /* 1 */
  manageDMI_Input_manage_DMI_Input_Pkg(
    &tmp,
    resetOut,
    &Ctxt_ROOT_testBenchIntegration._6_Context_1);
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
    &Ctxt_ROOT_testBenchIntegration.DMI_currentDMIStatus,
    &Ctxt_ROOT_testBenchIntegration._6_Context_1.currentDMIStatus);
  /* 1 */
  collectRadioMessages_radioOutput_Pkg(
    &CALC_currentPositionReport,
    &MoRC_MessageToRBC,
    (Radio_TrainTrack_Message_T_Radio_Types_Pkg *) &cEmptyTrainTrackMessage,
    &MoRC_cmdsToMobile,
    &Ctxt_ROOT_testBenchIntegration.API_radioOutputEVCToRTM);
  /* 1 */
  FlipFlopJK_digital(
    _L578,
    resetOut,
    kcg_false,
    &Ctxt_ROOT_testBenchIntegration._7_Context_1);
  GUI_MA = Ctxt_ROOT_testBenchIntegration._7_Context_1.FFJK_Output;
  if (Ctxt_ROOT_testBenchIntegration._3_Context_1.start_ack_to_TIU & _L583 &
    (_L419 == M_MODE_Full_Supervision)) {
    kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg(
      &Ctxt_ROOT_testBenchIntegration.EVC_cutOffCommand,
      (Type_I_train_commands_T_TIU_Types_Pkg *) &cTractionNotCutOff);
  }
  else {
    kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg(
      &Ctxt_ROOT_testBenchIntegration.EVC_cutOffCommand,
      (Type_I_train_commands_T_TIU_Types_Pkg *) &cTractionCutOff);
  }
  switch (ModeAndLevelManagement_state_sel) {
    case SSM_st_STANDBY_ModeAndLevelManagement :
      if (Ctxt_ROOT_testBenchIntegration.DMI_currentDMIStatus.DMI_StartReceived) {
        ModeAndLevelManagement_state_act = SSM_st_FS_ModeAndLevelManagement;
      }
      else {
        ModeAndLevelManagement_state_act =
          SSM_st_STANDBY_ModeAndLevelManagement;
      }
      break;
    case SSM_st_FS_ModeAndLevelManagement :
      if (Ctxt_ROOT_testBenchIntegration._2_Context_1.EOA_overpassed) {
        ModeAndLevelManagement_state_act = SSM_st_TRIP_ModeAndLevelManagement;
      }
      else {
        ModeAndLevelManagement_state_act = SSM_st_FS_ModeAndLevelManagement;
      }
      break;
    case SSM_st_TRIP_ModeAndLevelManagement :
      ModeAndLevelManagement_state_act = SSM_st_TRIP_ModeAndLevelManagement;
      break;
    case SSM_st_Manual_ModeAndLevelManagement :
      ModeAndLevelManagement_state_act = SSM_st_Manual_ModeAndLevelManagement;
      break;
    
  }
  switch (ModeAndLevelManagement_state_act) {
    case SSM_st_STANDBY_ModeAndLevelManagement :
      GUI_enableGUIModeSelect = last_GUI_enableGUIModeSelect;
      Ctxt_ROOT_testBenchIntegration.EVC_currentMode = M_MODE_Stand_By;
      Ctxt_ROOT_testBenchIntegration.ModeAndLevelManagement_state_nxt =
        SSM_st_STANDBY_ModeAndLevelManagement;
      break;
    case SSM_st_FS_ModeAndLevelManagement :
      GUI_enableGUIModeSelect = last_GUI_enableGUIModeSelect;
      Ctxt_ROOT_testBenchIntegration.EVC_currentMode = M_MODE_Full_Supervision;
      Ctxt_ROOT_testBenchIntegration.ModeAndLevelManagement_state_nxt =
        SSM_st_FS_ModeAndLevelManagement;
      break;
    case SSM_st_TRIP_ModeAndLevelManagement :
      GUI_enableGUIModeSelect = last_GUI_enableGUIModeSelect;
      Ctxt_ROOT_testBenchIntegration.EVC_currentMode = M_MODE_Trip;
      Ctxt_ROOT_testBenchIntegration.ModeAndLevelManagement_state_nxt =
        SSM_st_TRIP_ModeAndLevelManagement;
      break;
    case SSM_st_Manual_ModeAndLevelManagement :
      GUI_enableGUIModeSelect = kcg_true;
      Ctxt_ROOT_testBenchIntegration.EVC_currentMode =
        Ctxt_ROOT_testBenchIntegration.Context_1.EVC_mode;
      Ctxt_ROOT_testBenchIntegration.ModeAndLevelManagement_state_nxt =
        SSM_st_Manual_ModeAndLevelManagement;
      break;
    
  }
  GUI_interventionSpeed = (kcg_real)
      Ctxt_ROOT_testBenchIntegration._2_Context_1.sdmToDMI.interventionSpeed;
  if (Ctxt_ROOT_testBenchIntegration.DMI_currentDMIStatus.DMI_StartReceived) {
    GUI_permittedSpeed = (kcg_real)
        Ctxt_ROOT_testBenchIntegration._2_Context_1.sdmToDMI.permittedSpeed;
  }
  else {
    GUI_permittedSpeed = (kcg_real) 0;
  }
  Ctxt_ROOT_testBenchIntegration.fby__L714.items[Ctxt_ROOT_testBenchIntegration.fby__L714.idx] =
    kcg_false;
  Ctxt_ROOT_testBenchIntegration.fby__L714.idx =
    (Ctxt_ROOT_testBenchIntegration.fby__L714.idx + 1) % 10;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** ROOT_testBenchIntegration.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

