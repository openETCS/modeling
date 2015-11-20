/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData */
void Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::ind */ kcg_int ind,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::acc */ Metadata_T_Common_Types_Pkg *acc,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::metadata_in */ Metadata_T_Common_Types_Pkg *metadata_in,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::metadata_out */ Metadata_T_Common_Types_Pkg *_2_metadata_out)
{
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::metadata_out */
  static Metadata_T_Common_Types_Pkg _1_metadata_out;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::IfBlock1::then::_L1 */
  static Metadata_T_Common_Types_Pkg _L1_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::metadata_out */
  static Metadata_T_Common_Types_Pkg metadata_out;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::IfBlock1::else::_L26 */
  static MetadataElement_T_Common_Types_Pkg _L26_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::IfBlock1::else::_L20 */
  static kcg_int _L20_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::IfBlock1::else::_L11 */
  static MetadataElement_T_Common_Types_Pkg _L11_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::IfBlock1::else::_L12 */
  static Metadata_T_Common_Types_Pkg _L12_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::IfBlock1::else::_L13 */
  static kcg_int _L13_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::IfBlock1::else::_L14 */
  static Metadata_T_Common_Types_Pkg _L14_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::IfBlock1::else::_L15 */
  static kcg_int _L15_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::IfBlock1::else::_L16 */
  static Metadata_T_Common_Types_Pkg _L16_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::IfBlock1::else::_L18 */
  static MetadataElement_T_Common_Types_Pkg _L18_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::IfBlock1::else::_L19 */
  static Metadata_T_Common_Types_Pkg _L19_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::dup */
  static kcg_bool dup;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::_L11 */
  static NID_PACKET _L11;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::_L12 */
  static Metadata_T_Common_Types_Pkg _L12;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::_L14 */
  static Metadata_T_Common_Types_Pkg _L14;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::_L16 */
  static NID_PACKET _L16;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::_L17 */
  static kcg_bool _L17;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::_L22 */
  static Metadata_T_Common_Types_Pkg _L22;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::_L21 */
  static Q_DIR _L21;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::_L20 */
  static kcg_bool _L20;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::_L19 */
  static Q_DIR _L19;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::_L18 */
  static Metadata_T_Common_Types_Pkg _L18;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::_L23 */
  static kcg_bool _L23;
  
  kcg_copy_Metadata_T_Common_Types_Pkg(&_L12, acc);
  _L11 = _L12[0].nid_packet;
  kcg_copy_Metadata_T_Common_Types_Pkg(&_L14, metadata_in);
  _L16 = _L14[0].nid_packet;
  _L17 = _L11 == _L16;
  kcg_copy_Metadata_T_Common_Types_Pkg(&_L22, acc);
  _L19 = _L22[0].q_dir;
  kcg_copy_Metadata_T_Common_Types_Pkg(&_L18, metadata_in);
  _L21 = _L18[0].q_dir;
  _L20 = _L19 == _L21;
  _L23 = _L17 & _L20;
  dup = _L23;
  IfBlock1_clock = dup;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_Metadata_T_Common_Types_Pkg(&_L1_IfBlock1, acc);
    kcg_copy_Metadata_T_Common_Types_Pkg(&_1_metadata_out, &_L1_IfBlock1);
    kcg_copy_Metadata_T_Common_Types_Pkg(_2_metadata_out, &_1_metadata_out);
  }
  else {
    kcg_copy_Metadata_T_Common_Types_Pkg(&_L12_IfBlock1, acc);
    kcg_copy_Metadata_T_Common_Types_Pkg(&_L14_IfBlock1, metadata_in);
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &_L18_IfBlock1,
      (MetadataElement_T_Common_Types_Pkg *)
        &cMetaDataElement_CheckBGConsistency_Pkg);
    _L13_IfBlock1 = ind;
    if ((0 <= _L13_IfBlock1) & (_L13_IfBlock1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L11_IfBlock1,
        &_L14_IfBlock1[_L13_IfBlock1]);
    }
    else {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L11_IfBlock1,
        &_L18_IfBlock1);
    }
    kcg_copy_Metadata_T_Common_Types_Pkg(&_L19_IfBlock1, acc);
    /* 3 */
    FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction(
      &_L19_IfBlock1,
      &_L15_IfBlock1,
      &_L20_IfBlock1);
    /* 1 */
    ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction(
      &_L11_IfBlock1,
      _L20_IfBlock1,
      &_L26_IfBlock1);
    kcg_copy_Metadata_T_Common_Types_Pkg(&_L16_IfBlock1, &_L12_IfBlock1);
    if ((0 <= _L15_IfBlock1) & (_L15_IfBlock1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L16_IfBlock1[_L15_IfBlock1],
        &_L26_IfBlock1);
    }
    kcg_copy_Metadata_T_Common_Types_Pkg(&metadata_out, &_L16_IfBlock1);
    kcg_copy_Metadata_T_Common_Types_Pkg(_2_metadata_out, &metadata_out);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

