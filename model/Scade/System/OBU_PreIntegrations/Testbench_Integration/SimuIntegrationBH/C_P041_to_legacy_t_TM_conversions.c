/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P041_to_legacy_t_TM_conversions.h"

/* TM_conversions::C_P041_to_legacy_t */
void C_P041_to_legacy_t_TM_conversions(
  /* TM_conversions::C_P041_to_legacy_t::P041_in */ P041_OBU_T_TM *P041_in,
  /* TM_conversions::C_P041_to_legacy_t::P041_legacy_out */ P41_LevelTransistionOrders_T_Packet_Types_Pkg *P041_legacy_out)
{
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  static N_ITER noname;
  static kcg_bool _5_noname;
  /* TM_conversions::C_P041_to_legacy_t::_L1 */
  static P041_OBU_T_TM _L1;
  /* TM_conversions::C_P041_to_legacy_t::_L8 */
  static P041_OBU_sectionlist_enum_T_TM _L8;
  /* TM_conversions::C_P041_to_legacy_t::_L7 */
  static N_ITER _L7;
  /* TM_conversions::C_P041_to_legacy_t::_L6 */
  static D_LEVELTR _L6;
  /* TM_conversions::C_P041_to_legacy_t::_L5 */
  static Q_SCALE _L5;
  /* TM_conversions::C_P041_to_legacy_t::_L4 */
  static Q_DIR _L4;
  /* TM_conversions::C_P041_to_legacy_t::_L3 */
  static kcg_bool _L3;
  /* TM_conversions::C_P041_to_legacy_t::_L20 */
  static P41_LevelTransistionOrders_T_Packet_Types_Pkg _L20;
  /* TM_conversions::C_P041_to_legacy_t::_L23 */
  static array_169835 _L23;
  /* TM_conversions::C_P041_to_legacy_t::_L24 */
  static array_int_7 _L24;
  /* TM_conversions::C_P041_to_legacy_t::_L25 */
  static array_169285 _L25;
  /* TM_conversions::C_P041_to_legacy_t::_L26 */
  static array_169246 _L26;
  
  kcg_copy_P041_OBU_T_TM(&_L1, P041_in);
  _L4 = _L1.q_dir;
  /* pow */ for (i4 = 0; i4 < 7; i4++) {
    _L26[i4] = _L4;
  }
  _L5 = _L1.q_scale;
  /* pow */ for (i3 = 0; i3 < 7; i3++) {
    _L25[i3] = _L5;
  }
  _L6 = _L1.d_leveltr;
  /* pow */ for (i2 = 0; i2 < 7; i2++) {
    _L24[i2] = _L6;
  }
  kcg_copy_P041_OBU_sectionlist_enum_T_TM(&_L8, &_L1.sections);
  /* pow */ for (i1 = 0; i1 < 7; i1++) {
    kcg_copy_P041_OBU_sectionlist_enum_T_TM(&_L23[i1], &_L8);
  }
  /* 1 */ for (i = 0; i < 7; i++) {
    /* 1 */
    C_P041_to_legacy_loop_TM_conversions(
      i,
      _L26[i],
      _L25[i],
      _L24[i],
      &_L23[i],
      &_L20[i]);
  }
  kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
    P041_legacy_out,
    &_L20);
  _L7 = _L1.n_iter;
  _L3 = _L1.valid;
  noname = _L7;
  _5_noname = _L3;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P041_to_legacy_t_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

