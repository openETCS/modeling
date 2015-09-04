/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_Filter_Metadata_Element_TM_lib_internal.h"

void T_Filter_Metadata_Element_reset_TM_lib_internal(
  outC_T_Filter_Metadata_Element_TM_lib_internal *outC)
{
}

/* TM_lib_internal::T_Filter_Metadata_Element */
void T_Filter_Metadata_Element_TM_lib_internal(
  /* TM_lib_internal::T_Filter_Metadata_Element::value2 */kcg_int value2,
  /* TM_lib_internal::T_Filter_Metadata_Element::value1 */kcg_int value1,
  /* TM_lib_internal::T_Filter_Metadata_Element::do_filter */kcg_bool do_filter,
  outC_T_Filter_Metadata_Element_TM_lib_internal *outC)
{
  outC->_L2 = do_filter;
  outC->_L6 = !outC->_L2;
  outC->_L5 = value1;
  outC->_L1 = value2;
  outC->_L4 = outC->_L5 == outC->_L1;
  outC->_L3 = outC->_L4 | outC->_L6;
  outC->data_match = outC->_L3;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** T_Filter_Metadata_Element_TM_lib_internal.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

