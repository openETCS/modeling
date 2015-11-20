/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Set_TrainRN_packet_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::Set_TrainRN_packet */
void Set_TrainRN_packet_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::Set_TrainRN_packet::valid */kcg_bool valid,
  /* DMI_Control_Pkg::Sub_func::Set_TrainRN_packet::TrainRunningNumber */array_int_9 *TrainRunningNumber,
  /* DMI_Control_Pkg::Sub_func::Set_TrainRN_packet::SystemTime */kcg_int SystemTime,
  /* DMI_Control_Pkg::Sub_func::Set_TrainRN_packet::DMI_train_running_number_id */DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *DMI_train_running_number_id)
{
  (*DMI_train_running_number_id).valid = valid;
  (*DMI_train_running_number_id).systemTime = SystemTime;
  (*DMI_train_running_number_id).trainRunningNumber =
    /* ArrayOfASCII_to_Integer */
    ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils(TrainRunningNumber);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Set_TrainRN_packet_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

