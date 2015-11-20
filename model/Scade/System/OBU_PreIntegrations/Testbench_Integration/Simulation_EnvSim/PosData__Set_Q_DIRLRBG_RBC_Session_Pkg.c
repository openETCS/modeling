/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Set_Q_DIRLRBG_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::PosData__Set_Q_DIRLRBG */
void PosData__Set_Q_DIRLRBG_RBC_Session_Pkg(
  /* RBC_Session_Pkg::PosData__Set_Q_DIRLRBG::inPosData */PosData_T *inPosData,
  /* RBC_Session_Pkg::PosData__Set_Q_DIRLRBG::in_Q_DIRLRBG */Q_DIRLRBG in_Q_DIRLRBG,
  /* RBC_Session_Pkg::PosData__Set_Q_DIRLRBG::outPosData */PosData_T *outPosData)
{
  kcg_copy_PosData_T(outPosData, inPosData);
  (*outPosData).q_dirlrbg = in_Q_DIRLRBG;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** PosData__Set_Q_DIRLRBG_RBC_Session_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

