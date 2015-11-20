/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Supervision_M_Loc_ProvidePositionReport_Pkg.h"

void Supervision_M_Loc_reset_ProvidePositionReport_Pkg(
  outC_Supervision_M_Loc_ProvidePositionReport_Pkg *outC)
{
  /* 1 */ op_3_6_5_1_4_j_reset_ProvidePositionReport_Pkg(&outC->Context_1);
}

/* ProvidePositionReport_Pkg::Supervision_M_Loc */
void Supervision_M_Loc_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::trainPos */trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::posBGs */positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::mloc */M_LOC mloc,
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::present */kcg_bool present,
  outC_Supervision_M_Loc_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::_L16 */
  static positionedBG_T_TrainPosition_Types_Pck _L16;
  /* ProvidePositionReport_Pkg::Supervision_M_Loc::_L15 */
  static kcg_bool _L15;
  
  /* 1 */
  op_GetLRBGfromBGs_ProvidePositionReport_Pkg(posBGs, trainPos, &_L15, &_L16);
  /* 1 */
  op_3_6_5_1_4_j_ProvidePositionReport_Pkg(&_L16, trainPos, &outC->Context_1);
  outC->trigger = (present & (M_LOC_Now == mloc)) |
    ((M_LOC_Do_not_send_position_report_on_passage_of_LRBG_compliant_balise_group ==
        mloc) & !outC->Context_1.trigger) | (outC->Context_1.trigger &
      (M_LOC_Every_LRBG_compliant_balise_group == mloc));
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Supervision_M_Loc_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

