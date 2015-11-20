/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Kv_intVectorMerger_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::Kv_intVectorMerger */
void Kv_intVectorMerger_SDMConversionModelPkg(
  /* SDMConversionModelPkg::Kv_intVectorMerger::indices_in */array_int_2 *indices_in,
  /* SDMConversionModelPkg::Kv_intVectorMerger::Kv */mv_Map_t_SDMConversionModelPkg *Kv,
  /* SDMConversionModelPkg::Kv_intVectorMerger::Abrake */av_Map_t_SDMConversionModelPkg *Abrake,
  /* SDMConversionModelPkg::Kv_intVectorMerger::indices_out */array_int_2 *indices_out,
  /* SDMConversionModelPkg::Kv_intVectorMerger::a */A_internal_Type_Obu_BasicTypes_Pkg *a,
  /* SDMConversionModelPkg::Kv_intVectorMerger::v */V_internal_Type_Obu_BasicTypes_Pkg *v)
{
  static kcg_int tmp1;
  static kcg_int tmp;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L45 */
  static kcg_int _L45;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L44 */
  static kcg_int _L44;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L56 */
  static kcg_bool _L56;
  /* SDMConversionModelPkg::Kv_intVectorMerger::_L59 */
  static kcg_bool _L59;
  
  tmp1 = 1 + (*indices_in)[1];
  if ((0 <= tmp1) & (tmp1 < 6)) {
    tmp = (*Abrake).v[tmp1];
  }
  else {
    tmp = 0;
  }
  _L59 = tmp > 0;
  _L45 = 1 + (*indices_in)[0];
  if ((0 <= _L45) & (_L45 < 7)) {
    _L44 = (*Kv).v[_L45];
  }
  else {
    _L44 = 0;
  }
  _L56 = _L44 > 0;
  if (_L56 & ((_L44 <= tmp) | !_L59)) {
    (*indices_out)[0] = _L45;
  }
  else {
    (*indices_out)[0] = (*indices_in)[0];
  }
  if (_L59 & (!_L56 | (_L44 >= tmp))) {
    (*indices_out)[1] = tmp1;
  }
  else {
    (*indices_out)[1] = (*indices_in)[1];
  }
  if ((0 <= (*indices_in)[0]) & ((*indices_in)[0] < 7)) {
    _L45 = (*Kv).v[(*indices_in)[0]];
    tmp1 = (*Kv).m[(*indices_in)[0]];
  }
  else {
    _L45 = 0;
    tmp1 = 1;
  }
  if ((0 <= (*indices_in)[1]) & ((*indices_in)[1] < 6)) {
    _L44 = (*Abrake).v[(*indices_in)[1]];
    tmp = (*Abrake).a[(*indices_in)[1]];
  }
  else {
    _L44 = 0;
    tmp = 0;
  }
  *a = tmp1 * tmp / 100;
  if (_L45 >= _L44) {
    *v = _L45;
  }
  else {
    *v = _L44;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Kv_intVectorMerger_SDMConversionModelPkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

