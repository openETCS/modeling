/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_EVC_to_DMI_Messages.h"

/* Messages::Write_int_to_EVC_to_DMI */
void Write_int_to_EVC_to_DMI_Messages(
  /* Messages::Write_int_to_EVC_to_DMI::evc_to_dmi_int */ EVC_to_DMI_Message_int_T_API_DMI_Pkg *evc_to_dmi_int,
  /* Messages::Write_int_to_EVC_to_DMI::evc_to_dmi_ct */ EVC_to_DMI_Message_T_API_DMI_Pkg *evc_to_dmi_ct)
{
  /* Messages::Write_int_to_EVC_to_DMI */
  static EVC_to_DMI_Message_T_API_DMI_Pkg op_call;
  /* Messages::Write_int_to_EVC_to_DMI */
  static kcg_bool ck_every;
  /* Messages::Write_int_to_EVC_to_DMI::_L2 */
  static kcg_int _L2;
  /* Messages::Write_int_to_EVC_to_DMI::_L3 */
  static kcg_bool _L3;
  /* Messages::Write_int_to_EVC_to_DMI::_L4 */
  static kcg_int _L4;
  /* Messages::Write_int_to_EVC_to_DMI::_L5 */
  static EVC_to_DMI_Message_T_API_DMI_Pkg _L5;
  /* Messages::Write_int_to_EVC_to_DMI::_L6 */
  static EVC_to_DMI_Message_T_API_DMI_Pkg _L6;
  /* Messages::Write_int_to_EVC_to_DMI::_L7 */
  static EVC_to_DMI_Message_int_T_API_DMI_Pkg _L7;
  
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(&_L7, evc_to_dmi_int);
  _L2 = _L7[0];
  _L4 = 1;
  _L3 = _L2 == _L4;
  ck_every = _L3;
  /* ck_Write_int_to_EVC_to_DMI */ if (ck_every) {
    /* 1 */ CAST_int_to_EVC_to_DMI_Messages(&_L7, &op_call);
  }
  kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg(
    &_L6,
    (EVC_to_DMI_Message_T_API_DMI_Pkg *) &cEVC_to_DMI_CT_Messages);
  /* ck_Write_int_to_EVC_to_DMI */ if (ck_every) {
    kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg(&_L5, &op_call);
  }
  else {
    kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg(&_L5, &_L6);
  }
  kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg(evc_to_dmi_ct, &_L5);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_int_to_EVC_to_DMI_Messages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

