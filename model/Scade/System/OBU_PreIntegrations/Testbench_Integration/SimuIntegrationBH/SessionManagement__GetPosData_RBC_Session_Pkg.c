/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SessionManagement__GetPosData_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::SessionManagement__GetPosData */
void SessionManagement__GetPosData_RBC_Session_Pkg(
  /* RBC_Session_Pkg::SessionManagement__GetPosData::inSessionManagement */ SessionManagement_T *inSessionManagement,
  /* RBC_Session_Pkg::SessionManagement__GetPosData::outPositionManagement */ PosData_T *outPositionManagement)
{
  /* RBC_Session_Pkg::SessionManagement__GetPosData::_L1 */
  static SessionManagement_T _L1;
  /* RBC_Session_Pkg::SessionManagement__GetPosData::_L2 */
  static PosData_T _L2;
  
  kcg_copy_SessionManagement_T(&_L1, inSessionManagement);
  kcg_copy_PosData_T(&_L2, &_L1.m_PosData);
  kcg_copy_PosData_T(outPositionManagement, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SessionManagement__GetPosData_RBC_Session_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

