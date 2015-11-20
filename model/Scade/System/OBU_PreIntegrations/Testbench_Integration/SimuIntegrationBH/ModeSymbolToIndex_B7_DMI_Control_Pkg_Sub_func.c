/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ModeSymbolToIndex_B7_DMI_Control_Pkg_Sub_func.h"

#ifndef KCG_USER_DEFINED_INIT
void ModeSymbolToIndex_B7_init_DMI_Control_Pkg_Sub_func(
  outC_ModeSymbolToIndex_B7_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L31 = 0;
  outC->_L30 = 0;
  outC->_L29 = 0;
  outC->_L28 = 0;
  outC->_L27 = 0;
  outC->_L26 = 0;
  outC->_L25 = 0;
  outC->_L24 = 0;
  outC->_L23 = 0;
  outC->_L22 = 0;
  outC->_L21 = 0;
  outC->_L20 = 0;
  outC->_L19 = 0;
  outC->_L18 = kcg_true;
  outC->_L3 = M_MODE_Full_Supervision;
  outC->_L2 = 0;
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
  outC->ModeSymbol_B7_visibility = kcg_true;
  outC->ModeSymbolIndex = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ModeSymbolToIndex_B7_reset_DMI_Control_Pkg_Sub_func(
  outC_ModeSymbolToIndex_B7_DMI_Control_Pkg_Sub_func *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::ModeSymbolToIndex_B7 */
void ModeSymbolToIndex_B7_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::ModeSymbolToIndex_B7::DMI_dynamicPacket */ DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_dynamicPacket,
  outC_ModeSymbolToIndex_B7_DMI_Control_Pkg_Sub_func *outC)
{
  kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L1,
    DMI_dynamicPacket);
  outC->_L3 = outC->_L1.mode;
  outC->_L30 = cMODE_Shunting_DMI_Control_Pkg;
  outC->_L27 = cMODE_Trip_DMI_Control_Pkg;
  outC->_L23 = cMODE_Post_trip_DMI_Control_Pkg;
  outC->_L22 = cMODE_On_Sight_DMI_Control_Pkg;
  outC->_L25 = cMODE_Staff_Responsible_DMI_Control_Pkg;
  outC->_L19 = cMODE_Full_Supervision_DMI_Control_Pkg;
  outC->_L21 = cMODE_Non_leading_DMI_Control_Pkg;
  outC->_L24 = cMODE_Reversing_DMI_Control_Pkg;
  outC->_L28 = cMODE_Unfitted_DMI_Control_Pkg;
  outC->_L26 = cMODE_System_Faliure_DMI_Control_Pkg;
  outC->_L20 = cMODE_Limited_Supervision_DMI_Control_Pkg;
  outC->_L31 = cMODE_System_National_DMI_Control_Pkg;
  outC->_L29 = cMODE_Stand_By_DMI_Control_Pkg;
  switch (outC->_L3) {
    case M_MODE_Shunting :
      outC->_L2 = outC->_L30;
      break;
    case M_MODE_Trip :
      outC->_L2 = outC->_L27;
      break;
    case M_MODE_Post_Trip :
      outC->_L2 = outC->_L23;
      break;
    case M_MODE_On_Sight :
      outC->_L2 = outC->_L22;
      break;
    case M_MODE_Staff_Responsible :
      outC->_L2 = outC->_L25;
      break;
    case M_MODE_Full_Supervision :
      outC->_L2 = outC->_L19;
      break;
    case M_MODE_Non_Leading :
      outC->_L2 = outC->_L21;
      break;
    case M_MODE_Reversing :
      outC->_L2 = outC->_L24;
      break;
    case M_MODE_Unfitted :
      outC->_L2 = outC->_L28;
      break;
    case M_MODE_System_Failure :
      outC->_L2 = outC->_L26;
      break;
    case M_MODE_Limited_Supervision :
      outC->_L2 = outC->_L20;
      break;
    case M_MODE_National_System :
      outC->_L2 = outC->_L31;
      break;
    
    default :
      outC->_L2 = outC->_L29;
  }
  outC->ModeSymbolIndex = outC->_L2;
  outC->_L18 = kcg_true;
  outC->ModeSymbol_B7_visibility = outC->_L18;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ModeSymbolToIndex_B7_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

