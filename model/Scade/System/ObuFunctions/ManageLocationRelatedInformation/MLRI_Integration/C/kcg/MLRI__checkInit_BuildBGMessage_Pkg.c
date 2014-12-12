/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__checkInit_BuildBGMessage_Pkg.h"

/* BuildBGMessage_Pkg::checkInit */
void MLRI__checkInit_BuildBGMessage_Pkg(
  /* BuildBGMessage_Pkg::checkInit::newTelegram */MLRI__Telegram_T_BG_Types_Pkg *newTelegram,
  /* BuildBGMessage_Pkg::checkInit::inCollector */MLRI__BGCollector_T_BuildBGMessage_Pkg *inCollector,
  /* BuildBGMessage_Pkg::checkInit::outCollector */MLRI__BGCollector_T_BuildBGMessage_Pkg *outCollector)
{
  /* BuildBGMessage_Pkg::checkInit::isDefined */ kcg_bool isDefined;
  
  isDefined = (*inCollector).totalTelegrams > 0;
  if (isDefined) {
    MLRI__kcg_copy_BGCollector_T_BuildBGMessage_Pkg(
      outCollector,
      (MLRI__BGCollector_T_BuildBGMessage_Pkg *)
        &MLRI__cCollectorInit_BuildBGMessage_Pkg);
  }
  else {
    /* 1 */
    MLRI__initCollector_BuildBGMessage_Pkg_BaliseSupport(
      newTelegram,
      outCollector);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__checkInit_BuildBGMessage_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

