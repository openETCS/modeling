/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_Packet5_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Build_Packet5 */
void Build_Packet5_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Build_Packet5::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::Build_Packet5::packet5 */ PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *packet5)
{
  /* ProvidePositionReport_Pkg::Build_Packet5::_L4 */
  static trainProperties_T_TrainPosition_Types_Pck _L4;
  /* ProvidePositionReport_Pkg::Build_Packet5::_L3 */
  static kcg_bool _L3;
  /* ProvidePositionReport_Pkg::Build_Packet5::_L2 */
  static PT5_TrainRunningNumber_Packet_TrainTypes_Pkg _L2;
  /* ProvidePositionReport_Pkg::Build_Packet5::_L1 */
  static NID_OPERATIONAL _L1;
  
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L4, trainProps);
  _L1 = _L4.nid_operational;
  _L3 = kcg_true;
  _L2.valid = _L3;
  _L2.TrainRunningNumber = _L1;
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(packet5, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_Packet5_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

