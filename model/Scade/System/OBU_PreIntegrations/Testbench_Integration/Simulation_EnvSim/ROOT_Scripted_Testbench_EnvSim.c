/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T09:32:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ROOT_Scripted_Testbench_EnvSim.h"

void ROOT_Scripted_reset_Testbench_EnvSim(
  outC_ROOT_Scripted_Testbench_EnvSim *outC)
{
  outC->init = kcg_true;
  /* 1 */ RemoteGUI_reset_EnvSim(&outC->Context_1);
  /* 1 */ EVC_reset(&outC->_1_Context_1);
  /* 1 */ RemoteDMIBus_reset_EnvSim(&outC->_2_Context_1);
  /* 1 */ Environment_reset_Testbench_EnvSim_Components(&outC->_3_Context_1);
}

/* Testbench_EnvSim::ROOT_Scripted */
void ROOT_Scripted_Testbench_EnvSim(outC_ROOT_Scripted_Testbench_EnvSim *outC)
{
  static struct__128074 tmp;
  static TIU_Input_msg_API_TIU_Pkg tmp3;
  static TIU_Input_msg_API_TIU_Pkg tmp2;
  static EVC_to_DMI_Message_int_T_API_DMI_Pkg tmp1;
  /* Testbench_EnvSim::ROOT_Scripted::_L240 */
  static TIU_Output_msg_API_TIU_Pkg _L240;
  /* Testbench_EnvSim::ROOT_Scripted::_L241 */
  static RadioManagement_T_API_RadioCommunication_Pkg _L241;
  /* Testbench_EnvSim::ROOT_Scripted::_L245 */
  static M_TrainTrack_Message_T_TM_radio_messages _L245;
  /* Testbench_EnvSim::ROOT_Scripted::_L258 */
  static GUI_to_EVC_EnvSim _L258;
  
  if (outC->init) {
    kcg_copy_GUI_to_EVC_EnvSim(
      &_L258,
      (GUI_to_EVC_EnvSim *) &cEMPTY_GUI2EVC_EnvSim_Internal);
    kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
      &_L241,
      (RadioManagement_T_API_RadioCommunication_Pkg *)
        &cInitRTMManagement_Testbench_EnvSim);
    kcg_copy_TIU_Output_msg_API_TIU_Pkg(
      &_L240,
      (TIU_Output_msg_API_TIU_Pkg *) &cInit_API_toTIU_Testbench_EnvSim);
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &_L245,
      (M_TrainTrack_Message_T_TM_radio_messages *)
        &cInit_toRTM_Testbench_EnvSim);
    kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
      &tmp1,
      (EVC_to_DMI_Message_int_T_API_DMI_Pkg *)
        &cEmptyEVC2DMIBusMessage_Testbench_EnvSim);
    kcg_copy_TIU_Input_msg_API_TIU_Pkg(
      &tmp2,
      (TIU_Input_msg_API_TIU_Pkg *) &cInit_API_fromTIU_Testbench_EnvSim);
  }
  else {
    kcg_copy_GUI_to_EVC_EnvSim(&_L258, &outC->fromGUI);
    kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
      &_L241,
      &outC->API_toRTM_Management);
    kcg_copy_TIU_Output_msg_API_TIU_Pkg(&_L240, &outC->API_toTIU);
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L245, &outC->API_toRBC);
    kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(&tmp1, &outC->API_toDMI);
    kcg_copy_TIU_Input_msg_API_TIU_Pkg(&tmp2, &outC->rem_EVC_fromTIU);
  }
  /* 1 */
  Environment_Testbench_EnvSim_Components(
    _L258.reset,
    _L258.targetSpeed,
    _L258.traction,
    _L258.brake,
    _L258.initialPosition,
    _L258.initialVelocity,
    _L258.mode,
    _L258.level,
    _L258.mobileHWStatus,
    _L258.openDesk,
    &_L241,
    &_L240,
    cDeltaSimulationTime_Toolbox,
    kcg_false,
    kcg_false,
    &_L245,
    &outC->_3_Context_1);
  if (!kcg_comp_TIU_Input_msg_API_TIU_Pkg(
      &tmp2,
      &outC->_3_Context_1.EVC_fromTIU)) {
    kcg_copy_TIU_Input_msg_API_TIU_Pkg(&tmp3, &outC->_3_Context_1.EVC_fromTIU);
  }
  else {
    kcg_copy_TIU_Input_msg_API_TIU_Pkg(
      &tmp3,
      (TIU_Input_msg_API_TIU_Pkg *) &cInit_API_fromTIU_Testbench_EnvSim);
  }
  /* 1 */ RemoteDMIBus_EnvSim(&tmp1, &tmp3, &outC->_2_Context_1);
  if (outC->_3_Context_1.EVC_cycleEVC) {
    /* 1 */
    EVC(
      outC->_3_Context_1.EVC_reset,
      &outC->_3_Context_1.EVC_Odometry,
      outC->_3_Context_1.EVC_SystemTime,
      &outC->_3_Context_1.EVC_fromTrack,
      &outC->_2_Context_1.dmiToEVC,
      &outC->_3_Context_1.EVC_fromTIU,
      &outC->_3_Context_1.EVC_mobileHWStatus,
      (ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg *)
        &cDataStorage_ForInit1_Testbench_EnvSim,
      &outC->_1_Context_1);
    outC->rem__L9 = outC->_1_Context_1.debugTrainPositionDeltaMin;
    outC->_L8 = outC->_1_Context_1.debugTrainPositionDeltaMax;
    outC->debugTrainPositionNominal =
      outC->_1_Context_1.debugTrainPositionNominal;
    kcg_copy_TIU_Output_msg_API_TIU_Pkg(
      &outC->API_toTIU,
      &outC->_1_Context_1.API_toTIU);
    kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
      &outC->API_toDMI,
      &outC->_1_Context_1.API_toDMI);
    kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
      &outC->API_toRTM_Management,
      &outC->_1_Context_1.API_RTM_management);
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->API_toRBC,
      &outC->_1_Context_1.API_toRBC);
  }
  else {
    if (outC->init) {
      outC->rem__L9 = 0;
      outC->_L8 = 0;
      outC->debugTrainPositionNominal = 0;
      kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
        &outC->API_toDMI,
        (EVC_to_DMI_Message_int_T_API_DMI_Pkg *)
          &cInit_API_toDMI_Testbench_EnvSim);
    }
    kcg_copy_TIU_Output_msg_API_TIU_Pkg(&outC->API_toTIU, &_L240);
    kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
      &outC->API_toRTM_Management,
      &_L241);
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->API_toRBC, &_L245);
  }
  outC->init = kcg_false;
  tmp.emergencyBrake = outC->_3_Context_1.GUI_emergencyBrake;
  tmp.serviceBrake = outC->_3_Context_1.GUI_serviceBrake;
  tmp.tractionCutOff = outC->_3_Context_1.GUI_TractionCutOff;
  tmp.currentPositionInCm = outC->_3_Context_1.GUI_currentPositionInCm;
  tmp.currentPositionInM = outC->_3_Context_1.GUI_currentPositionInM;
  tmp.currentVelocityInKmH = outC->_3_Context_1.GUI_currentVelocityInKmH;
  tmp.afbActive = outC->_3_Context_1.GUI_AFBActive;
  tmp.trainPositionDeltaMax = (kcg_real) outC->_L8;
  tmp.trainPositionNominal = (kcg_real) outC->debugTrainPositionNominal;
  tmp.trainPositionDeltaMin = (kcg_real) outC->rem__L9;
  tmp.timestamp = outC->_3_Context_1.EVC_SystemTime;
  /* 1 */ RemoteGUI_EnvSim(&tmp, &outC->Context_1);
  kcg_copy_GUI_to_EVC_EnvSim(&outC->fromGUI, &outC->Context_1.guiToEVC);
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(
    &outC->rem_EVC_fromTIU,
    &outC->_3_Context_1.EVC_fromTIU);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ROOT_Scripted_Testbench_EnvSim.c
** Generation date: 2015-11-20T09:32:08
*************************************************************$ */

