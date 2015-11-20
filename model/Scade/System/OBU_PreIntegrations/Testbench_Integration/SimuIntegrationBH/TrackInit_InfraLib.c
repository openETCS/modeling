/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrackInit_InfraLib.h"

/* InfraLib::TrackInit */
void TrackInit_InfraLib(
  /* InfraLib::TrackInit::TrainPosIn */ kcg_real TrainPosIn,
  /* InfraLib::TrackInit::InitialOffset */ kcg_int InitialOffset,
  /* InfraLib::TrackInit::SectionData_out */ TrackSectionData_T_InfraLib *SectionData_out)
{
  /* InfraLib::TrackInit::_L1 */
  static kcg_real _L1;
  /* InfraLib::TrackInit::_L4 */
  static CompressedBaliseMessage_TM _L4;
  /* InfraLib::TrackInit::_L8 */
  static TrackSectionData_T_InfraLib _L8;
  /* InfraLib::TrackInit::_L10 */
  static TrainPosRaw_T_InfraLib _L10;
  /* InfraLib::TrackInit::_L11 */
  static kcg_real _L11;
  /* InfraLib::TrackInit::_L12 */
  static kcg_int _L12;
  
  _L1 = TrainPosIn;
  _L12 = InitialOffset;
  _L11 = 0.0;
  _L10.TrainPos_in = _L1;
  _L10.OffsetTotal = _L12;
  _L10.TrainPosCalibrated = _L11;
  kcg_copy_CompressedBaliseMessage_TM(
    &_L4,
    (CompressedBaliseMessage_TM *) &DEFAULT_BTMMessage_TM);
  kcg_copy_TrainPosRaw_T_InfraLib(&_L8.TrainPosRaw, &_L10);
  kcg_copy_CompressedBaliseMessage_TM(&_L8.BG_Message, &_L4);
  kcg_copy_TrackSectionData_T_InfraLib(SectionData_out, &_L8);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrackInit_InfraLib.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

