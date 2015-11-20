/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Get_NID_LRBG_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::PosData__Get_NID_LRBG */
NID_LRBG PosData__Get_NID_LRBG_RBC_Session_Pkg(
  /* RBC_Session_Pkg::PosData__Get_NID_LRBG::inPosData */PosData_T *inPosData)
{
  /* RBC_Session_Pkg::PosData__Get_NID_LRBG::out_NID_LRBG */
  static NID_LRBG out_NID_LRBG;
  
  out_NID_LRBG = (*inPosData).nid_lrbg;
  return out_NID_LRBG;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** PosData__Get_NID_LRBG_RBC_Session_Pkg.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

