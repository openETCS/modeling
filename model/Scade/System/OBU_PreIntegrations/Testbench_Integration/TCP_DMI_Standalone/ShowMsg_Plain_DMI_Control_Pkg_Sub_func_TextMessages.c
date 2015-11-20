/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain */
void ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::Msgarray */array__31785 *Msgarray,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::scrollLevel */kcg_int scrollLevel,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::PlainText */array_char_30_5 *PlainText,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::isMoreThanFive */kcg_bool *isMoreThanFive,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::MsgNumArray */array_int_10 *MsgNumArray)
{
  array_char_30_5 tmp;
  kcg_int i;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::num1 */ kcg_int num1;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::num2 */ kcg_int num2;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::num3 */ kcg_int num3;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::num4 */ kcg_int num4;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::num5 */ kcg_int num5;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::num6 */ kcg_int num6;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::num7 */ kcg_int num7;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::num8 */ kcg_int num8;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::num9 */ kcg_int num9;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::num10 */ kcg_int num10;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::_L166 */ array_char_30_5 _L166;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::_L169 */ array_char_30_5 _L169;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::_L170 */ array_char_30_5 _L170;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::_L171 */ array_char_30_5 _L171;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::_L172 */ array_char_30_5 _L172;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::_L173 */ array_char_30_5 _L173;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::_L174 */ array_char_30_5 _L174;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::_L175 */ array_char_30_5 _L175;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::_L176 */ array_char_30_5 _L176;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::_L177 */ array_char_30_5 _L177;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain::_L232 */ kcg_int _L232;
  
  /* 1 */
  SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages(&(*Msgarray)[0], &_L166);
  num1 = /* 1 */ CountMSG_DMI_Control_Pkg_Sub_func_TextMessages(&_L166);
  (*MsgNumArray)[0] = num1;
  /* 2 */
  SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages(&(*Msgarray)[1], &_L169);
  num2 = /* 2 */ CountMSG_DMI_Control_Pkg_Sub_func_TextMessages(&_L169);
  num4 = num1 + num2;
  (*MsgNumArray)[1] = num4;
  /* 3 */
  SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages(&(*Msgarray)[2], &_L170);
  num3 = /* 3 */ CountMSG_DMI_Control_Pkg_Sub_func_TextMessages(&_L170);
  _L232 = num4 + num3;
  (*MsgNumArray)[2] = _L232;
  /* 4 */
  SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages(&(*Msgarray)[3], &_L171);
  num4 = /* 4 */ CountMSG_DMI_Control_Pkg_Sub_func_TextMessages(&_L171);
  num6 = _L232 + num4;
  (*MsgNumArray)[3] = num6;
  /* 5 */
  SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages(&(*Msgarray)[4], &_L172);
  num5 = /* 5 */ CountMSG_DMI_Control_Pkg_Sub_func_TextMessages(&_L172);
  num7 = num6 + num5;
  (*MsgNumArray)[4] = num7;
  /* 6 */
  SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages(&(*Msgarray)[5], &_L173);
  num6 = /* 6 */ CountMSG_DMI_Control_Pkg_Sub_func_TextMessages(&_L173);
  num8 = num7 + num6;
  (*MsgNumArray)[5] = num8;
  /* 7 */
  SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages(&(*Msgarray)[6], &_L174);
  num7 = /* 7 */ CountMSG_DMI_Control_Pkg_Sub_func_TextMessages(&_L174);
  num9 = num8 + num7;
  (*MsgNumArray)[6] = num9;
  /* 8 */
  SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages(&(*Msgarray)[7], &_L175);
  num8 = /* 8 */ CountMSG_DMI_Control_Pkg_Sub_func_TextMessages(&_L175);
  num10 = num9 + num8;
  (*MsgNumArray)[7] = num10;
  /* 9 */
  SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages(&(*Msgarray)[8], &_L176);
  num9 = /* 9 */ CountMSG_DMI_Control_Pkg_Sub_func_TextMessages(&_L176);
  i = num10 + num9;
  (*MsgNumArray)[8] = i;
  /* 10 */
  SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages(&(*Msgarray)[9], &_L177);
  num10 = /* 10 */ CountMSG_DMI_Control_Pkg_Sub_func_TextMessages(&_L177);
  (*MsgNumArray)[9] = i + num10;
  *isMoreThanFive = _L232 + num4 + num5 + num6 + num7 + num8 + num9 + num10 >
    cDIM_MSGQueue_DMI_Control_Pkg;
  kcg_copy_array_char_30_5(PlainText, &_L166);
  for (i = 0; i < 5; i++) {
    kcg_copy_array_char_30_5(&tmp, PlainText);
    /* 1 */
    MergeMessagesToPlain_iteration_DMI_Control_Pkg_Sub_func_TextMessages(
      i,
      &tmp,
      &_L166,
      num1,
      &_L169,
      num2,
      &_L170,
      num3,
      &_L171,
      num4,
      &_L172,
      num5,
      &_L173,
      num6,
      &_L174,
      num7,
      &_L175,
      num8,
      &_L176,
      num9,
      &_L177,
      scrollLevel,
      PlainText);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

