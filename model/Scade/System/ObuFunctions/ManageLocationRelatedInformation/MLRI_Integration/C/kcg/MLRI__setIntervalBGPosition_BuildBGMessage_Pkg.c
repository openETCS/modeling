/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__setIntervalBGPosition_BuildBGMessage_Pkg.h"

/* BuildBGMessage_Pkg::setIntervalBGPosition */
void MLRI__setIntervalBGPosition_BuildBGMessage_Pkg(
  /* BuildBGMessage_Pkg::setIntervalBGPosition::inOldPosition */MLRI__centerOfBalisePosition_T_BG_Types_Pkg *inOldPosition,
  /* BuildBGMessage_Pkg::setIntervalBGPosition::incenterOfBalisePosition */MLRI__centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* BuildBGMessage_Pkg::setIntervalBGPosition::outUpdateBGPosition */MLRI__centerOfBalisePosition_T_BG_Types_Pkg *outUpdateBGPosition)
{
  if ((*inOldPosition).odometerOfBaliseDetection.valid) {
    MLRI__kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      outUpdateBGPosition,
      inOldPosition);
  }
  else {
    MLRI__kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      outUpdateBGPosition,
      incenterOfBalisePosition);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__setIntervalBGPosition_BuildBGMessage_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

