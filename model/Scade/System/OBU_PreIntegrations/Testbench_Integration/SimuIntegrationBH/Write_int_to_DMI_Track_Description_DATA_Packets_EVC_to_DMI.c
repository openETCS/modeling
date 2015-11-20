/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Track_Description */
void Write_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Track_Description::dmi_track_description_int */ DMI_Track_Description_int_array_T *dmi_track_description_int,
  /* DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Track_Description::dmi_track_description_ct */ DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_track_description_ct)
{
  /* DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Track_Description */
  static DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg op_call;
  /* DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Track_Description */
  static kcg_bool ck_every;
  /* DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Track_Description::_L14 */
  static DMI_Track_Description_int_array_T _L14;
  /* DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Track_Description::_L28 */
  static DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg _L28;
  /* DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Track_Description::_L26 */
  static kcg_bool _L26;
  /* DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Track_Description::_L25 */
  static kcg_int _L25;
  /* DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Track_Description::_L24 */
  static kcg_int _L24;
  /* DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Track_Description::_L29 */
  static DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg _L29;
  
  _L25 = 1;
  kcg_copy_DMI_Track_Description_int_array_T(&_L14, dmi_track_description_int);
  _L24 = _L14[0];
  _L26 = _L25 == _L24;
  ck_every = _L26;
  /* ck_Write_int_to_DMI_Track_Description */ if (ck_every) {
    /* 1 */
    CAST_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI(&_L14, &op_call);
  }
  kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L29,
    (DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cDMI_Track_Description_DATA_Packets_EVC_to_DMI);
  /* ck_Write_int_to_DMI_Track_Description */ if (ck_every) {
    kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_L28,
      &op_call);
  }
  else {
    kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(&_L28, &_L29);
  }
  kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(
    dmi_track_description_ct,
    &_L28);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

