/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_Packet4_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Build_Packet4 */
void Build_Packet4_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Build_Packet4::errorMsg */ ErrorMessage_T_ProvidePositionReport_Pkg *errorMsg,
  /* ProvidePositionReport_Pkg::Build_Packet4::packet4 */ PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *packet4)
{
  /* ProvidePositionReport_Pkg::Build_Packet4::_L1 */
  static ErrorMessage_T_ProvidePositionReport_Pkg _L1;
  /* ProvidePositionReport_Pkg::Build_Packet4::_L3 */
  static kcg_bool _L3;
  /* ProvidePositionReport_Pkg::Build_Packet4::_L2 */
  static M_ERROR _L2;
  /* ProvidePositionReport_Pkg::Build_Packet4::_L4 */
  static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg _L4;
  
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&_L1, errorMsg);
  _L3 = _L1.present;
  _L2 = _L1.errorType;
  _L4.valid = _L3;
  _L4.m_error = _L2;
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(packet4, &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_Packet4_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

