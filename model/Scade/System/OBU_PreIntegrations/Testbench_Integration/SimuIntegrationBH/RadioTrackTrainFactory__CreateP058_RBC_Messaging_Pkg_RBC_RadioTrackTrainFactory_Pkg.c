/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainFactory__CreateP058_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058 */
void RadioTrackTrainFactory__CreateP058_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058::in_Q_DIR */ Q_DIR in_Q_DIR,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058::in_Q_SCALE */ Q_SCALE in_Q_SCALE,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058::in_T_CYCLOC */ T_CYCLOC in_T_CYCLOC,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058::in_D_CYCLOC */ D_CYCLOC in_D_CYCLOC,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058::in_M_LOC */ M_LOC in_M_LOC,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058::inNumberOfIncrementalDistancesAndQualifiers */ N_ITER inNumberOfIncrementalDistancesAndQualifiers,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058::inIncrementalDistancesAndQualifiers */ array_169739 *inIncrementalDistancesAndQualifiers,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058::outRadioTrackTrainPacket */ P058_trackside_int_T_TM *outRadioTrackTrainPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058::_L12 */
  static P058_trackside_int_T_TM _L12;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058::_L13 */
  static Q_DIR _L13;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058::_L14 */
  static Q_SCALE _L14;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058::_L15 */
  static T_CYCLOC _L15;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058::_L16 */
  static M_LOC _L16;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058::_L17 */
  static N_ITER _L17;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058::_L18 */
  static array_169739 _L18;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP058::_L19 */
  static D_CYCLOC _L19;
  
  _L13 = in_Q_DIR;
  _L14 = in_Q_SCALE;
  _L15 = in_T_CYCLOC;
  _L19 = in_D_CYCLOC;
  _L16 = in_M_LOC;
  _L17 = inNumberOfIncrementalDistancesAndQualifiers;
  kcg_copy_array_169739(&_L18, inIncrementalDistancesAndQualifiers);
  /* 1 */
  RadioTrackTrainPacket058__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket(
    _L13,
    _L14,
    _L15,
    _L19,
    _L16,
    _L17,
    &_L18,
    &_L12);
  kcg_copy_P058_trackside_int_T_TM(outRadioTrackTrainPacket, &_L12);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainFactory__CreateP058_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

