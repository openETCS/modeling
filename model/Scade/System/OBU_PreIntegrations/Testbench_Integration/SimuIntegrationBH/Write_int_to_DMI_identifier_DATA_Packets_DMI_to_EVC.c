/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_identifier */
void Write_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_identifier::dmi_identifier_int_in */ DMI_Identifier_int_array_T_DATA *dmi_identifier_int_in,
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_identifier::dmi_identifier_ct_out */ DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_identifier_ct_out)
{
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_identifier */
  static DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg op_call;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_identifier */
  static kcg_bool ck_every;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_identifier::_L1 */
  static DMI_Identifier_int_array_T_DATA _L1;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_identifier::_L277 */
  static DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg _L277;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_identifier::_L280 */
  static kcg_int _L280;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_identifier::_L279 */
  static kcg_int _L279;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_identifier::_L278 */
  static kcg_bool _L278;
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_identifier::_L281 */
  static DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg _L281;
  
  _L280 = 1;
  kcg_copy_DMI_Identifier_int_array_T_DATA(&_L1, dmi_identifier_int_in);
  _L279 = _L1[0];
  _L278 = _L280 == _L279;
  ck_every = _L278;
  /* ck_Write_int_to_DMI_identifier */ if (ck_every) {
    /* 1 */ C_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC(&_L1, &op_call);
  }
  kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L281,
    (DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *)
      &cDMI_Identifier_DATA_Packets_DMI_to_EVC);
  /* ck_Write_int_to_DMI_identifier */ if (ck_every) {
    kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(&_L277, &op_call);
  }
  else {
    kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(&_L277, &_L281);
  }
  kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
    dmi_identifier_ct_out,
    &_L277);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

