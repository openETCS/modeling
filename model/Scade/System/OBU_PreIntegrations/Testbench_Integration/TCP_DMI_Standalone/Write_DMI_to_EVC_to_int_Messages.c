/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:37
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_to_EVC_to_int_Messages.h"

/* Messages::Write_DMI_to_EVC_to_int */
void Write_DMI_to_EVC_to_int_Messages(
  /* Messages::Write_DMI_to_EVC_to_int::dmi_to_evc_ct */DMI_to_EVC_Message_T_API_DMI_Pkg *dmi_to_evc_ct,
  /* Messages::Write_DMI_to_EVC_to_int::dmi_to_evc_int */DMI_to_EVC_Message_int_T_API_DMI_Pkg *dmi_to_evc_int)
{
  if ((*dmi_to_evc_ct).present) {
    /* 1 */ CAST_DMI_to_EVC_to_int_Messages(dmi_to_evc_ct, dmi_to_evc_int);
  }
  else {
    kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(
      dmi_to_evc_int,
      (DMI_to_EVC_Message_int_T_API_DMI_Pkg *) &cDMI_EVC_int_array_Messages);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Write_DMI_to_EVC_to_int_Messages.c
** Generation date: 2015-11-20T19:43:37
*************************************************************$ */

