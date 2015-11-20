/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Track_Description */
void Write_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Track_Description::dmi_track_description_int */DMI_Track_Description_int_array_T *dmi_track_description_int,
  /* DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Track_Description::dmi_track_description_ct */DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_track_description_ct)
{
  /* DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Track_Description::_L26 */ kcg_bool _L26;
  
  _L26 = 1 == (*dmi_track_description_int)[0];
  if (_L26) {
    /* 1 */
    CAST_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI(
      dmi_track_description_int,
      dmi_track_description_ct);
  }
  else {
    kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(
      dmi_track_description_ct,
      (DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cDMI_Track_Description_DATA_Packets_EVC_to_DMI);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Write_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

