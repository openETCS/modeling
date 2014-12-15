/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG */
void MLRI__WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::isNominal */kcg_bool isNominal,
  /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::passedBG_in */MLRI__passedBG_T_BG_Types_Pkg *passedBG_in,
  /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::passedBG_out */MLRI__passedBG_T_BG_Types_Pkg *passedBG_out)
{
  if (isNominal) {
    MLRI__kcg_copy_passedBG_T_BG_Types_Pkg(passedBG_out, passedBG_in);
    (*passedBG_out).trainOrientationToBG = MLRI__Q_DIRLRBG_Nominal;
    (*passedBG_out).trainRunningDirectionToBG = MLRI__Q_DIRTRAIN_Nominal;
  }
  else {
    MLRI__kcg_copy_passedBG_T_BG_Types_Pkg(passedBG_out, passedBG_in);
    (*passedBG_out).trainOrientationToBG = MLRI__Q_DIRLRBG_Reverse;
    (*passedBG_out).trainRunningDirectionToBG = MLRI__Q_DIRTRAIN_Reverse;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

