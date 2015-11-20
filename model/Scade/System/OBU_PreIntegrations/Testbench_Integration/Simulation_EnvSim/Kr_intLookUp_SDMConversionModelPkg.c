/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Kr_intLookUp_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::Kr_intLookUp */
kcg_int Kr_intLookUp_SDMConversionModelPkg(
  /* SDMConversionModelPkg::Kr_intLookUp::NationalValues */P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SDMConversionModelPkg::Kr_intLookUp::trainData */trainData_T_TIU_Types_Pkg *trainData)
{
  static kcg_int tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* SDMConversionModelPkg::Kr_intLookUp::m_KrInt */
  static kcg_int m_KrInt;
  
  m_KrInt = 100;
  for (i = 0; i < 7; i++) {
    tmp1 = m_KrInt;
    /* 1 */
    Kr_intIterator_SDMConversionModelPkg(
      tmp1,
      &(*NationalValues).nvkrintArray[i],
      (*trainData).trainLength,
      &tmp,
      &m_KrInt);
    if (!tmp) {
      break;
    }
  }
  return m_KrInt;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Kr_intLookUp_SDMConversionModelPkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

