/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Set_DriverID_packet_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::Set_DriverID_packet */
void Set_DriverID_packet_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::Set_DriverID_packet::DriverID */ array_int_9 *DriverID,
  /* DMI_Control_Pkg::Sub_func::Set_DriverID_packet::valid */ kcg_bool valid,
  /* DMI_Control_Pkg::Sub_func::Set_DriverID_packet::CurrentSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg CurrentSystemTime,
  /* DMI_Control_Pkg::Sub_func::Set_DriverID_packet::DMI_DriverID_packet */ DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *DMI_DriverID_packet)
{
  driverIdentifier_T_DMI_Messages_Bothways_Pkg tmp;
  kcg_int i;
  
  (*DMI_DriverID_packet).valid = valid;
  (*DMI_DriverID_packet).systemTime = CurrentSystemTime;
  for (i = 0; i < 9; i++) {
    tmp[i] = /* 1 */
      ASCII_to_Char_iterator_DMI_Control_Pkg_Utils((*DriverID)[i]);
  }
  kcg_copy_driverIdentifier_T_DMI_Messages_Bothways_Pkg(
    &(*DMI_DriverID_packet).driverIdentifier,
    &tmp);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** Set_DriverID_packet_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

