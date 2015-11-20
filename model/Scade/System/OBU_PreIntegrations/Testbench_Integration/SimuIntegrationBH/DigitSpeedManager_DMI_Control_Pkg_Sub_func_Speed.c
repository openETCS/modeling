/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed.h"

#ifndef KCG_USER_DEFINED_INIT
void DigitSpeedManager_init_DMI_Control_Pkg_Sub_func_Speed(
  outC_DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed *outC)
{
  outC->_L19 = 0;
  outC->_L18 = 0;
  outC->_L17 = kcg_true;
  outC->_L16 = 0;
  outC->_L15 = 0.0;
  outC->_L14 = 0;
  outC->_L10 = 0.0;
  outC->_L9 = 0.0;
  outC->_L8 = 0.0;
  outC->_L1.valid = kcg_true;
  outC->_L1.system_clock = 0;
  outC->_L1.v_train = 0;
  outC->_L1.location_front_train = 0;
  outC->_L1.location_brake_target = 0;
  outC->_L1.v_target = 0;
  outC->_L1.v_permitted = 0;
  outC->_L1.v_release = 0;
  outC->_L1.location_brake_curve_starting_point = 0;
  outC->_L1.v_intervention = 0;
  outC->_L1.mode = M_MODE_Full_Supervision;
  outC->_L1.level.level = M_LEVEL_Level_0;
  outC->_L1.level.nid_stm = 0;
  outC->_L1.nid_c = 0;
  outC->_L1.nid_c_valid = kcg_true;
  outC->_L1.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->_L1.sup_status = CSM_DMI_Types_Pkg;
  outC->_L1.location_LOA = 0;
  outC->_L1.v_LOA = 0;
  outC->_L1.location_KP_Balise_Track = 0;
  outC->_L1.distance_KP_Balise = 0;
  outC->_L1.distance_to_TSA = 0;
  outC->_L1.radioConnectionStatus = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L1.distanceIndicationPoint = 0;
  outC->TrainSpeed = 0.0;
  outC->SpeedDigitThree = 0.0;
  outC->SpeedDigitTwo = 0.0;
  outC->SpeedDigitOne = 0.0;
  /* 1 */ SpeedToDigit_init_DMI_Control_Pkg_Sub_func_Speed(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void DigitSpeedManager_reset_DMI_Control_Pkg_Sub_func_Speed(
  outC_DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed *outC)
{
  /* 1 */ SpeedToDigit_reset_DMI_Control_Pkg_Sub_func_Speed(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::Speed::DigitSpeedManager */
void DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed(
  /* DMI_Control_Pkg::Sub_func::Speed::DigitSpeedManager::DMI_dynamic */ DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_dynamic,
  outC_DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed *outC)
{
  outC->_L18 = - 1;
  kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L1, DMI_dynamic);
  outC->_L14 = outC->_L1.v_train;
  outC->_L17 = outC->_L18 == outC->_L14;
  outC->_L19 = 0;
  /* 1 */ if (outC->_L17) {
    outC->_L16 = outC->_L19;
  }
  else {
    outC->_L16 = outC->_L14;
  }
  outC->_L15 = (kcg_real) outC->_L16;
  outC->TrainSpeed = outC->_L15;
  /* 1 */
  SpeedToDigit_DMI_Control_Pkg_Sub_func_Speed(outC->_L15, &outC->Context_1);
  outC->_L8 = outC->Context_1.SpeedDigitOne;
  outC->_L9 = outC->Context_1.SpeedDigitTwo;
  outC->_L10 = outC->Context_1.SpeedDigitThree;
  outC->SpeedDigitThree = outC->_L10;
  outC->SpeedDigitTwo = outC->_L9;
  outC->SpeedDigitOne = outC->_L8;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

