/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P015_to_legacy_t_TM_conversions.h"

/* TM_conversions::C_P015_to_legacy_t */
void C_P015_to_legacy_t_TM_conversions(
  /* TM_conversions::C_P015_to_legacy_t::P015_in */ P015_OBU_T_TM *P015_in,
  /* TM_conversions::C_P015_to_legacy_t::P015_legacy_out */ P15_Level23MovementAuthorities_T_Packet_Types_Pkg *P015_legacy_out)
{
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  /* TM_conversions::C_P015_to_legacy_t::_L1 */
  static P015_OBU_T_TM _L1;
  /* TM_conversions::C_P015_to_legacy_t::_L20 */
  static P15_Level23MovementAuthorities_T_Packet_Types_Pkg _L20;
  /* TM_conversions::C_P015_to_legacy_t::_L23 */
  static array_169464 _L23;
  /* TM_conversions::C_P015_to_legacy_t::_L26 */
  static array_169441 _L26;
  /* TM_conversions::C_P015_to_legacy_t::_L45 */
  static P015_OBU_sectionlist_enum_T_TM _L45;
  
  kcg_copy_P015_OBU_T_TM(&_L1, P015_in);
  /* pow */ for (i2 = 0; i2 < 5; i2++) {
    kcg_copy_P015_OBU_T_TM(&_L26[i2], &_L1);
  }
  kcg_copy_P015_OBU_sectionlist_enum_T_TM(&_L45, &_L1.sections);
  /* pow */ for (i1 = 0; i1 < 5; i1++) {
    kcg_copy_P015_OBU_sectionlist_enum_T_TM(&_L23[i1], &_L45);
  }
  /* 1 */ for (i = 0; i < 5; i++) {
    /* 1 */
    C_P015_to_legacy_loop_TM_conversions(i, &_L26[i], &_L23[i], &_L20[i]);
  }
  kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(
    P015_legacy_out,
    &_L20);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P015_to_legacy_t_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

