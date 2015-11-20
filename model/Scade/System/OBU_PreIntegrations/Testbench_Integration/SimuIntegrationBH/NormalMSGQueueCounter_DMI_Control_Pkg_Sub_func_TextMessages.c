/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages.h"

#ifndef KCG_USER_DEFINED_INIT
void NormalMSGQueueCounter_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->init = kcg_true;
  outC->NumElem = 0;
  /* 1 */ Counter_init_pwlinear_int(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void NormalMSGQueueCounter_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->init = kcg_true;
  /* 1 */ Counter_reset_pwlinear_int(&outC->Context_1);
}

/* DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter */
void NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter::insert */ kcg_bool insert,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter::isFull */ kcg_bool isFull,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter::countCommand */ kcg_int countCommand,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter::num_last */ kcg_int num_last,
  outC_NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter::NumElem */
  static kcg_int last_NumElem;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter::_L161 */
  static kcg_int _L161;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter::_L160 */
  static kcg_bool _L160;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter::_L158 */
  static kcg_bool _L158;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter::_L156 */
  static kcg_int _L156;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter::_L155 */
  static kcg_int _L155;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter::_L154 */
  static kcg_bool _L154;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter::_L153 */
  static kcg_bool _L153;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter::_L149 */
  static kcg_bool _L149;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter::_L148 */
  static kcg_int _L148;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter::_L147 */
  static kcg_int _L147;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter::_L143 */
  static kcg_bool _L143;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter::_L167 */
  static kcg_int _L167;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter::_L169 */
  static kcg_int _L169;
  
  _L169 = num_last;
  _L156 = cDIM_MSGQueueMax_DMI_Control_Pkg;
  _L143 = _L169 > _L156;
  _L147 = 0;
  _L148 = 0;
  /* last_init_ck_NumElem */ if (outC->init) {
    last_NumElem = 0;
  }
  else {
    last_NumElem = outC->NumElem;
  }
  _L154 = isFull;
  _L160 = insert;
  _L153 = _L154 & _L160;
  _L167 = countCommand;
  /* 1 */ if (_L153) {
    _L161 = _L148;
  }
  else {
    _L161 = _L167;
  }
  _L158 = _L169 <= _L147;
  _L149 = _L158 | _L143;
  /* 1 */ Counter_pwlinear_int(_L161, _L149, &outC->Context_1);
  _L155 = outC->Context_1.Count;
  outC->NumElem = _L155;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

