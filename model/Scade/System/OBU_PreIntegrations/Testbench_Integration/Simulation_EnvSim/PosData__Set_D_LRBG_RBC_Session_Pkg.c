/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Set_D_LRBG_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::PosData__Set_D_LRBG */
void PosData__Set_D_LRBG_RBC_Session_Pkg(
  /* RBC_Session_Pkg::PosData__Set_D_LRBG::inPosData */PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__Set_D_LRBG::ni_D_LRBG */D_LRBG ni_D_LRBG,
  /* RBC_Session_Pkg::PosData__Set_D_LRBG::outPosData */PosData_T *outPosData)
{
  kcg_copy_PosData_T(outPosData, inPosData);
  (*outPosData).d_lrbg = ni_D_LRBG;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** PosData__Set_D_LRBG_RBC_Session_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

