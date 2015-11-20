/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ShowMsg_FixIndexArray_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray */
kcg_int ShowMsg_FixIndexArray_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray::index */kcg_int index,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray::msg */MsgStructure *msg)
{
  kcg_bool tmp1;
  kcg_bool tmp;
  kcg_int i;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray::_L18 */ kcg_int _L18;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray::_L19 */ kcg_bool _L19;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray::_L76 */ kcg_bool _L76;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_FixIndexArray::FixIndex */ kcg_int FixIndex;
  
  /* 1 */
  CheckMsgIsFixText_DMI_Control_Pkg_Sub_func_TextMessages(msg, &_L76, &_L19);
  _L19 = kcg_false;
  for (i = 0; i < 27; i++) {
    tmp1 = _L19;
    /* 1 */
    Find_Q_Text_iterator_DMI_Control_Pkg_Utils(
      i,
      tmp1,
      ArrayEnum_Q_text_DMI_Control_Pkg[i],
      (*msg).dmi_msg.q_text,
      &tmp,
      &_L19);
    _L18 = i + 1;
    if (!tmp) {
      break;
    }
  }
  if (_L76 | !(*msg).dmi_msg.valid) {
    FixIndex = 0;
  }
  else {
    FixIndex = _L18;
  }
  return FixIndex;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ShowMsg_FixIndexArray_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

