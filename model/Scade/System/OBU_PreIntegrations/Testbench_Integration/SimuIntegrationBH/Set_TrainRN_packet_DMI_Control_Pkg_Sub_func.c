/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Set_TrainRN_packet_DMI_Control_Pkg_Sub_func.h"

#ifndef KCG_USER_DEFINED_INIT
void Set_TrainRN_packet_init_DMI_Control_Pkg_Sub_func(
  outC_Set_TrainRN_packet_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_int i;
  
  outC->_L22 = 0;
  outC->_L19 = 0;
  outC->_L18 = kcg_true;
  outC->_L5.valid = kcg_true;
  outC->_L5.systemTime = 0;
  outC->_L5.trainRunningNumber = 0;
  for (i = 0; i < 9; i++) {
    outC->_L1[i] = 0;
  }
  outC->DMI_train_running_number_id.valid = kcg_true;
  outC->DMI_train_running_number_id.systemTime = 0;
  outC->DMI_train_running_number_id.trainRunningNumber = 0;
  /* ArrayOfASCII_to_Integer */
  ArrayOfASCII_to_Integer_init_DMI_Control_Pkg_Utils(
    &outC->Context_ArrayOfASCII_to_Integer);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Set_TrainRN_packet_reset_DMI_Control_Pkg_Sub_func(
  outC_Set_TrainRN_packet_DMI_Control_Pkg_Sub_func *outC)
{
  /* ArrayOfASCII_to_Integer */
  ArrayOfASCII_to_Integer_reset_DMI_Control_Pkg_Utils(
    &outC->Context_ArrayOfASCII_to_Integer);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::Set_TrainRN_packet */
void Set_TrainRN_packet_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::Set_TrainRN_packet::valid */ kcg_bool valid,
  /* DMI_Control_Pkg::Sub_func::Set_TrainRN_packet::TrainRunningNumber */ array_int_9 *TrainRunningNumber,
  /* DMI_Control_Pkg::Sub_func::Set_TrainRN_packet::SystemTime */ kcg_int SystemTime,
  outC_Set_TrainRN_packet_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L18 = valid;
  outC->_L19 = SystemTime;
  kcg_copy_array_int_9(&outC->_L1, TrainRunningNumber);
  /* ArrayOfASCII_to_Integer */
  ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils(
    &outC->_L1,
    &outC->Context_ArrayOfASCII_to_Integer);
  outC->_L22 = outC->Context_ArrayOfASCII_to_Integer.Output1;
  outC->_L5.valid = outC->_L18;
  outC->_L5.systemTime = outC->_L19;
  outC->_L5.trainRunningNumber = outC->_L22;
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &outC->DMI_train_running_number_id,
    &outC->_L5);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Set_TrainRN_packet_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

