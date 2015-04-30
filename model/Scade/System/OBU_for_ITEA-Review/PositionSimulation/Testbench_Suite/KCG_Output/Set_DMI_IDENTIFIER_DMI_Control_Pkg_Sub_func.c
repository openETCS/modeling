/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Set_DMI_IDENTIFIER_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::Set_DMI_IDENTIFIER */
void Set_DMI_IDENTIFIER_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::Set_DMI_IDENTIFIER::DMI_name */ array_char_12 *DMI_name,
  /* DMI_Control_Pkg::Sub_func::Set_DMI_IDENTIFIER::SystemTime */ T_internal_Type_Obu_BasicTypes_Pkg SystemTime,
  /* DMI_Control_Pkg::Sub_func::Set_DMI_IDENTIFIER::valid */ kcg_bool valid,
  /* DMI_Control_Pkg::Sub_func::Set_DMI_IDENTIFIER::dmi_identifier_packet */ DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_identifier_packet)
{
  kcg_int i;
  DMI_TEXT_DMI_Types_Pkg tmp;
  
  (*dmi_identifier_packet).valid = valid;
  (*dmi_identifier_packet).systemTime = SystemTime;
  (*dmi_identifier_packet).DMI_Identifier =
    DMI_identifier_const_DMI_Control_Pkg.DMI_Identifier;
  (*dmi_identifier_packet).Cabin_Identifier =
    DMI_identifier_const_DMI_Control_Pkg.Cabin_Identifier;
  (*dmi_identifier_packet).l_name = Dim_DMI_name_DMI_Control_Pkg;
  (*dmi_identifier_packet).M_VERSION =
    DMI_identifier_const_DMI_Control_Pkg.M_VERSION;
  kcg_copy_array_char_12(&tmp[0], DMI_name);
  for (i = 0; i < 243; i++) {
    (&tmp[12])[i] = ' ';
  }
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(&(*dmi_identifier_packet).DMI_name, &tmp);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** Set_DMI_IDENTIFIER_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

