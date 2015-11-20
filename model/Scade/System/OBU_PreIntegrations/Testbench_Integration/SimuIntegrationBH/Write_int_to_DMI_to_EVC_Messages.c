/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_to_EVC_Messages.h"

/* Messages::Write_int_to_DMI_to_EVC */
void Write_int_to_DMI_to_EVC_Messages(
  /* Messages::Write_int_to_DMI_to_EVC::dmi_to_evc_int */ DMI_to_EVC_Message_int_T_API_DMI_Pkg *dmi_to_evc_int,
  /* Messages::Write_int_to_DMI_to_EVC::dmi_to_evc_ct */ DMI_to_EVC_Message_T_API_DMI_Pkg *dmi_to_evc_ct)
{
  /* Messages::Write_int_to_DMI_to_EVC */
  static DMI_to_EVC_Message_T_API_DMI_Pkg op_call;
  /* Messages::Write_int_to_DMI_to_EVC */
  static kcg_bool ck_every;
  /* Messages::Write_int_to_DMI_to_EVC::_L1 */
  static DMI_to_EVC_Message_int_T_API_DMI_Pkg _L1;
  /* Messages::Write_int_to_DMI_to_EVC::_L2 */
  static kcg_int _L2;
  /* Messages::Write_int_to_DMI_to_EVC::_L3 */
  static kcg_bool _L3;
  /* Messages::Write_int_to_DMI_to_EVC::_L4 */
  static kcg_int _L4;
  /* Messages::Write_int_to_DMI_to_EVC::_L5 */
  static DMI_to_EVC_Message_T_API_DMI_Pkg _L5;
  /* Messages::Write_int_to_DMI_to_EVC::_L6 */
  static DMI_to_EVC_Message_T_API_DMI_Pkg _L6;
  
  kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(&_L1, dmi_to_evc_int);
  _L2 = _L1[0];
  _L4 = 1;
  _L3 = _L2 == _L4;
  ck_every = _L3;
  /* ck_Write_int_to_DMI_to_EVC */ if (ck_every) {
    /* 1 */ CAST_int_to_DMI_to_EVC_Messages(&_L1, &op_call);
  }
  kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg(
    &_L6,
    (DMI_to_EVC_Message_T_API_DMI_Pkg *) &cDMI_EVC_CT_Messages);
  /* ck_Write_int_to_DMI_to_EVC */ if (ck_every) {
    kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg(&_L5, &op_call);
  }
  else {
    kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg(&_L5, &_L6);
  }
  kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg(dmi_to_evc_ct, &_L5);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_int_to_DMI_to_EVC_Messages.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

