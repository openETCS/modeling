/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::Write_DMI_Track_Description_to_int */
void Write_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::Write_DMI_Track_Description_to_int::dmi_track_description_ct */DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_track_description_ct,
  /* DATA::Packets::EVC_to_DMI::Write_DMI_Track_Description_to_int::dmi_track_description_int */DMI_Track_Description_int_array_T *dmi_track_description_int)
{
  if ((*dmi_track_description_ct).valid) {
    /* 1 */
    CAST_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI(
      dmi_track_description_ct,
      dmi_track_description_int);
  }
  else {
    kcg_copy_DMI_Track_Description_int_array_T(
      dmi_track_description_int,
      (DMI_Track_Description_int_array_T *)
        &cDMI_Track_Description_in_DATA_Packets_EVC_to_DMI);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Write_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

