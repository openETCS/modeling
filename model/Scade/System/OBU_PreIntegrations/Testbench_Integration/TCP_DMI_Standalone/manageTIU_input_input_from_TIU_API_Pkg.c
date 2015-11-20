/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageTIU_input_input_from_TIU_API_Pkg.h"

void manageTIU_input_reset_input_from_TIU_API_Pkg(
  outC_manageTIU_input_input_from_TIU_API_Pkg *outC)
{
  outC->init = kcg_true;
}

/* input_from_TIU_API_Pkg::manageTIU_input */
void manageTIU_input_input_from_TIU_API_Pkg(
  /* input_from_TIU_API_Pkg::manageTIU_input::inTIUfromAPI */TIU_Input_msg_API_TIU_Pkg *inTIUfromAPI,
  /* input_from_TIU_API_Pkg::manageTIU_input::evc_trainData */trainData_T_TIU_Types_Pkg *evc_trainData,
  outC_manageTIU_input_input_from_TIU_API_Pkg *outC)
{
  /* input_from_TIU_API_Pkg::manageTIU_input::_L8 */ Message_Train_Interface_to_EVC_T_TIU_Types_Pkg _L8;
  
  if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
      &_L8,
      (Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *)
        &emptyTIUInfo_TIU_Types_Pkg);
  }
  else {
    kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
      &_L8,
      &outC->outTIUCurrentInfo);
  }
  if ((*inTIUfromAPI).valid) {
    /* 1 */
    mergeTIU_Info_input_from_TIU_API_Pkg(
      &(*inTIUfromAPI).info,
      &_L8,
      evc_trainData,
      &outC->outTIUCurrentInfo);
  }
  else {
    kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
      &outC->outTIUCurrentInfo,
      &_L8);
  }
  /* 1 */
  getTIUStatusFromData_input_from_TIU_API_Pkg(
    &outC->outTIUCurrentInfo,
    &outC->outTIUStatus);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** manageTIU_input_input_from_TIU_API_Pkg.c
** Generation date: 2015-11-20T19:43:34
*************************************************************$ */

