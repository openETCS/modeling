/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Track_Description */
void CAST_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Track_Description::dmi_track_description_int */DMI_Track_Description_int_array_T *dmi_track_description_int,
  /* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Track_Description::dmi_track_description_ct */DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_track_description_ct)
{
  (*dmi_track_description_ct).system_clock = (*dmi_track_description_int)[1];
  (*dmi_track_description_ct).valid = /* 1 */
    Int_to_Bool_Utilities((*dmi_track_description_int)[0]);
  /* 1 */
  CAST_int_t_DMI_speedProfile_DATA_Variables(
    (DMI_speedProfile_int_array_T_DATA *) &(*dmi_track_description_int)[2],
    &(*dmi_track_description_ct).speedProfiles);
  /* 1 */
  CAST_int_to_DMI_gradientProfile_DATA_Variables(
    (DMI_gradientProfile_int_arrayT *) &(*dmi_track_description_int)[131],
    &(*dmi_track_description_ct).gradientProfiles);
  /* 1 */
  CAST_int_to_DMI_trackCondition_DATA_Variables(
    (DMI_trackCondition_int_array_T *) &(*dmi_track_description_int)[260],
    &(*dmi_track_description_ct).trackConditions);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

