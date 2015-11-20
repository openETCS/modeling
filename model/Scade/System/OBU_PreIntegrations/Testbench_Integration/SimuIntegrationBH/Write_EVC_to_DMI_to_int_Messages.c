/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_EVC_to_DMI_to_int_Messages.h"

/* Messages::Write_EVC_to_DMI_to_int */
void Write_EVC_to_DMI_to_int_Messages(
  /* Messages::Write_EVC_to_DMI_to_int::evc_to_dmi_ct */ EVC_to_DMI_Message_T_API_DMI_Pkg *evc_to_dmi_ct,
  /* Messages::Write_EVC_to_DMI_to_int::evc_to_dmi_int */ EVC_to_DMI_Message_int_T_API_DMI_Pkg *evc_to_dmi_int)
{
  /* Messages::Write_EVC_to_DMI_to_int */
  static EVC_to_DMI_Message_int_T_API_DMI_Pkg op_call;
  /* Messages::Write_EVC_to_DMI_to_int */
  static kcg_bool ck_every;
  /* Messages::Write_EVC_to_DMI_to_int::_L2 */
  static EVC_to_DMI_Message_int_T_API_DMI_Pkg _L2;
  /* Messages::Write_EVC_to_DMI_to_int::_L3 */
  static kcg_bool _L3;
  /* Messages::Write_EVC_to_DMI_to_int::_L4 */
  static EVC_to_DMI_Message_int_T_API_DMI_Pkg _L4;
  /* Messages::Write_EVC_to_DMI_to_int::_L5 */
  static EVC_to_DMI_Message_T_API_DMI_Pkg _L5;
  
  kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg(&_L5, evc_to_dmi_ct);
  _L3 = _L5.present;
  ck_every = _L3;
  /* ck_Write_EVC_to_DMI_to_int */ if (ck_every) {
    /* 1 */ CAST_EVC_to_DMI_to_int_Messages(&_L5, &op_call);
  }
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
    &_L4,
    (EVC_to_DMI_Message_int_T_API_DMI_Pkg *) &cEVC_DMI_int_array_Messages);
  /* ck_Write_EVC_to_DMI_to_int */ if (ck_every) {
    kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(&_L2, &op_call);
  }
  else {
    kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(&_L2, &_L4);
  }
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(evc_to_dmi_int, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_EVC_to_DMI_to_int_Messages.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

