/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Get_EOA_TA_MA.h"

/* TA_MA::Get_EOA */
L_internal_Type_Obu_BasicTypes_Pkg Get_EOA_TA_MA(
  /* TA_MA::Get_EOA::MA_absolute */MovementAuthority_t_TrackAtlasTypes *MA_absolute)
{
  static L_internal_Type_Obu_BasicTypes_Pkg tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* TA_MA::Get_EOA::currentEOA */
  static L_internal_Type_Obu_BasicTypes_Pkg currentEOA;
  
  currentEOA = DEFAULT_loc_TA_MA;
  for (i = 0; i < 10; i++) {
    tmp1 = currentEOA;
    /* 1 */
    Get_EOA_loop_TA_MA(i, tmp1, &(*MA_absolute).sections, &tmp, &currentEOA);
    if (!tmp) {
      break;
    }
  }
  return currentEOA;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Get_EOA_TA_MA.c
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

