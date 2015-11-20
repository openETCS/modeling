/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::Write_DMI_Track_Description_to_int */
void Write_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::Write_DMI_Track_Description_to_int::dmi_track_description_ct */ DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_track_description_ct,
  /* DATA::Packets::EVC_to_DMI::Write_DMI_Track_Description_to_int::dmi_track_description_int */ DMI_Track_Description_int_array_T *dmi_track_description_int)
{
  /* DATA::Packets::EVC_to_DMI::Write_DMI_Track_Description_to_int */
  static DMI_Track_Description_int_array_T op_call;
  /* DATA::Packets::EVC_to_DMI::Write_DMI_Track_Description_to_int */
  static kcg_bool ck_every;
  /* DATA::Packets::EVC_to_DMI::Write_DMI_Track_Description_to_int::_L1 */
  static DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg _L1;
  /* DATA::Packets::EVC_to_DMI::Write_DMI_Track_Description_to_int::_L15 */
  static DMI_Track_Description_int_array_T _L15;
  /* DATA::Packets::EVC_to_DMI::Write_DMI_Track_Description_to_int::_L14 */
  static kcg_bool _L14;
  /* DATA::Packets::EVC_to_DMI::Write_DMI_Track_Description_to_int::_L13 */
  static DMI_Track_Description_int_array_T _L13;
  
  kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L1,
    dmi_track_description_ct);
  _L14 = _L1.valid;
  ck_every = _L14;
  /* ck_Write_DMI_Track_Description_to_int */ if (ck_every) {
    /* 1 */
    CAST_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI(&_L1, &op_call);
  }
  kcg_copy_DMI_Track_Description_int_array_T(
    &_L15,
    (DMI_Track_Description_int_array_T *)
      &cDMI_Track_Description_in_DATA_Packets_EVC_to_DMI);
  /* ck_Write_DMI_Track_Description_to_int */ if (ck_every) {
    kcg_copy_DMI_Track_Description_int_array_T(&_L13, &op_call);
  }
  else {
    kcg_copy_DMI_Track_Description_int_array_T(&_L13, &_L15);
  }
  kcg_copy_DMI_Track_Description_int_array_T(dmi_track_description_int, &_L13);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

