/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Set_DMI_IDENTIFIER_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::Set_DMI_IDENTIFIER */
void Set_DMI_IDENTIFIER_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::Set_DMI_IDENTIFIER::DMI_name */array_char_12 *DMI_name,
  /* DMI_Control_Pkg::Sub_func::Set_DMI_IDENTIFIER::SystemTime */T_internal_Type_Obu_BasicTypes_Pkg SystemTime,
  /* DMI_Control_Pkg::Sub_func::Set_DMI_IDENTIFIER::valid */kcg_bool valid,
  /* DMI_Control_Pkg::Sub_func::Set_DMI_IDENTIFIER::dmi_identifier_packet */DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_identifier_packet)
{
  kcg_int i;
  /* DMI_Control_Pkg::Sub_func::Set_DMI_IDENTIFIER::_L5 */ array_char_243 _L5;
  
  (*dmi_identifier_packet).valid = valid;
  (*dmi_identifier_packet).systemTime = SystemTime;
  (*dmi_identifier_packet).DMI_Identifier =
    DMI_identifier_const_DMI_Control_Pkg.DMI_Identifier;
  (*dmi_identifier_packet).Cabin_Identifier =
    DMI_identifier_const_DMI_Control_Pkg.Cabin_Identifier;
  (*dmi_identifier_packet).l_name = Dim_DMI_name_DMI_Control_Pkg;
  (*dmi_identifier_packet).m_version =
    DMI_identifier_const_DMI_Control_Pkg.m_version;
  for (i = 0; i < 243; i++) {
    _L5[i] = ' ';
  }
  kcg_copy_array_char_12(&(*dmi_identifier_packet).DMI_name[0], DMI_name);
  kcg_copy_array_char_243(&(*dmi_identifier_packet).DMI_name[12], &_L5);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Set_DMI_IDENTIFIER_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

