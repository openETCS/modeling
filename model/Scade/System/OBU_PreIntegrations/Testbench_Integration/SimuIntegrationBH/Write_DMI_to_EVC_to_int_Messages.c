/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_to_EVC_to_int_Messages.h"

/* Messages::Write_DMI_to_EVC_to_int */
void Write_DMI_to_EVC_to_int_Messages(
  /* Messages::Write_DMI_to_EVC_to_int::dmi_to_evc_ct */ DMI_to_EVC_Message_T_API_DMI_Pkg *dmi_to_evc_ct,
  /* Messages::Write_DMI_to_EVC_to_int::dmi_to_evc_int */ DMI_to_EVC_Message_int_T_API_DMI_Pkg *dmi_to_evc_int)
{
  /* Messages::Write_DMI_to_EVC_to_int */
  static DMI_to_EVC_Message_int_T_API_DMI_Pkg op_call;
  /* Messages::Write_DMI_to_EVC_to_int */
  static kcg_bool ck_every;
  /* Messages::Write_DMI_to_EVC_to_int::_L1 */
  static DMI_to_EVC_Message_T_API_DMI_Pkg _L1;
  /* Messages::Write_DMI_to_EVC_to_int::_L2 */
  static DMI_to_EVC_Message_int_T_API_DMI_Pkg _L2;
  /* Messages::Write_DMI_to_EVC_to_int::_L3 */
  static kcg_bool _L3;
  /* Messages::Write_DMI_to_EVC_to_int::_L4 */
  static DMI_to_EVC_Message_int_T_API_DMI_Pkg _L4;
  
  kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg(&_L1, dmi_to_evc_ct);
  _L3 = _L1.present;
  ck_every = _L3;
  /* ck_Write_DMI_to_EVC_to_int */ if (ck_every) {
    /* 1 */ CAST_DMI_to_EVC_to_int_Messages(&_L1, &op_call);
  }
  kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(
    &_L4,
    (DMI_to_EVC_Message_int_T_API_DMI_Pkg *) &cDMI_EVC_int_array_Messages);
  /* ck_Write_DMI_to_EVC_to_int */ if (ck_every) {
    kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(&_L2, &op_call);
  }
  else {
    kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(&_L2, &_L4);
  }
  kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(dmi_to_evc_int, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_DMI_to_EVC_to_int_Messages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

