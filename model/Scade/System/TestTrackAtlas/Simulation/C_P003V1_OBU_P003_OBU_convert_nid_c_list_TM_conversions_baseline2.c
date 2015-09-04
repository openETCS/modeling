/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003V1_OBU_P003_OBU_convert_nid_c_list_TM_conversions_baseline2.h"

void C_P003V1_OBU_P003_OBU_convert_nid_c_list_reset_TM_conversions_baseline2(
  outC_C_P003V1_OBU_P003_OBU_convert_nid_c_list_TM_conversions_baseline2 *outC)
{
}

/* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list */
void C_P003V1_OBU_P003_OBU_convert_nid_c_list_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list::P003V1_onboard */P003V1_OBU_T_TM_baseline2 *P003V1_onboard,
  outC_C_P003V1_OBU_P003_OBU_convert_nid_c_list_TM_conversions_baseline2 *outC)
{
  kcg_int i;
  
  kcg_copy_P003V1_section_enum_T_TM_baseline2(
    &outC->_L115,
    (P003V1_section_enum_T_TM_baseline2 *)
      &DEFAULT_P003V1_OBU_section_TM_baseline2);
  for (i = 0; i < 1; i++) {
    kcg_copy_P003V1_section_enum_T_TM_baseline2(&outC->_L116[i], &outC->_L115);
  }
  kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->_L59, P003V1_onboard);
  kcg_copy_P003V1_sectionlist_enum_T_TM_baseline2(
    &outC->_L109,
    &outC->_L59.SECTIONS);
  kcg_copy_array__24105(&outC->_L110, (array__24105 *) &outC->_L109[1]);
  kcg_copy_array__24105(&outC->_L113[0], &outC->_L110);
  kcg_copy_array__24108(&outC->_L113[31], &outC->_L116);
  kcg_copy_P003V1_section_enum_T_TM_baseline2(&outC->_L111, &outC->_L109[0]);
  outC->_L112 = outC->_L111.nid_c;
  outC->_L108 = outC->_L59.n_iter;
  kcg_copy_P003_OBU_nid_c_sectionlist_enum_T_TM(
    &outC->nid_c_list,
    &outC->_L113);
  outC->n_iter_out = outC->_L108;
  outC->nid_c1 = outC->_L112;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P003V1_OBU_P003_OBU_convert_nid_c_list_TM_conversions_baseline2.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

