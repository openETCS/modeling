/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::CheckTypeOfText */
void CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::CheckTypeOfText::Queue */array__31788 *Queue,
  /* DMI_Control_Pkg::Sub_func::TextMessages::CheckTypeOfText::Output1 */kcg_bool *Output1,
  /* DMI_Control_Pkg::Sub_func::TextMessages::CheckTypeOfText::Output2 */kcg_bool *Output2)
{
  /* DMI_Control_Pkg::Sub_func::TextMessages::CheckTypeOfText::_L7 */ kcg_bool _L7;
  
  _L7 = (*Queue)[0].dmi_msg.l_text == 0;
  *Output2 = (*Queue)[0].present & (*Queue)[0].dmi_msg.valid & !_L7;
  *Output1 = (*Queue)[0].present & (*Queue)[0].dmi_msg.valid & _L7;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

