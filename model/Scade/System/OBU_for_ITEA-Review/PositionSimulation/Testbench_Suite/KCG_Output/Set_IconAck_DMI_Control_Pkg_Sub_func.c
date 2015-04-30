/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Set_IconAck_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::Set_IconAck */
void Set_IconAck_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::Set_IconAck::valid */ kcg_bool valid,
  /* DMI_Control_Pkg::Sub_func::Set_IconAck::system_time */ T_internal_Type_Obu_BasicTypes_Pkg system_time,
  /* DMI_Control_Pkg::Sub_func::Set_IconAck::NID_icon_id */ kcg_int NID_icon_id,
  /* DMI_Control_Pkg::Sub_func::Set_IconAck::IconAck */ DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *IconAck)
{
  (*IconAck).valid = valid;
  (*IconAck).systemTime = system_time;
  (*IconAck).DMI_nid_icon_identifier = NID_icon_id;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** Set_IconAck_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

