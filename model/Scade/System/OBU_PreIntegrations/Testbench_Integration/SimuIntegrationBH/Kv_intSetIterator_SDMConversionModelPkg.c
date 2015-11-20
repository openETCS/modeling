/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Kv_intSetIterator_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::Kv_intSetIterator */
void Kv_intSetIterator_SDMConversionModelPkg(
  /* SDMConversionModelPkg::Kv_intSetIterator::akku */ kcg_bool akku,
  /* SDMConversionModelPkg::Kv_intSetIterator::Kv_intSet */ nvkvintset_T_Packet_Types_Pkg *Kv_intSet,
  /* SDMConversionModelPkg::Kv_intSetIterator::CTrain */ NC_TRAIN CTrain,
  /* SDMConversionModelPkg::Kv_intSetIterator::goOn */ kcg_bool *goOn,
  /* SDMConversionModelPkg::Kv_intSetIterator::akku_out */ kcg_bool *akku_out)
{
  /* SDMConversionModelPkg::Kv_intSetIterator::_L1 */
  static kcg_bool _L1;
  /* SDMConversionModelPkg::Kv_intSetIterator::_L2 */
  static nvkvintset_T_Packet_Types_Pkg _L2;
  /* SDMConversionModelPkg::Kv_intSetIterator::_L3 */
  static kcg_bool _L3;
  /* SDMConversionModelPkg::Kv_intSetIterator::_L8 */
  static kcg_bool _L8;
  /* SDMConversionModelPkg::Kv_intSetIterator::_L9 */
  static NC_TRAIN _L9;
  /* SDMConversionModelPkg::Kv_intSetIterator::_L12 */
  static Q_NVKVINTSET _L12;
  /* SDMConversionModelPkg::Kv_intSetIterator::_L13 */
  static Q_NVKVINTSET _L13;
  /* SDMConversionModelPkg::Kv_intSetIterator::_L14 */
  static Q_NVKVINTSET _L14;
  /* SDMConversionModelPkg::Kv_intSetIterator::_L15 */
  static Q_NVKVINTSET _L15;
  /* SDMConversionModelPkg::Kv_intSetIterator::_L16 */
  static kcg_bool _L16;
  /* SDMConversionModelPkg::Kv_intSetIterator::_L17 */
  static kcg_bool _L17;
  
  _L1 = akku;
  kcg_copy_nvkvintset_T_Packet_Types_Pkg(&_L2, Kv_intSet);
  _L3 = _L2.valid;
  _L15 = _L2.q_nvkvintset;
  _L9 = CTrain;
  _L13 = Q_NVKVINTSET_Conventional_passenger_trains;
  _L14 = Q_NVKVINTSET_Freight_trains;
  switch (_L9) {
    case NC_TRAIN_Passenger_train :
      _L12 = _L13;
      break;
    
    default :
      _L12 = _L14;
  }
  _L16 = _L15 == _L12;
  _L17 = _L3 & _L16;
  _L8 = !_L17;
  *goOn = _L8;
  *akku_out = _L1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Kv_intSetIterator_SDMConversionModelPkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

