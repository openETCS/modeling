/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-11T09:13:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_Filter_Metadata_TM_lib_internal.h"

void T_Filter_Metadata_reset_TM_lib_internal(
  outC_T_Filter_Metadata_TM_lib_internal *outC)
{
  /* 1 */ T_Filter_Metadata_Element_reset_TM_lib_internal(&outC->_1_Context_1);
  /* 3 */ T_Filter_Metadata_Element_reset_TM_lib_internal(&outC->Context_3);
  /* 2 */ T_Decode_metadata_new_reset_TM_lib_internal(&outC->Context_2);
  /* 1 */ T_Decode_metadata_new_reset_TM_lib_internal(&outC->Context_1);
}

/* TM_lib_internal::T_Filter_Metadata */
void T_Filter_Metadata_TM_lib_internal(
  /* TM_lib_internal::T_Filter_Metadata::Metadata_from_track */kcg_int Metadata_from_track,
  /* TM_lib_internal::T_Filter_Metadata::Metadata_looked_for */kcg_int Metadata_looked_for,
  /* TM_lib_internal::T_Filter_Metadata::F_version */kcg_bool F_version,
  /* TM_lib_internal::T_Filter_Metadata::F_id */kcg_bool F_id,
  outC_T_Filter_Metadata_TM_lib_internal *outC)
{
  outC->_L1 = Metadata_from_track;
  /* 1 */ T_Decode_metadata_new_TM_lib_internal(outC->_L1, &outC->Context_1);
  outC->_L3 = outC->Context_1.nid_packet;
  outC->_L4 = outC->Context_1.id;
  outC->_L6 = outC->Context_1.m_version;
  outC->_L2 = Metadata_looked_for;
  /* 2 */ T_Decode_metadata_new_TM_lib_internal(outC->_L2, &outC->Context_2);
  outC->_L7 = outC->Context_2.nid_packet;
  outC->_L8 = outC->Context_2.id;
  outC->_L10 = outC->Context_2.m_version;
  outC->_L18 = F_version;
  /* 3 */
  T_Filter_Metadata_Element_TM_lib_internal(
    outC->_L6,
    outC->_L10,
    outC->_L18,
    &outC->Context_3);
  outC->_L22 = outC->Context_3.data_match;
  outC->_L17 = F_id;
  /* 1 */
  T_Filter_Metadata_Element_TM_lib_internal(
    outC->_L4,
    outC->_L8,
    outC->_L17,
    &outC->_1_Context_1);
  outC->_L20 = outC->_1_Context_1.data_match;
  outC->_L11 = outC->_L3 == outC->_L7;
  outC->_L19 = outC->_L11 & outC->_L20 & outC->_L22;
  outC->data_match = outC->_L19;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** T_Filter_Metadata_TM_lib_internal.c
** Generation date: 2015-08-11T09:13:50
*************************************************************$ */

