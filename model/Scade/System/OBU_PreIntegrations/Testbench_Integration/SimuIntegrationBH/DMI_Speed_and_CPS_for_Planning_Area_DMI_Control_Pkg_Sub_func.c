/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func.h"

#ifndef KCG_USER_DEFINED_INIT
void DMI_Speed_and_CPS_for_Planning_Area_init_DMI_Control_Pkg_Sub_func(
  outC_DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L8 = 0.0;
  outC->_L7 = 0.0;
  outC->_L5 = 0.0;
  outC->_L4 = 0.0;
  outC->_L3.valid = kcg_true;
  outC->_L3.system_clock = 0;
  outC->_L3.v_train = 0;
  outC->_L3.location_front_train = 0;
  outC->_L3.location_brake_target = 0;
  outC->_L3.v_target = 0;
  outC->_L3.v_permitted = 0;
  outC->_L3.v_release = 0;
  outC->_L3.location_brake_curve_starting_point = 0;
  outC->_L3.v_intervention = 0;
  outC->_L3.mode = M_MODE_Full_Supervision;
  outC->_L3.level.level = M_LEVEL_Level_0;
  outC->_L3.level.nid_stm = 0;
  outC->_L3.nid_c = 0;
  outC->_L3.nid_c_valid = kcg_true;
  outC->_L3.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->_L3.sup_status = CSM_DMI_Types_Pkg;
  outC->_L3.location_LOA = 0;
  outC->_L3.v_LOA = 0;
  outC->_L3.location_KP_Balise_Track = 0;
  outC->_L3.distance_KP_Balise = 0;
  outC->_L3.distance_to_TSA = 0;
  outC->_L3.radioConnectionStatus = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L3.distanceIndicationPoint = 0;
  outC->_L2 = 0;
  outC->_L1 = 0;
  outC->fronttrain = 0.0;
  outC->vpermitted = 0.0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void DMI_Speed_and_CPS_for_Planning_Area_reset_DMI_Control_Pkg_Sub_func(
  outC_DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::DMI_Speed_and_CPS_for_Planning_Area */
void DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::DMI_Speed_and_CPS_for_Planning_Area::DMI_track_atlas */ DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_track_atlas,
  outC_DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func *outC)
{
  kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L3,
    DMI_track_atlas);
  outC->_L1 = outC->_L3.v_permitted;
  outC->_L2 = outC->_L3.location_front_train;
  outC->_L4 = (kcg_real) outC->_L1;
  outC->vpermitted = outC->_L4;
  outC->_L5 = (kcg_real) outC->_L2;
  outC->_L8 = 100.0;
  outC->_L7 = outC->_L5 / outC->_L8;
  outC->fronttrain = outC->_L7;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

