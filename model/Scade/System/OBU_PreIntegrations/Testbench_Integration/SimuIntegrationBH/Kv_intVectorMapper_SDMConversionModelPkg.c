/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Kv_intVectorMapper_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::Kv_intVectorMapper */
void Kv_intVectorMapper_SDMConversionModelPkg(
  /* SDMConversionModelPkg::Kv_intVectorMapper::Kv_int */ mv_Map_t_SDMConversionModelPkg *Kv_int,
  /* SDMConversionModelPkg::Kv_intVectorMapper::A_brake_em */ av_Map_t_SDMConversionModelPkg *A_brake_em,
  /* SDMConversionModelPkg::Kv_intVectorMapper::A_brake_safe */ av_MergedMap_t_SDMConversionModelPkg *A_brake_safe)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  /* SDMConversionModelPkg::Kv_intVectorMapper */
  static array_int_2 acc;
  static kcg_int i;
  static array_int_2 noname;
  /* SDMConversionModelPkg::Kv_intVectorMapper::_L1 */
  static av_Map_t_SDMConversionModelPkg _L1;
  /* SDMConversionModelPkg::Kv_intVectorMapper::_L2 */
  static mv_Map_t_SDMConversionModelPkg _L2;
  /* SDMConversionModelPkg::Kv_intVectorMapper::_L13 */
  static array_int_13 _L13;
  /* SDMConversionModelPkg::Kv_intVectorMapper::_L12 */
  static array_int_2 _L12;
  /* SDMConversionModelPkg::Kv_intVectorMapper::_L14 */
  static array_169712 _L14;
  /* SDMConversionModelPkg::Kv_intVectorMapper::_L16 */
  static array_169698 _L16;
  /* SDMConversionModelPkg::Kv_intVectorMapper::_L17 */
  static array_int_2 _L17;
  /* SDMConversionModelPkg::Kv_intVectorMapper::_L18 */
  static kcg_int _L18;
  /* SDMConversionModelPkg::Kv_intVectorMapper::_L19 */
  static array_int_13 _L19;
  /* SDMConversionModelPkg::Kv_intVectorMapper::_L26 */
  static av_MergedMap_t_SDMConversionModelPkg _L26;
  
  kcg_copy_av_Map_t_SDMConversionModelPkg(&_L1, A_brake_em);
  _L18 = 0;
  /* pow */ for (i3 = 0; i3 < 2; i3++) {
    _L17[i3] = _L18;
  }
  kcg_copy_mv_Map_t_SDMConversionModelPkg(&_L2, Kv_int);
  /* pow */ for (i2 = 0; i2 < 13; i2++) {
    kcg_copy_mv_Map_t_SDMConversionModelPkg(&_L14[i2], &_L2);
  }
  /* pow */ for (i1 = 0; i1 < 13; i1++) {
    kcg_copy_av_Map_t_SDMConversionModelPkg(&_L16[i1], &_L1);
  }
  kcg_copy_array_int_2(&_L12, &_L17);
  /* 1 */ for (i = 0; i < 13; i++) {
    kcg_copy_array_int_2(&acc, &_L12);
    /* 1 */
    Kv_intVectorMerger_SDMConversionModelPkg(
      &acc,
      &_L14[i],
      &_L16[i],
      &_L12,
      &_L19[i],
      &_L13[i]);
  }
  kcg_copy_a_MergedSteps_t_SDMConversionModelPkg(&_L26.a, &_L19);
  kcg_copy_v_MergedSteps_t_SDMConversionModelPkg(&_L26.v, &_L13);
  kcg_copy_av_MergedMap_t_SDMConversionModelPkg(A_brake_safe, &_L26);
  kcg_copy_array_int_2(&noname, &_L12);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Kv_intVectorMapper_SDMConversionModelPkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

