/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainPacket058__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create */
void RadioTrackTrainPacket058__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::in_Q_DIR */ Q_DIR in_Q_DIR,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::in_Q_SCALE */ Q_SCALE in_Q_SCALE,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::in_T_CYCLOC */ T_CYCLOC in_T_CYCLOC,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::in_D_CYCLOC */ D_CYCLOC in_D_CYCLOC,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::in_M_LOC */ M_LOC in_M_LOC,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::inNumberOfIncrementalDistancesAndQualifiers */ N_ITER inNumberOfIncrementalDistancesAndQualifiers,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::inIncrementalDistancesAndQualifiers */ array_169739 *inIncrementalDistancesAndQualifiers,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::outRadioTrackTrainPacket */ P058_trackside_int_T_TM *outRadioTrackTrainPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::l_packet_complete */
  static L_PACKET l_packet_complete;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::_L1 */
  static P058_trackside_int_T_TM _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::_L2 */
  static P058_trackside_int_T_TM _L2;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::_L3 */
  static kcg_bool _L3;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::_L4 */
  static P058_trackside_int_T_TM _L4;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::_L5 */
  static P058_trackside_int_T_TM _L5;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::_L6 */
  static P058_trackside_int_T_TM _L6;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::_L7 */
  static P058_trackside_int_T_TM _L7;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::_L8 */
  static P058_trackside_int_T_TM _L8;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::_L9 */
  static P058_trackside_int_T_TM _L9;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::_L16 */
  static Q_DIR _L16;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::_L17 */
  static Q_SCALE _L17;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::_L18 */
  static D_CYCLOC _L18;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::_L19 */
  static M_LOC _L19;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::_L20 */
  static N_ITER _L20;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::_L21 */
  static array_169739 _L21;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::_L29 */
  static P058_trackside_int_T_TM _L29;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::_L30 */
  static T_CYCLOC _L30;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::_L31 */
  static P058_trackside_int_T_TM _L31;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::_L32 */
  static kcg_int _L32;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::_L33 */
  static P058_trackside_int_T_TM _L33;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::_L35 */
  static N_ITER _L35;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::_L36 */
  static kcg_int _L36;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::_L37 */
  static kcg_int _L37;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::_L38 */
  static kcg_int _L38;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::_L39 */
  static kcg_int _L39;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create::_L40 */
  static L_PACKET _L40;
  
  kcg_copy_P058_trackside_int_T_TM(
    &_L1,
    (P058_trackside_int_T_TM *) &P058_DEFAULT);
  _L3 = kcg_true;
  /* 1 */
  RadioTrackTrainPacket058__SetValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPack(
    &_L1,
    _L3,
    &_L2);
  _L32 = 58;
  /* 1 */
  RadioTrackTrainPacket058__Set_NID_PACKET_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTra(
    &_L2,
    _L32,
    &_L31);
  _L39 = P58_L_PACKET_STATIC_PART_RBC_Messaging_Pkg;
  _L37 = P58_L_PACKET_D_LOC_Q_LGTLOC_RBC_Messaging_Pkg;
  _L35 = inNumberOfIncrementalDistancesAndQualifiers;
  _L36 = _L37 * _L35;
  _L38 = _L39 + _L36;
  l_packet_complete = _L38;
  _L40 = l_packet_complete;
  /* 1 */
  RadioTrackTrainPacket058__Set_L_PACKET_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrain(
    &_L31,
    _L40,
    &_L33);
  _L16 = in_Q_DIR;
  /* 1 */
  RadioTrackTrainPacket058__Set_Q_DIR_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPac(
    &_L33,
    _L16,
    &_L4);
  _L17 = in_Q_SCALE;
  /* 1 */
  RadioTrackTrainPacket058__Set_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainP(
    &_L4,
    _L17,
    &_L5);
  _L30 = in_T_CYCLOC;
  /* 1 */
  RadioTrackTrainPacket058__Set_T_CYCLOC_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrain(
    &_L5,
    _L30,
    &_L29);
  _L18 = in_D_CYCLOC;
  /* 1 */
  RadioTrackTrainPacket058__Set_D_CYCLOC_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrain(
    &_L29,
    _L18,
    &_L6);
  _L19 = in_M_LOC;
  /* 1 */
  RadioTrackTrainPacket058__Set_M_LOC_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPac(
    &_L6,
    _L19,
    &_L7);
  _L20 = inNumberOfIncrementalDistancesAndQualifiers;
  /* 1 */
  RadioTrackTrainPacket058__SetNumberOfIncrementalDistancesAndQualifiers_RBC_Messaging_Pkg_RBC_RadioTr(
    &_L7,
    _L20,
    &_L8);
  kcg_copy_array_169739(&_L21, inIncrementalDistancesAndQualifiers);
  /* 1 */
  RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiers_RBC_Messaging_Pkg_RBC_RadioTrackTrain(
    &_L8,
    &_L21,
    &_L9);
  kcg_copy_P058_trackside_int_T_TM(outRadioTrackTrainPacket, &_L9);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainPacket058__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

