/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Kv_intIterator_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::Kv_intIterator */
void Kv_intIterator_SDMConversionModelPkg(
  /* SDMConversionModelPkg::Kv_intIterator::Kv_int */ nvkvint_T_Packet_Types_Pkg *Kv_int,
  /* SDMConversionModelPkg::Kv_intIterator::a */ A_internal_Type_Obu_BasicTypes_Pkg a,
  /* SDMConversionModelPkg::Kv_intIterator::a12 */ A_internal_Type_Obu_BasicTypes_Pkg a12,
  /* SDMConversionModelPkg::Kv_intIterator::a23 */ A_internal_Type_Obu_BasicTypes_Pkg a23,
  /* SDMConversionModelPkg::Kv_intIterator::P */ kcg_bool P,
  /* SDMConversionModelPkg::Kv_intIterator::goOn */ kcg_bool *goOn,
  /* SDMConversionModelPkg::Kv_intIterator::m */ kcg_int *m,
  /* SDMConversionModelPkg::Kv_intIterator::v */ V_internal_Type_Obu_BasicTypes_Pkg *v)
{
  /* SDMConversionModelPkg::Kv_intIterator::_L1 */
  static nvkvint_T_Packet_Types_Pkg _L1;
  /* SDMConversionModelPkg::Kv_intIterator::_L2 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L2;
  /* SDMConversionModelPkg::Kv_intIterator::_L3 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L3;
  /* SDMConversionModelPkg::Kv_intIterator::_L4 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L4;
  /* SDMConversionModelPkg::Kv_intIterator::_L5 */
  static kcg_bool _L5;
  /* SDMConversionModelPkg::Kv_intIterator::_L6 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L6;
  /* SDMConversionModelPkg::Kv_intIterator::_L15 */
  static M_NVKVINT _L15;
  /* SDMConversionModelPkg::Kv_intIterator::_L14 */
  static M_NVKVINT _L14;
  /* SDMConversionModelPkg::Kv_intIterator::_L13 */
  static V_NVKVINT _L13;
  /* SDMConversionModelPkg::Kv_intIterator::_L12 */
  static kcg_bool _L12;
  /* SDMConversionModelPkg::Kv_intIterator::_L16 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L16;
  /* SDMConversionModelPkg::Kv_intIterator::_L17 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L17;
  /* SDMConversionModelPkg::Kv_intIterator::_L18 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L18;
  
  kcg_copy_nvkvint_T_Packet_Types_Pkg(&_L1, Kv_int);
  _L2 = a;
  _L3 = a12;
  _L4 = a23;
  _L5 = P;
  _L12 = _L1.valid;
  *goOn = _L12;
  _L14 = _L1.m_nvkvint12;
  _L17 = /* 1 */ TransformA_realToA_int_SDM_Types_Pkg(_L14);
  _L15 = _L1.m_nvkvint23;
  _L18 = /* 2 */ TransformA_realToA_int_SDM_Types_Pkg(_L15);
  _L16 = /* 2 */
    interpolateMfromA_SDMConversionModelPkg(_L2, _L3, _L4, _L17, _L18);
  /* 1 */ if (_L5) {
    _L6 = _L16;
  }
  else {
    _L6 = _L17;
  }
  _L13 = _L1.v_nvkvint;
  *v = _L13;
  *m = _L6;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Kv_intIterator_SDMConversionModelPkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

