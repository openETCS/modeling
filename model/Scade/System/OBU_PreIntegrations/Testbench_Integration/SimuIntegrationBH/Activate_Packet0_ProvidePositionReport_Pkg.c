/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Activate_Packet0_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Activate_Packet0 */
void Activate_Packet0_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Activate_Packet0::in_packet0 */ Position_Report_TrainToTrack *in_packet0,
  /* ProvidePositionReport_Pkg::Activate_Packet0::out_packet0 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *out_packet0)
{
  /* ProvidePositionReport_Pkg::Activate_Packet0::_L1 */
  static Position_Report_TrainToTrack _L1;
  /* ProvidePositionReport_Pkg::Activate_Packet0::_L6 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L6;
  /* ProvidePositionReport_Pkg::Activate_Packet0::_L7 */
  static kcg_bool _L7;
  
  kcg_copy_Position_Report_TrainToTrack(&_L1, in_packet0);
  _L7 = kcg_true;
  _L6.valid = _L7;
  kcg_copy_Position_Report_TrainToTrack(&_L6.packet0, &_L1);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(out_packet0, &_L6);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Activate_Packet0_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

