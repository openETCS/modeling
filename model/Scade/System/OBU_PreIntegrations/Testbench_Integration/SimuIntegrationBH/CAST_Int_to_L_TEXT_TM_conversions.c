/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_L_TEXT_TM_conversions.h"

/* TM_conversions::CAST_Int_to_L_TEXT */
L_TEXT CAST_Int_to_L_TEXT_TM_conversions(
  /* TM_conversions::CAST_Int_to_L_TEXT::l_text_int */ kcg_int l_text_int)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  /* TM_conversions::CAST_Int_to_L_TEXT::_L1 */
  static kcg_int _L1;
  /* TM_conversions::CAST_Int_to_L_TEXT::_L9 */
  static kcg_bool _L9;
  /* TM_conversions::CAST_Int_to_L_TEXT::_L8 */
  static kcg_bool _L8;
  /* TM_conversions::CAST_Int_to_L_TEXT::_L12 */
  static kcg_int _L12;
  /* TM_conversions::CAST_Int_to_L_TEXT::_L13 */
  static kcg_int _L13;
  /* TM_conversions::CAST_Int_to_L_TEXT::l_text */
  static L_TEXT l_text;
  
  _L1 = l_text_int;
  _L13 = 255;
  _L9 = _L1 > _L13;
  noname = _L9;
  _L12 = 0;
  _L8 = _L1 < _L12;
  _1_noname = _L8;
  l_text = _L1;
  return l_text;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_L_TEXT_TM_conversions.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

