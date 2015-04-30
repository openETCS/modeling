/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Set_TrainRN_packet_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::Set_TrainRN_packet */
void Set_TrainRN_packet_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::Set_TrainRN_packet::valid */ kcg_bool valid,
  /* DMI_Control_Pkg::Sub_func::Set_TrainRN_packet::TrainRunningNumber */ array_int_9 *TrainRunningNumber,
  /* DMI_Control_Pkg::Sub_func::Set_TrainRN_packet::SystemTime */ kcg_int SystemTime,
  /* DMI_Control_Pkg::Sub_func::Set_TrainRN_packet::DMI_train_running_number_id */ DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *DMI_train_running_number_id)
{
  (*DMI_train_running_number_id).valid = valid;
  (*DMI_train_running_number_id).systemTime = SystemTime;
  (*DMI_train_running_number_id).trainRunningNumber =
    /* ArrayOfASCII_to_Integer */
    ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils(TrainRunningNumber);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** Set_TrainRN_packet_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

