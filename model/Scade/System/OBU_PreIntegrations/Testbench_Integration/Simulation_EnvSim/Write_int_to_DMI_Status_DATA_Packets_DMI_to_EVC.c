/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Status_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Status */
void Write_int_to_DMI_Status_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Status::dmi_status_int */DMI_Status_int_array_T_DATA *dmi_status_int,
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Status::dim_status_ct */DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg *dim_status_ct)
{
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Status::_L19 */
  static kcg_bool _L19;
  
  _L19 = 1 == (*dmi_status_int)[0];
  if (_L19) {
    /* 1 */
    C_int_to_DMI_Status_DATA_Packets_DMI_to_EVC(dmi_status_int, dim_status_ct);
  }
  else {
    kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
      dim_status_ct,
      (DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg *)
        &cDMI_Status_DATA_Packets_DMI_to_EVC);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Write_int_to_DMI_Status_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

