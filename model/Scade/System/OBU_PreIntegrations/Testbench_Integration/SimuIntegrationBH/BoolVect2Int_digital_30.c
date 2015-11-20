/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BoolVect2Int_digital_30.h"

/* digital::BoolVect2Int */
kcg_int BoolVect2Int_digital_30(
  /* digital::BoolVect2Int::BV */ DMI_Available_Menu_int_T_DATA *BV)
{
  /* digital::BoolVect2Int */
  static kcg_int acc;
  static kcg_int i;
  /* digital::BoolVect2IntElt::_L9 */
  static kcg_int _L9_1;
  /* digital::BoolVect2IntElt::_L8 */
  static kcg_int _L8_1;
  /* digital::BoolVect2IntElt::_L7 */
  static kcg_int _L7_1;
  /* digital::BoolVect2IntElt::_L6 */
  static kcg_int _L6_1;
  /* digital::BoolVect2IntElt::_L5 */
  static kcg_int _L5_1;
  /* digital::BoolVect2IntElt::_L4 */
  static kcg_int _L4_1;
  /* digital::BoolVect2IntElt::_L2 */
  static kcg_bool _L2_1;
  /* digital::BoolVect2IntElt::_L1 */
  static kcg_int _L1_1;
  /* digital::BoolVect2Int::_L2 */
  static kcg_int _L2;
  /* digital::BoolVect2Int::_L3 */
  static kcg_int _L3;
  /* digital::BoolVect2Int::_L4 */
  static DMI_Available_Menu_int_T_DATA _L4;
  /* digital::BoolVect2Int::Out */
  static kcg_int Out;
  
  _L3 = 0;
  kcg_copy_DMI_Available_Menu_int_T_DATA(&_L4, BV);
  _L2 = _L3;
  for (i = 0; i < 30; i++) {
    acc = _L2;
    _L2_1 = _L4[i];
    _L6_1 = 1;
    _L7_1 = 0;
    /* 2 */ if (_L2_1) {
      _L5_1 = _L6_1;
    }
    else {
      _L5_1 = _L7_1;
    }
    _L1_1 = acc;
    _L9_1 = 2;
    _L4_1 = _L1_1 * _L9_1;
    _L8_1 = _L5_1 + _L4_1;
    _L2 = _L8_1;
  }
  Out = _L2;
  return Out;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BoolVect2Int_digital_30.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

