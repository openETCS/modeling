/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Supervise_PosRepParam_ProvidePositionReport_Pkg.h"

void Supervise_PosRepParam_reset_ProvidePositionReport_Pkg(
  outC_Supervise_PosRepParam_ProvidePositionReport_Pkg *outC)
{
  /* 1 */ Supervision_M_Loc_reset_ProvidePositionReport_Pkg(&outC->Context_1);
  /* 1 */
  Supervision_T_Cycloc_reset_ProvidePositionReport_Pkg(&outC->_1_Context_1);
}

/* ProvidePositionReport_Pkg::Supervise_PosRepParam */
void Supervise_PosRepParam_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::posRepParam */P58_PositionReportParameters_T_Packet_Types_Pkg *posRepParam,
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::present */kcg_bool present,
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::systemTime */SystemTime_T_ProvidePositionReport_Pkg systemTime,
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::trainPos */trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::posBGs */positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  outC_Supervise_PosRepParam_ProvidePositionReport_Pkg *outC)
{
  static kcg_bool tmp;
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::_L17 */
  static kcg_bool _L17;
  
  _L17 = 0 != (*posRepParam).t_cycloc;
  /* 1 */
  Supervision_M_Loc_ProvidePositionReport_Pkg(
    trainPos,
    posBGs,
    (*posRepParam).m_loc,
    present,
    &outC->Context_1);
  if (_L17) {
    /* 1 */
    Supervision_T_Cycloc_ProvidePositionReport_Pkg(
      present,
      (*posRepParam).t_cycloc,
      systemTime,
      &outC->_1_Context_1);
    tmp = outC->_1_Context_1.trigger;
  }
  else {
    tmp = kcg_false;
  }
  outC->trigger = outC->Context_1.trigger | /* 1 */
    Supervision_D_Cycloc_ProvidePositionReport_Pkg((*posRepParam).d_cycloc) |
    /* 1 */
    Supervision_N_Iter_ProvidePositionReport_Pkg(
      (*posRepParam).n_iter,
      &(*posRepParam).iterPacket58List) | tmp;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Supervise_PosRepParam_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

