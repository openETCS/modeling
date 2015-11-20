/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P005_ForCalcTrainPos_TM_conversions.h"

/* TM_conversions::C_P005_ForCalcTrainPos */
void C_P005_ForCalcTrainPos_TM_conversions(
  /* TM_conversions::C_P005_ForCalcTrainPos::P005_in */P005_OBU_T_TM *P005_in,
  /* TM_conversions::C_P005_ForCalcTrainPos::LRBG */NID_LRBG LRBG,
  /* TM_conversions::C_P005_ForCalcTrainPos::NID_C_onboard */NID_C NID_C_onboard,
  /* TM_conversions::C_P005_ForCalcTrainPos::LinkedBGsOUT */LinkedBGs_T_BG_Types_Pkg *LinkedBGsOUT)
{
  static kcg_int i;
  
  for (i = 0; i < 33; i++) {
    /* 1 */
    C_P005_LinkedBGs_TM_conversions(
      LRBG,
      (*P005_in).q_dir,
      (*P005_in).q_scale,
      &(*P005_in).sections[i + 0],
      NID_C_onboard,
      &(*LinkedBGsOUT)[i]);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P005_ForCalcTrainPos_TM_conversions.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

