/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__setCoordinateSystemPosition_BuildBGMessage_Pkg.h"

/* BuildBGMessage_Pkg::setCoordinateSystemPosition */
void MLRI__setCoordinateSystemPosition_BuildBGMessage_Pkg(
  /* BuildBGMessage_Pkg::setCoordinateSystemPosition::inOldPosition */MLRI__centerOfBalisePosition_T_BG_Types_Pkg *inOldPosition,
  /* BuildBGMessage_Pkg::setCoordinateSystemPosition::newTelegram */MLRI__Telegram_T_BG_Types_Pkg *newTelegram,
  /* BuildBGMessage_Pkg::setCoordinateSystemPosition::incenterOfBalisePosition */MLRI__centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* BuildBGMessage_Pkg::setCoordinateSystemPosition::outUpdateBGPosition */MLRI__centerOfBalisePosition_T_BG_Types_Pkg *outUpdateBGPosition)
{
  if ((((*newTelegram).telegramheader.m_dup != MLRI__M_DUP_No_duplicates) &
      (MLRI__N_PIG_I_am_the_2nd == (*newTelegram).telegramheader.n_pig) &
      !(*inOldPosition).odometerOfBaliseDetection.valid) |
    ((*newTelegram).telegramheader.n_pig == MLRI__N_PIG_I_am_the_1st)) {
    MLRI__kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      outUpdateBGPosition,
      incenterOfBalisePosition);
  }
  else {
    MLRI__kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      outUpdateBGPosition,
      inOldPosition);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__setCoordinateSystemPosition_BuildBGMessage_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

