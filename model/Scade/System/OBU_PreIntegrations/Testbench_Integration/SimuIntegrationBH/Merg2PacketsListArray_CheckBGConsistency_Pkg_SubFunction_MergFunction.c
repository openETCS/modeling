/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray */
void Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::acc */ CompressedPacketData_T_Common_Types_Pkg *acc3,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::addressArray */ CompressedPacketData_T_Common_Types_Pkg *addressArray,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::newPackets */ CompressedPacketData_T_Common_Types_Pkg *newPackets,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::mergPackets */ CompressedPacketData_T_Common_Types_Pkg *mergPackets)
{
  static kcg_int i2;
  static kcg_int i1;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray */
  static CompressedPacketData_T_Common_Types_Pkg acc;
  static kcg_int i;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::_L6 */
  static CompressedPacketData_T_Common_Types_Pkg _L6;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::_L5 */
  static CompressedPacketData_T_Common_Types_Pkg _L5;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::_L4 */
  static CompressedPacketData_T_Common_Types_Pkg _L4;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::_L3 */
  static array_int_500_500 _L3;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::_L2 */
  static array_int_500_500 _L2;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::_L1 */
  static CompressedPacketData_T_Common_Types_Pkg _L1;
  
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L5, acc3);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L6, addressArray);
  /* pow */ for (i2 = 0; i2 < 500; i2++) {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L3[i2], &_L6);
  }
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L4, newPackets);
  /* pow */ for (i1 = 0; i1 < 500; i1++) {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L2[i1], &_L4);
  }
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L1, &_L5);
  for (i = 0; i < 500; i++) {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&acc, &_L1);
    /* 1 */
    Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction(
      i,
      &acc,
      &_L3[i],
      &_L2[i],
      &_L1);
  }
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(mergPackets, &_L1);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

