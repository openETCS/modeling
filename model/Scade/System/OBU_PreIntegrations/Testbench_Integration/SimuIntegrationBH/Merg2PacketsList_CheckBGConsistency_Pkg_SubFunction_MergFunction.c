/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList */
void Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::ind */ kcg_int ind,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::acc */ CompressedPacketData_T_Common_Types_Pkg *acc,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::lastvalidAddress */ CompressedPacketData_T_Common_Types_Pkg *lastvalidAddress,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::compressedPacketIn */ CompressedPacketData_T_Common_Types_Pkg *compressedPacketIn,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::mergedPackets */ CompressedPacketData_T_Common_Types_Pkg *mergedPackets)
{
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::_L16 */
  static kcg_int _L16;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::_L15 */
  static CompressedPacketData_T_Common_Types_Pkg _L15;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::_L14 */
  static kcg_int _L14;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::_L13 */
  static CompressedPacketData_T_Common_Types_Pkg _L13;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::_L12 */
  static kcg_int _L12;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::_L11 */
  static kcg_int _L11;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::_L10 */
  static CompressedPacketData_T_Common_Types_Pkg _L10;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::_L9 */
  static kcg_int _L9;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::_L8 */
  static kcg_int _L8;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::_L7 */
  static CompressedPacketData_T_Common_Types_Pkg _L7;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::_L6 */
  static kcg_int _L6;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::_L5 */
  static kcg_bool _L5;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::_L4 */
  static CompressedPacketData_T_Common_Types_Pkg _L4;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::_L3 */
  static kcg_int _L3;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::_L2 */
  static CompressedPacketData_T_Common_Types_Pkg _L2;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::_L1 */
  static CompressedPacketData_T_Common_Types_Pkg _L1;
  
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L1, acc);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L2, compressedPacketIn);
  _L3 = 0;
  _L9 = ind;
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L13, lastvalidAddress);
  _L14 = _L13[0];
  _L5 = _L9 < _L14;
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L4, acc);
  _L11 = ind;
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L15, lastvalidAddress);
  _L6 = _L15[0];
  _L12 = _L11 - _L6;
  if ((0 <= _L12) & (_L12 < 500)) {
    _L8 = _L2[_L12];
  }
  else {
    _L8 = _L3;
  }
  _L16 = ind;
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L10, &_L1);
  if ((0 <= _L16) & (_L16 < 500)) {
    _L10[_L16] = _L8;
  }
  /* 1 */ if (_L5) {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L7, &_L4);
  }
  else {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L7, &_L10);
  }
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(mergedPackets, &_L7);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

