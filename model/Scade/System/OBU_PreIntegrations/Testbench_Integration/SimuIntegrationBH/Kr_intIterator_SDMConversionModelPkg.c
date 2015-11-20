/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Kr_intIterator_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::Kr_intIterator */
void Kr_intIterator_SDMConversionModelPkg(
  /* SDMConversionModelPkg::Kr_intIterator::m_last */ kcg_int m_last,
  /* SDMConversionModelPkg::Kr_intIterator::Kr_int */ nvkrint_T_Packet_Types_Pkg *Kr_int,
  /* SDMConversionModelPkg::Kr_intIterator::L */ L_internal_Type_Obu_BasicTypes_Pkg L,
  /* SDMConversionModelPkg::Kr_intIterator::goOn */ kcg_bool *goOn,
  /* SDMConversionModelPkg::Kr_intIterator::m_now */ kcg_int *m_now)
{
  /* SDMConversionModelPkg::Kr_intIterator::_L1 */
  static nvkrint_T_Packet_Types_Pkg _L1;
  /* SDMConversionModelPkg::Kr_intIterator::_L4 */
  static M_NVKRINT _L4;
  /* SDMConversionModelPkg::Kr_intIterator::_L3 */
  static L_NVKRINT _L3;
  /* SDMConversionModelPkg::Kr_intIterator::_L2 */
  static kcg_bool _L2;
  /* SDMConversionModelPkg::Kr_intIterator::_L8 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L8;
  /* SDMConversionModelPkg::Kr_intIterator::_L9 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L9;
  /* SDMConversionModelPkg::Kr_intIterator::_L10 */
  static kcg_int _L10;
  /* SDMConversionModelPkg::Kr_intIterator::_L11 */
  static kcg_bool _L11;
  /* SDMConversionModelPkg::Kr_intIterator::_L12 */
  static kcg_bool _L12;
  /* SDMConversionModelPkg::Kr_intIterator::_L16 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L16;
  
  kcg_copy_nvkrint_T_Packet_Types_Pkg(&_L1, Kr_int);
  _L2 = _L1.valid;
  _L8 = L;
  _L3 = _L1.l_nvkrint;
  _L11 = /* 1 */ LengthLargerThanLKr_SDMConversionModelPkg(_L8, _L3);
  _L12 = _L2 & _L11;
  *goOn = _L12;
  _L4 = _L1.m_nvkrint;
  _L16 = /* 1 */ TransformA_realToA_int_SDM_Types_Pkg(_L4);
  _L10 = m_last;
  /* 1 */ if (_L12) {
    _L9 = _L16;
  }
  else {
    _L9 = _L10;
  }
  *m_now = _L9;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Kr_intIterator_SDMConversionModelPkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

