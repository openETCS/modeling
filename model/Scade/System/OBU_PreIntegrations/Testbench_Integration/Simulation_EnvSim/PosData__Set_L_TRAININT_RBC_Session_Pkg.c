/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Set_L_TRAININT_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::PosData__Set_L_TRAININT */
void PosData__Set_L_TRAININT_RBC_Session_Pkg(
  /* RBC_Session_Pkg::PosData__Set_L_TRAININT::inPosData */PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__Set_L_TRAININT::in_L_TRAININT */L_TRAININT in_L_TRAININT,
  /* RBC_Session_Pkg::PosData__Set_L_TRAININT::outPosData */PosData_T *outPosData)
{
  kcg_copy_PosData_T(outPosData, inPosData);
  (*outPosData).l_trainint = in_L_TRAININT;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** PosData__Set_L_TRAININT_RBC_Session_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

