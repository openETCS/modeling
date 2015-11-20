/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Set_DMI_IDENTIFIER_DMI_Control_Pkg_Sub_func.h"

#ifndef KCG_USER_DEFINED_INIT
void Set_DMI_IDENTIFIER_init_DMI_Control_Pkg_Sub_func(
  outC_Set_DMI_IDENTIFIER_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_int i6;
  static kcg_int i5;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->_L42 = kcg_true;
  outC->_L41 = 0;
  outC->_L34 = kcg_true;
  outC->_L35 = 0;
  outC->_L36 = DMI_1_DMI_Types_Pkg;
  outC->_L37 = cabin_A_DMI_Types_Pkg;
  outC->_L38 = 0;
  for (i = 0; i < 255; i++) {
    outC->_L39[i] = ' ';
  }
  outC->_L40 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L25.valid = kcg_true;
  outC->_L25.systemTime = 0;
  outC->_L25.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L25.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L25.l_name = 0;
  for (i1 = 0; i1 < 255; i1++) {
    outC->_L25.DMI_name[i1] = ' ';
  }
  outC->_L25.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L24 = 0;
  outC->_L23.valid = kcg_true;
  outC->_L23.systemTime = 0;
  outC->_L23.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L23.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L23.l_name = 0;
  for (i2 = 0; i2 < 255; i2++) {
    outC->_L23.DMI_name[i2] = ' ';
  }
  outC->_L23.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i3 = 0; i3 < 12; i3++) {
    outC->_L7[i3] = ' ';
  }
  outC->_L6 = ' ';
  for (i4 = 0; i4 < 243; i4++) {
    outC->_L5[i4] = ' ';
  }
  for (i5 = 0; i5 < 255; i5++) {
    outC->_L4[i5] = ' ';
  }
  outC->dmi_identifier_packet.valid = kcg_true;
  outC->dmi_identifier_packet.systemTime = 0;
  outC->dmi_identifier_packet.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->dmi_identifier_packet.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->dmi_identifier_packet.l_name = 0;
  for (i6 = 0; i6 < 255; i6++) {
    outC->dmi_identifier_packet.DMI_name[i6] = ' ';
  }
  outC->dmi_identifier_packet.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Set_DMI_IDENTIFIER_reset_DMI_Control_Pkg_Sub_func(
  outC_Set_DMI_IDENTIFIER_DMI_Control_Pkg_Sub_func *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::Set_DMI_IDENTIFIER */
void Set_DMI_IDENTIFIER_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::Set_DMI_IDENTIFIER::DMI_name */ array_char_12 *DMI_name,
  /* DMI_Control_Pkg::Sub_func::Set_DMI_IDENTIFIER::SystemTime */ T_internal_Type_Obu_BasicTypes_Pkg SystemTime,
  /* DMI_Control_Pkg::Sub_func::Set_DMI_IDENTIFIER::valid */ kcg_bool valid,
  outC_Set_DMI_IDENTIFIER_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_int i;
  static T_internal_Type_Obu_BasicTypes_Pkg noname;
  static L_TEXT _1_noname;
  static DMI_TEXT_DMI_Types_Pkg _2_noname;
  static kcg_bool _3_noname;
  
  kcg_copy_array_char_12(&outC->_L7, DMI_name);
  outC->_L6 = ' ';
  /* pow */ for (i = 0; i < 243; i++) {
    outC->_L5[i] = outC->_L6;
  }
  kcg_copy_array_char_12(&outC->_L4[0], &outC->_L7);
  kcg_copy_array_char_243(&outC->_L4[12], &outC->_L5);
  outC->_L42 = valid;
  outC->_L24 = SystemTime;
  kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L25,
    (DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *)
      &DMI_identifier_const_DMI_Control_Pkg);
  outC->_L36 = outC->_L25.DMI_Identifier;
  outC->_L37 = outC->_L25.Cabin_Identifier;
  outC->_L41 = Dim_DMI_name_DMI_Control_Pkg;
  outC->_L40 = outC->_L25.m_version;
  outC->_L23.valid = outC->_L42;
  outC->_L23.systemTime = outC->_L24;
  outC->_L23.DMI_Identifier = outC->_L36;
  outC->_L23.Cabin_Identifier = outC->_L37;
  outC->_L23.l_name = outC->_L41;
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(&outC->_L23.DMI_name, &outC->_L4);
  outC->_L23.m_version = outC->_L40;
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(&outC->_L39, &outC->_L25.DMI_name);
  outC->_L38 = outC->_L25.l_name;
  outC->_L35 = outC->_L25.systemTime;
  outC->_L34 = outC->_L25.valid;
  kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->dmi_identifier_packet,
    &outC->_L23);
  noname = outC->_L35;
  _1_noname = outC->_L38;
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(&_2_noname, &outC->_L39);
  _3_noname = outC->_L34;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Set_DMI_IDENTIFIER_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

