/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DeterminePacketValidity_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::DeterminePacketValidity */
void DeterminePacketValidity_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::DeterminePacketValidity::lrbg */ positionedBG_T_TrainPosition_Types_Pck *lrbg,
  /* ProvidePositionReport_Pkg::DeterminePacketValidity::sendPacket0 */ kcg_bool *sendPacket0,
  /* ProvidePositionReport_Pkg::DeterminePacketValidity::sendPacket1 */ kcg_bool *sendPacket1)
{
  /* ProvidePositionReport_Pkg::DeterminePacketValidity::_L12 */
  static kcg_bool _L12;
  /* ProvidePositionReport_Pkg::DeterminePacketValidity::_L11 */
  static passedBG_T_BG_Types_Pkg _L11;
  /* ProvidePositionReport_Pkg::DeterminePacketValidity::_L10 */
  static kcg_bool _L10;
  /* ProvidePositionReport_Pkg::DeterminePacketValidity::_L9 */
  static N_TOTAL _L9;
  /* ProvidePositionReport_Pkg::DeterminePacketValidity::_L8 */
  static kcg_bool _L8;
  /* ProvidePositionReport_Pkg::DeterminePacketValidity::_L6 */
  static kcg_bool _L6;
  /* ProvidePositionReport_Pkg::DeterminePacketValidity::_L5 */
  static BG_Header_T_BG_Types_Pkg _L5;
  /* ProvidePositionReport_Pkg::DeterminePacketValidity::_L4 */
  static N_TOTAL _L4;
  /* ProvidePositionReport_Pkg::DeterminePacketValidity::_L13 */
  static kcg_bool _L13;
  /* ProvidePositionReport_Pkg::DeterminePacketValidity::_L14 */
  static kcg_bool _L14;
  /* ProvidePositionReport_Pkg::DeterminePacketValidity::_L15 */
  static positionedBG_T_TrainPosition_Types_Pck _L15;
  
  _L4 = N_TOTAL_1_balise_in_the_group;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L15, lrbg);
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L11, &_L15.infoFromPassing);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L5, &_L11.BG_Header);
  _L12 = _L5.noCoordinateSystemHasBeenAssigned;
  _L9 = _L5.n_total;
  _L10 = _L9 == _L4;
  _L8 = _L15.valid;
  _L6 = _L12 & _L10 & _L8;
  _L13 = !_L6;
  _L14 = _L13 & _L8;
  *sendPacket0 = _L14;
  *sendPacket1 = _L6;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DeterminePacketValidity_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

