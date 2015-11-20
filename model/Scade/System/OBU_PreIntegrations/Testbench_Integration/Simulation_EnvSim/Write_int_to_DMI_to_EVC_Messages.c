/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_to_EVC_Messages.h"

/* Messages::Write_int_to_DMI_to_EVC */
void Write_int_to_DMI_to_EVC_Messages(
  /* Messages::Write_int_to_DMI_to_EVC::dmi_to_evc_int */DMI_to_EVC_Message_int_T_API_DMI_Pkg *dmi_to_evc_int,
  /* Messages::Write_int_to_DMI_to_EVC::dmi_to_evc_ct */DMI_to_EVC_Message_T_API_DMI_Pkg *dmi_to_evc_ct)
{
  /* Messages::Write_int_to_DMI_to_EVC::_L3 */
  static kcg_bool _L3;
  
  _L3 = (*dmi_to_evc_int)[0] == 1;
  if (_L3) {
    /* 1 */ CAST_int_to_DMI_to_EVC_Messages(dmi_to_evc_int, dmi_to_evc_ct);
  }
  else {
    kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg(
      dmi_to_evc_ct,
      (DMI_to_EVC_Message_T_API_DMI_Pkg *) &cDMI_EVC_CT_Messages);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Write_int_to_DMI_to_EVC_Messages.c
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

