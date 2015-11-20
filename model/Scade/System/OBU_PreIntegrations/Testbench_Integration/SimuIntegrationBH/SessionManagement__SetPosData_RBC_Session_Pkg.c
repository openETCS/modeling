/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SessionManagement__SetPosData_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::SessionManagement__SetPosData */
void SessionManagement__SetPosData_RBC_Session_Pkg(
  /* RBC_Session_Pkg::SessionManagement__SetPosData::inSessionManagement */ SessionManagement_T *inSessionManagement,
  /* RBC_Session_Pkg::SessionManagement__SetPosData::inPosData */ PosData_T *inPosData,
  /* RBC_Session_Pkg::SessionManagement__SetPosData::outSessionManagement */ SessionManagement_T *outSessionManagement)
{
  /* RBC_Session_Pkg::SessionManagement__SetPosData::_L1 */
  static SessionManagement_T _L1;
  /* RBC_Session_Pkg::SessionManagement__SetPosData::_L2 */
  static PosData_T _L2;
  /* RBC_Session_Pkg::SessionManagement__SetPosData::_L3 */
  static SessionManagement_T _L3;
  
  kcg_copy_SessionManagement_T(&_L1, inSessionManagement);
  kcg_copy_PosData_T(&_L2, inPosData);
  kcg_copy_SessionManagement_T(&_L3, &_L1);
  if (kcg_true) {
    kcg_copy_PosData_T(&_L3.m_PosData, &_L2);
  }
  kcg_copy_SessionManagement_T(outSessionManagement, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SessionManagement__SetPosData_RBC_Session_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

