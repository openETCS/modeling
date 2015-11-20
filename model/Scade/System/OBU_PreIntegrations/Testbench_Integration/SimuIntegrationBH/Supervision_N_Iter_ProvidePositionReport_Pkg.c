/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Supervision_N_Iter_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Supervision_N_Iter */
kcg_bool Supervision_N_Iter_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Supervision_N_Iter::niter */ N_ITER niter,
  /* ProvidePositionReport_Pkg::Supervision_N_Iter::iterpacket */ IterPacket58List_T_Packet_Types_Pkg *iterpacket)
{
  static N_ITER noname;
  static IterPacket58List_T_Packet_Types_Pkg _1_noname;
  /* ProvidePositionReport_Pkg::Supervision_N_Iter::_L1 */
  static kcg_bool _L1;
  /* ProvidePositionReport_Pkg::Supervision_N_Iter::_L2 */
  static N_ITER _L2;
  /* ProvidePositionReport_Pkg::Supervision_N_Iter::_L3 */
  static IterPacket58List_T_Packet_Types_Pkg _L3;
  /* ProvidePositionReport_Pkg::Supervision_N_Iter::trigger */
  static kcg_bool trigger;
  
  _L1 = kcg_false;
  trigger = _L1;
  _L2 = niter;
  kcg_copy_IterPacket58List_T_Packet_Types_Pkg(&_L3, iterpacket);
  noname = _L2;
  kcg_copy_IterPacket58List_T_Packet_Types_Pkg(&_1_noname, &_L3);
  return trigger;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Supervision_N_Iter_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

