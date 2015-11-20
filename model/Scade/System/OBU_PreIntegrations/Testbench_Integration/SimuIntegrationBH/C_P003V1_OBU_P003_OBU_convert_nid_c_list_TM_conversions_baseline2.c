/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003V1_OBU_P003_OBU_convert_nid_c_list_TM_conversions_baseline2.h"

/* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list */
void C_P003V1_OBU_P003_OBU_convert_nid_c_list_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list::P003V1_onboard */ P003V1_OBU_T_TM_baseline2 *P003V1_onboard,
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list::nid_c1 */ NID_C *nid_c1,
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list::n_iter_out */ N_ITER *n_iter_out,
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list::nid_c_list */ P003_OBU_nid_c_sectionlist_enum_T_TM *nid_c_list)
{
  static kcg_int i;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list::_L59 */
  static P003V1_OBU_T_TM_baseline2 _L59;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list::_L108 */
  static N_ITER _L108;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list::_L109 */
  static P003V1_sectionlist_enum_T_TM_baseline2 _L109;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list::_L110 */
  static array_169076 _L110;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list::_L111 */
  static P003V1_section_enum_T_TM_baseline2 _L111;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list::_L112 */
  static NID_C _L112;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list::_L113 */
  static array_168647 _L113;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list::_L115 */
  static P003V1_section_enum_T_TM_baseline2 _L115;
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list::_L116 */
  static array_169171 _L116;
  
  kcg_copy_P003V1_OBU_T_TM_baseline2(&_L59, P003V1_onboard);
  kcg_copy_P003V1_sectionlist_enum_T_TM_baseline2(&_L109, &_L59.SECTIONS);
  kcg_copy_P003V1_section_enum_T_TM_baseline2(&_L111, &_L109[0]);
  _L112 = _L111.nid_c;
  *nid_c1 = _L112;
  _L108 = _L59.n_iter;
  *n_iter_out = _L108;
  kcg_copy_array_169076(&_L110, (array_169076 *) &_L109[1]);
  kcg_copy_P003V1_section_enum_T_TM_baseline2(
    &_L115,
    (P003V1_section_enum_T_TM_baseline2 *)
      &DEFAULT_P003V1_OBU_section_TM_baseline2);
  /* pow */ for (i = 0; i < 1; i++) {
    kcg_copy_P003V1_section_enum_T_TM_baseline2(&_L116[i], &_L115);
  }
  kcg_copy_array_169076(&_L113[0], &_L110);
  kcg_copy_array_169171(&_L113[31], &_L116);
  kcg_copy_P003_OBU_nid_c_sectionlist_enum_T_TM(nid_c_list, &_L113);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P003V1_OBU_P003_OBU_convert_nid_c_list_TM_conversions_baseline2.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

