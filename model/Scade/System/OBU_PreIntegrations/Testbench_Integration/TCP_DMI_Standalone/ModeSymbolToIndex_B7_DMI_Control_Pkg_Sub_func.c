/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ModeSymbolToIndex_B7_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::ModeSymbolToIndex_B7 */
void ModeSymbolToIndex_B7_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::ModeSymbolToIndex_B7::DMI_dynamicPacket */DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_dynamicPacket,
  /* DMI_Control_Pkg::Sub_func::ModeSymbolToIndex_B7::ModeSymbolIndex */kcg_int *ModeSymbolIndex,
  /* DMI_Control_Pkg::Sub_func::ModeSymbolToIndex_B7::ModeSymbol_B7_visibility */kcg_bool *ModeSymbol_B7_visibility)
{
  *ModeSymbol_B7_visibility = kcg_true;
  switch ((*DMI_dynamicPacket).mode) {
    case M_MODE_Shunting :
      *ModeSymbolIndex = cMODE_Shunting_DMI_Control_Pkg;
      break;
    case M_MODE_Trip :
      *ModeSymbolIndex = cMODE_Trip_DMI_Control_Pkg;
      break;
    case M_MODE_Post_Trip :
      *ModeSymbolIndex = cMODE_Post_trip_DMI_Control_Pkg;
      break;
    case M_MODE_On_Sight :
      *ModeSymbolIndex = cMODE_On_Sight_DMI_Control_Pkg;
      break;
    case M_MODE_Staff_Responsible :
      *ModeSymbolIndex = cMODE_Staff_Responsible_DMI_Control_Pkg;
      break;
    case M_MODE_Full_Supervision :
      *ModeSymbolIndex = cMODE_Full_Supervision_DMI_Control_Pkg;
      break;
    case M_MODE_Non_Leading :
      *ModeSymbolIndex = cMODE_Non_leading_DMI_Control_Pkg;
      break;
    case M_MODE_Reversing :
      *ModeSymbolIndex = cMODE_Reversing_DMI_Control_Pkg;
      break;
    case M_MODE_Unfitted :
      *ModeSymbolIndex = cMODE_Unfitted_DMI_Control_Pkg;
      break;
    case M_MODE_System_Failure :
      *ModeSymbolIndex = cMODE_System_Faliure_DMI_Control_Pkg;
      break;
    case M_MODE_Limited_Supervision :
      *ModeSymbolIndex = cMODE_Limited_Supervision_DMI_Control_Pkg;
      break;
    case M_MODE_National_System :
      *ModeSymbolIndex = cMODE_System_National_DMI_Control_Pkg;
      break;
    
    default :
      *ModeSymbolIndex = cMODE_Stand_By_DMI_Control_Pkg;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ModeSymbolToIndex_B7_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

