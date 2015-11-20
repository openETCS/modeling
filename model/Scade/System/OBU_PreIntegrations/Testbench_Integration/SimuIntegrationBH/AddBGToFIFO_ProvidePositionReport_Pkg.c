/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AddBGToFIFO_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::AddBGToFIFO */
void AddBGToFIFO_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::AddBGToFIFO::reportedBGs */ ReportedBGList_T_ProvidePositionReport_Pkg *reportedBGs,
  /* ProvidePositionReport_Pkg::AddBGToFIFO::reportIsSent */ kcg_bool reportIsSent,
  /* ProvidePositionReport_Pkg::AddBGToFIFO::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::AddBGToFIFO::out_reportedBGs */ ReportedBGList_T_ProvidePositionReport_Pkg *out_reportedBGs)
{
  static ReportedBG_T_ProvidePositionReport_Pkg noname;
  /* ProvidePositionReport_Pkg::AddBGToFIFO::_L4 */
  static ReportedBGList_T_ProvidePositionReport_Pkg _L4;
  /* ProvidePositionReport_Pkg::AddBGToFIFO::_L2 */
  static kcg_bool _L2;
  /* ProvidePositionReport_Pkg::AddBGToFIFO::_L5 */
  static ReportedBGList_T_ProvidePositionReport_Pkg _L5;
  /* ProvidePositionReport_Pkg::AddBGToFIFO::_L6 */
  static ReportedBGList_T_ProvidePositionReport_Pkg _L6;
  /* ProvidePositionReport_Pkg::AddBGToFIFO::_L7 */
  static ReportedBG_T_ProvidePositionReport_Pkg _L7;
  /* ProvidePositionReport_Pkg::AddBGToFIFO::_L8 */
  static ReportedBG_T_ProvidePositionReport_Pkg _L8;
  /* ProvidePositionReport_Pkg::AddBGToFIFO::_L9 */
  static ReportedBG_T_ProvidePositionReport_Pkg _L9;
  /* ProvidePositionReport_Pkg::AddBGToFIFO::_L10 */
  static ReportedBG_T_ProvidePositionReport_Pkg _L10;
  /* ProvidePositionReport_Pkg::AddBGToFIFO::_L11 */
  static ReportedBG_T_ProvidePositionReport_Pkg _L11;
  /* ProvidePositionReport_Pkg::AddBGToFIFO::_L12 */
  static ReportedBG_T_ProvidePositionReport_Pkg _L12;
  /* ProvidePositionReport_Pkg::AddBGToFIFO::_L13 */
  static ReportedBG_T_ProvidePositionReport_Pkg _L13;
  /* ProvidePositionReport_Pkg::AddBGToFIFO::_L14 */
  static ReportedBG_T_ProvidePositionReport_Pkg _L14;
  /* ProvidePositionReport_Pkg::AddBGToFIFO::_L45 */
  static ReportedBG_T_ProvidePositionReport_Pkg _L45;
  /* ProvidePositionReport_Pkg::AddBGToFIFO::_L54 */
  static NID_BG _L54;
  /* ProvidePositionReport_Pkg::AddBGToFIFO::_L55 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L55;
  /* ProvidePositionReport_Pkg::AddBGToFIFO::_L56 */
  static trainPosition_T_TrainPosition_Types_Pck _L56;
  /* ProvidePositionReport_Pkg::AddBGToFIFO::_L57 */
  static positionedBG_T_TrainPosition_Types_Pck _L57;
  
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(&_L4, reportedBGs);
  _L2 = reportIsSent;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L56, trainPos);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L57, &_L56.LRBG);
  _L54 = _L57.nid_bg;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L55, &_L57.location);
  _L45.valid = _L2;
  _L45.nidBG = _L54;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L45.location, &_L55);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&_L7, &_L4[0]);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&_L8, &_L4[1]);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&_L9, &_L4[2]);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&_L10, &_L4[3]);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&_L11, &_L4[4]);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&_L12, &_L4[5]);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&_L13, &_L4[6]);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&_L5[0], &_L45);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&_L5[1], &_L7);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&_L5[2], &_L8);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&_L5[3], &_L9);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&_L5[4], &_L10);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&_L5[5], &_L11);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&_L5[6], &_L12);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&_L5[7], &_L13);
  /* 1 */ if (_L2) {
    kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(&_L6, &_L5);
  }
  else {
    kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(&_L6, &_L4);
  }
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(out_reportedBGs, &_L6);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&_L14, &_L4[7]);
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&noname, &_L14);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** AddBGToFIFO_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

