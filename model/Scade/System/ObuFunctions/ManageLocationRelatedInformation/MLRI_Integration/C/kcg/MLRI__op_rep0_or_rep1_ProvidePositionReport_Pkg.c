/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__op_rep0_or_rep1_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_rep0_or_rep1 */
kcg_bool MLRI__op_rep0_or_rep1_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_rep0_or_rep1::posBG */MLRI__positionedBG_T_TrainPosition_Types_Pck *posBG)
{
  /* ProvidePositionReport_Pkg::op_rep0_or_rep1::b */ kcg_bool b;
  
  b = (*posBG).infoFromPassing.noCoordinateSystemHasBeenAssigned &
    ((*posBG).infoFromPassing.BG_Header.n_total ==
      MLRI__N_TOTAL_1_balise_in_the_group) & (*posBG).valid;
  return b;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__op_rep0_or_rep1_ProvidePositionReport_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

