/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "doTextMessages_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::doTextMessages */
void doTextMessages_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::doTextMessages::dmi_FromBG */ kcg_bool dmi_FromBG,
  /* manage_DMI_Output_Pkg::doTextMessages::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::doTextMessages::dmi_textMessage */ DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_textMessage)
{
  if (dmi_FromBG) {
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      dmi_textMessage,
      (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cTextSpecial_BG_manage_DMI_Output_Pkg);
    (*dmi_textMessage).system_clock = inSystemTime;
  }
  else {
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      dmi_textMessage,
      (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cDefaultText_manage_DMI_Output_Pkg);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** doTextMessages_manage_DMI_Output_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

