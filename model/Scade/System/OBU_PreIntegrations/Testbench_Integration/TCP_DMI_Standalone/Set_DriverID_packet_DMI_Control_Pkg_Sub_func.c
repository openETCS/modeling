/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Set_DriverID_packet_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::Set_DriverID_packet */
void Set_DriverID_packet_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::Set_DriverID_packet::DriverID */array_int_9 *DriverID,
  /* DMI_Control_Pkg::Sub_func::Set_DriverID_packet::valid */kcg_bool valid,
  /* DMI_Control_Pkg::Sub_func::Set_DriverID_packet::CurrentSystemTime */T_internal_Type_Obu_BasicTypes_Pkg CurrentSystemTime,
  /* DMI_Control_Pkg::Sub_func::Set_DriverID_packet::DMI_DriverID_packet */DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *DMI_DriverID_packet)
{
  kcg_int i;
  
  (*DMI_DriverID_packet).valid = valid;
  (*DMI_DriverID_packet).systemTime = CurrentSystemTime;
  for (i = 0; i < 9; i++) {
    (*DMI_DriverID_packet).driverIdentifier[i] = /* 1 */
      ASCII_to_Char_iterator_DMI_Control_Pkg_Utils((*DriverID)[i]);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Set_DriverID_packet_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

