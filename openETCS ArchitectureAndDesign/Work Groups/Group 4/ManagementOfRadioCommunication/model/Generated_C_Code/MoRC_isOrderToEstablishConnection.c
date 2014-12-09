/* $************* KCG Version 6.4 beta3 (build i9) **************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG/config.txt
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_isOrderToEstablishConnection.h"

/* isOrderToEstablishConnection */
kcg_bool MoRC_isOrderToEstablishConnection(
  /* isOrderToEstablishConnection::order */ MoRC_orderToContactAnRBC_Type *order)
{
  /* isOrderToEstablishConnection::isEstablishCmd */ kcg_bool isEstablishCmd;
  
  isEstablishCmd = (*order).valid && (*order).actionToBePerformed ==
    MoRC_morc_rbca_establishSession;
  return isEstablishCmd;
}

/* $************* KCG Version 6.4 beta3 (build i9) **************
** MoRC_isOrderToEstablishConnection.c
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

