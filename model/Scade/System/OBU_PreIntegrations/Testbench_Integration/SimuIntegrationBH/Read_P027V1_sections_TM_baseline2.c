/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P027V1_sections_TM_baseline2.h"

/* TM_baseline2::Read_P027V1_sections */
void Read_P027V1_sections_TM_baseline2(
  /* TM_baseline2::Read_P027V1_sections::i */ kcg_int i,
  /* TM_baseline2::Read_P027V1_sections::Message_IN */ CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM_baseline2::Read_P027V1_sections::n_iter_outer */ kcg_int n_iter_outer,
  /* TM_baseline2::Read_P027V1_sections::meta_sections */ kcg_int meta_sections,
  /* TM_baseline2::Read_P027V1_sections::cont */ kcg_bool *cont,
  /* TM_baseline2::Read_P027V1_sections::P027V1_OBU_section_out */ P027V1_section_enum_T_TM_baseline2 *P027V1_OBU_section_out)
{
  static kcg_bool noname;
  /* TM_baseline2::Read_P027V1_sections::_L177 */
  static P027V1_section_enum_T_TM_baseline2 _L177;
  /* TM_baseline2::Read_P027V1_sections::_L176 */
  static kcg_int _L176;
  /* TM_baseline2::Read_P027V1_sections::_L175 */
  static CompressedPackets_T_Common_Types_Pkg _L175;
  /* TM_baseline2::Read_P027V1_sections::_L174 */
  static kcg_int _L174;
  /* TM_baseline2::Read_P027V1_sections::_L172 */
  static CompressedPacketData_T_Common_Types_Pkg _L172;
  /* TM_baseline2::Read_P027V1_sections::_L173 */
  static MetadataElement_T_Common_Types_Pkg _L173;
  /* TM_baseline2::Read_P027V1_sections::_L171 */
  static kcg_int _L171;
  /* TM_baseline2::Read_P027V1_sections::_L179 */
  static kcg_int _L179;
  /* TM_baseline2::Read_P027V1_sections::_L180 */
  static kcg_bool _L180;
  /* TM_baseline2::Read_P027V1_sections::_L181 */
  static kcg_bool _L181;
  
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L175, Message_IN);
  _L171 = meta_sections;
  _L179 = i;
  _L176 = /* 1 */ T_Decode_Metadata_L2_TM_lib_internal(_L171, _L179);
  /* 1 */
  RECV_ReadPackets_TM_lib_internal(
    &_L175,
    _L176,
    kcg_true,
    kcg_true,
    &_L172,
    &_L173,
    &_L181);
  /* 1 */
  C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2(
    &_L172,
    &_L173,
    &_L177);
  kcg_copy_P027V1_section_enum_T_TM_baseline2(P027V1_OBU_section_out, &_L177);
  _L174 = n_iter_outer;
  _L180 = _L179 < _L174;
  *cont = _L180;
  noname = _L181;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P027V1_sections_TM_baseline2.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

