/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData */
void FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::acc */ MetadataElement_T_Common_Types_Pkg *acc,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::acc1 */ MetadataElement_T_Common_Types_Pkg *acc1,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::go_on */ kcg_bool *go_on,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::metadata */ MetadataElement_T_Common_Types_Pkg *metadata)
{
  static Q_DIR noname;
  static kcg_int _1_noname;
  static NID_PACKET _2_noname;
  static NID_PACKET _3_noname;
  static Q_DIR _4_noname;
  static kcg_int _5_noname;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L1 */
  static MetadataElement_T_Common_Types_Pkg _L1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L6 */
  static NID_PACKET _L6;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L5 */
  static Q_DIR _L5;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L4 */
  static kcg_bool _L4;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L3 */
  static kcg_int _L3;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L2 */
  static kcg_int _L2;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L7 */
  static MetadataElement_T_Common_Types_Pkg _L7;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L8 */
  static NID_PACKET _L8;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L9 */
  static Q_DIR _L9;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L10 */
  static kcg_bool _L10;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L11 */
  static kcg_int _L11;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L12 */
  static kcg_int _L12;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L13 */
  static kcg_bool _L13;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L14 */
  static MetadataElement_T_Common_Types_Pkg _L14;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L15 */
  static kcg_bool _L15;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L16 */
  static MetadataElement_T_Common_Types_Pkg _L16;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L17 */
  static MetadataElement_T_Common_Types_Pkg _L17;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L18 */
  static MetadataElement_T_Common_Types_Pkg _L18;
  
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L1, acc);
  _L2 = _L1.endAddress;
  _L3 = _L1.startAddress;
  _L4 = _L1.valid;
  _L5 = _L1.q_dir;
  _L6 = _L1.nid_packet;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L7, acc1);
  _L12 = _L7.endAddress;
  _L11 = _L7.startAddress;
  _L10 = _L7.valid;
  _L9 = _L7.q_dir;
  _L8 = _L7.nid_packet;
  _L13 = _L4 & _L10;
  *go_on = _L13;
  noname = _L5;
  _1_noname = _L3;
  _2_noname = _L6;
  _3_noname = _L8;
  _4_noname = _L9;
  _5_noname = _L11;
  _L15 = _L2 < _L12;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L16, &_L7);
  if (kcg_true) {
    _L16.endAddress = _L2;
  }
  /* 1 */ if (_L15) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L14, &_L7);
  }
  else {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L14, &_L16);
  }
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L18, acc);
  /* 2 */ if (_L13) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L17, &_L14);
  }
  else {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L17, &_L18);
  }
  kcg_copy_MetadataElement_T_Common_Types_Pkg(metadata, &_L17);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

