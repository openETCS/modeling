/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress */
void ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::metaData_In */ MetadataElement_T_Common_Types_Pkg *metaData_In,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::distance */ kcg_int distance,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::metaData_Out */ MetadataElement_T_Common_Types_Pkg *metaData_Out)
{
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::_L1 */
  static MetadataElement_T_Common_Types_Pkg _L1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::_L6 */
  static NID_PACKET _L6;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::_L5 */
  static Q_DIR _L5;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::_L4 */
  static kcg_bool _L4;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::_L3 */
  static kcg_int _L3;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::_L2 */
  static kcg_int _L2;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::_L7 */
  static MetadataElement_T_Common_Types_Pkg _L7;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::_L8 */
  static kcg_int _L8;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::_L9 */
  static kcg_int _L9;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::_L11 */
  static kcg_int _L11;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::_L12 */
  static kcg_int _L12;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::_L13 */
  static kcg_int _L13;
  
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L1, metaData_In);
  _L2 = _L1.endAddress;
  _L3 = _L1.startAddress;
  _L4 = _L1.valid;
  _L5 = _L1.q_dir;
  _L6 = _L1.nid_packet;
  _L11 = 1;
  _L8 = distance;
  _L9 = _L11 + _L8;
  _L12 = _L2 - _L3;
  _L13 = _L9 + _L12;
  _L7.nid_packet = _L6;
  _L7.q_dir = _L5;
  _L7.valid = _L4;
  _L7.startAddress = _L9;
  _L7.endAddress = _L13;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(metaData_Out, &_L7);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

