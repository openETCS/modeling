/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P005_ForCalcTrainPos_TM_conversions.h"

/* TM_conversions::C_P005_ForCalcTrainPos */
void C_P005_ForCalcTrainPos_TM_conversions(
  /* TM_conversions::C_P005_ForCalcTrainPos::P005_in */ P005_OBU_T_TM *P005_in,
  /* TM_conversions::C_P005_ForCalcTrainPos::LRBG */ NID_LRBG LRBG,
  /* TM_conversions::C_P005_ForCalcTrainPos::NID_C_onboard */ NID_C NID_C_onboard,
  /* TM_conversions::C_P005_ForCalcTrainPos::LinkedBGsOUT */ LinkedBGs_T_BG_Types_Pkg *LinkedBGsOUT)
{
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  static kcg_bool noname;
  static L_PACKET _5_noname;
  static N_ITER _6_noname;
  /* TM_conversions::C_P005_ForCalcTrainPos::_L1 */
  static NID_LRBG _L1;
  /* TM_conversions::C_P005_ForCalcTrainPos::_L2 */
  static P005_OBU_T_TM _L2;
  /* TM_conversions::C_P005_ForCalcTrainPos::_L4 */
  static LinkedBGs_T_BG_Types_Pkg _L4;
  /* TM_conversions::C_P005_ForCalcTrainPos::_L11 */
  static P005_OBU_sectionlist_enum_T_TM _L11;
  /* TM_conversions::C_P005_ForCalcTrainPos::_L10 */
  static N_ITER _L10;
  /* TM_conversions::C_P005_ForCalcTrainPos::_L9 */
  static Q_SCALE _L9;
  /* TM_conversions::C_P005_ForCalcTrainPos::_L8 */
  static L_PACKET _L8;
  /* TM_conversions::C_P005_ForCalcTrainPos::_L7 */
  static Q_DIR _L7;
  /* TM_conversions::C_P005_ForCalcTrainPos::_L6 */
  static kcg_bool _L6;
  /* TM_conversions::C_P005_ForCalcTrainPos::_L18 */
  static P005_OBU_sectionlist_enum_T_TM _L18;
  /* TM_conversions::C_P005_ForCalcTrainPos::_L20 */
  static array_170543 _L20;
  /* TM_conversions::C_P005_ForCalcTrainPos::_L21 */
  static array_170575 _L21;
  /* TM_conversions::C_P005_ForCalcTrainPos::_L22 */
  static array_int_33 _L22;
  /* TM_conversions::C_P005_ForCalcTrainPos::_L23 */
  static NID_C _L23;
  /* TM_conversions::C_P005_ForCalcTrainPos::_L24 */
  static array_int_33 _L24;
  
  _L1 = LRBG;
  kcg_copy_P005_OBU_T_TM(&_L2, P005_in);
  /* pow */ for (i4 = 0; i4 < 33; i4++) {
    _L22[i4] = _L1;
  }
  _L7 = _L2.q_dir;
  /* pow */ for (i3 = 0; i3 < 33; i3++) {
    _L20[i3] = _L7;
  }
  _L9 = _L2.q_scale;
  /* pow */ for (i2 = 0; i2 < 33; i2++) {
    _L21[i2] = _L9;
  }
  kcg_copy_P005_OBU_sectionlist_enum_T_TM(&_L11, &_L2.sections);
  kcg_copy_P005_OBU_sectionlist_enum_T_TM(
    &_L18,
    (P005_OBU_sectionlist_enum_T_TM *) &_L11[0]);
  _L23 = NID_C_onboard;
  /* pow */ for (i1 = 0; i1 < 33; i1++) {
    _L24[i1] = _L23;
  }
  for (i = 0; i < 33; i++) {
    /* 1 */
    C_P005_LinkedBGs_TM_conversions(
      _L22[i],
      _L20[i],
      _L21[i],
      &_L18[i],
      _L24[i],
      &_L4[i]);
  }
  kcg_copy_LinkedBGs_T_BG_Types_Pkg(LinkedBGsOUT, &_L4);
  _L10 = _L2.n_iter;
  _L8 = _L2.l_packet;
  _L6 = _L2.valid;
  noname = _L6;
  _5_noname = _L8;
  _6_noname = _L10;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P005_ForCalcTrainPos_TM_conversions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

