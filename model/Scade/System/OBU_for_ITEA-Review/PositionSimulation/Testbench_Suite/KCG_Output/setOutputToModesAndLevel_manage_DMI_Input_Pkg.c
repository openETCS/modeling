/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setOutputToModesAndLevel_manage_DMI_Input_Pkg.h"

/* manage_DMI_Input_Pkg::setOutputToModesAndLevel */
void setOutputToModesAndLevel_manage_DMI_Input_Pkg(
  /* manage_DMI_Input_Pkg::setOutputToModesAndLevel::fromDMI_Icon_Ack */ DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *fromDMI_Icon_Ack,
  /* manage_DMI_Input_Pkg::setOutputToModesAndLevel::forModesAndLevel */ DMI_To_Modes_T_DMI_Types_Pkg *forModesAndLevel)
{
  kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(
    forModesAndLevel,
    (DMI_To_Modes_T_DMI_Types_Pkg *) &cAckModesAndLevels_manage_DMI_Input_Pkg);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** setOutputToModesAndLevel_manage_DMI_Input_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

