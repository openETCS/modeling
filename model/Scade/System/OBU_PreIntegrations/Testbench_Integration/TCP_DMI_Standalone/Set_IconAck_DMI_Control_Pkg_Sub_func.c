/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Set_IconAck_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::Set_IconAck */
void Set_IconAck_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::Set_IconAck::valid */kcg_bool valid,
  /* DMI_Control_Pkg::Sub_func::Set_IconAck::system_time */T_internal_Type_Obu_BasicTypes_Pkg system_time,
  /* DMI_Control_Pkg::Sub_func::Set_IconAck::NID_icon_id */kcg_int NID_icon_id,
  /* DMI_Control_Pkg::Sub_func::Set_IconAck::IconAck */DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *IconAck)
{
  (*IconAck).valid = valid;
  (*IconAck).systemTime = system_time;
  (*IconAck).DMI_nid_icon_identifier = NID_icon_id;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Set_IconAck_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

