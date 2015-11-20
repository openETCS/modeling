/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConditionDistanceToTargetDigital_DMI_Control_Pkg_Sub_func_DistanceToTarget.h"

#ifndef KCG_USER_DEFINED_INIT
void ConditionDistanceToTargetDigital_init_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  outC_ConditionDistanceToTargetDigital_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC)
{
  outC->_L19 = kcg_true;
  outC->_L16 = M_MODE_Full_Supervision;
  outC->_L17 = M_MODE_Full_Supervision;
  outC->_L18 = kcg_true;
  outC->_L15 = M_MODE_Full_Supervision;
  outC->_L14 = M_MODE_Full_Supervision;
  outC->_L13 = kcg_true;
  outC->_L1 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L3 = M_MODE_Full_Supervision;
  outC->_L4 = M_MODE_Full_Supervision;
  outC->_L5 = M_MODE_Full_Supervision;
  outC->_L6.valid = kcg_true;
  outC->_L6.system_clock = 0;
  outC->_L6.v_train = 0;
  outC->_L6.location_front_train = 0;
  outC->_L6.location_brake_target = 0;
  outC->_L6.v_target = 0;
  outC->_L6.v_permitted = 0;
  outC->_L6.v_release = 0;
  outC->_L6.location_brake_curve_starting_point = 0;
  outC->_L6.v_intervention = 0;
  outC->_L6.mode = M_MODE_Full_Supervision;
  outC->_L6.level.level = M_LEVEL_Level_0;
  outC->_L6.level.nid_stm = 0;
  outC->_L6.nid_c = 0;
  outC->_L6.nid_c_valid = kcg_true;
  outC->_L6.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->_L6.sup_status = CSM_DMI_Types_Pkg;
  outC->_L6.location_LOA = 0;
  outC->_L6.v_LOA = 0;
  outC->_L6.location_KP_Balise_Track = 0;
  outC->_L6.distance_KP_Balise = 0;
  outC->_L6.distance_to_TSA = 0;
  outC->_L6.radioConnectionStatus = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L6.distanceIndicationPoint = 0;
  outC->_L7 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L9 = M_MODE_Full_Supervision;
  outC->_L10 = CSM_DMI_Types_Pkg;
  outC->_L11 = kcg_true;
  outC->_L12 = CSM_DMI_Types_Pkg;
  outC->Condition = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void ConditionDistanceToTargetDigital_reset_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  outC_ConditionDistanceToTargetDigital_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC)
{
}

/* DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetDigital */
void ConditionDistanceToTargetDigital_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetDigital::DMI_dynamic */ DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_dynamic,
  outC_ConditionDistanceToTargetDigital_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC)
{
  kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L6, DMI_dynamic);
  outC->_L3 = outC->_L6.mode;
  outC->_L5 = M_MODE_Full_Supervision;
  outC->_L1 = outC->_L3 == outC->_L5;
  outC->_L14 = outC->_L6.mode;
  outC->_L15 = M_MODE_On_Sight;
  outC->_L13 = outC->_L14 == outC->_L15;
  outC->_L17 = outC->_L6.mode;
  outC->_L16 = M_MODE_Staff_Responsible;
  outC->_L18 = outC->_L17 == outC->_L16;
  outC->_L19 = outC->_L1 | outC->_L13 | outC->_L18;
  outC->_L12 = outC->_L6.sup_status;
  outC->_L10 = CSM_DMI_Types_Pkg;
  outC->_L7 = outC->_L12 != outC->_L10;
  outC->_L2 = outC->_L19 & outC->_L7;
  outC->_L4 = M_MODE_Reversing;
  outC->_L9 = outC->_L6.mode;
  outC->_L8 = outC->_L4 == outC->_L9;
  outC->_L11 = outC->_L8 | outC->_L2;
  outC->Condition = outC->_L11;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ConditionDistanceToTargetDigital_DMI_Control_Pkg_Sub_func_DistanceToTarget.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

