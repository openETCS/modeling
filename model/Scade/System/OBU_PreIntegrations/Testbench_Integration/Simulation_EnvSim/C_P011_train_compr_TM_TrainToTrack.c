/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_train_compr_TM_TrainToTrack.h"

/* TM_TrainToTrack::C_P011_train_compr */
void C_P011_train_compr_TM_TrainToTrack(
  /* TM_TrainToTrack::C_P011_train_compr::P011_in */P011_TM_TrainToTrack *P011_in,
  /* TM_TrainToTrack::C_P011_train_compr::P011_int */P011_TrainTrack_int_TM_TrainToTrack *P011_int)
{
  static array_int_9 tmp;
  /* TM_TrainToTrack::C_P011_train_compr::_L109 */
  static array_int_1 _L109;
  
  _L109[0] = /* 2 */
    CAST_N_ITER_to_int_TM_conversions((*P011_in).n_iter_nid_ntc);
  (&(&(*P011_int)[0])[0])[0] = /* 1 */
    CAST_NID_PACKET_to_int_TM_conversions((*P011_in).nid_packet);
  (&(&(*P011_int)[0])[0])[1] = /* 1 */
    CAST_L_PACKET_to_int_TM_conversions((*P011_in).l_packet);
  (&(&(*P011_int)[0])[0])[2] = /* 1 */
    CAST_NC_CDTRAIN_to_int_TM_conversions((*P011_in).nc_cdtrain);
  (&(&(*P011_int)[0])[0])[3] = /* 1 */
    CAST_NC_TRAIN_to_int_TM_conversions((*P011_in).nc_train);
  (&(&(*P011_int)[0])[0])[4] = /* 1 */
    CAST_L_TRAIN_to_int_TM_conversions((*P011_in).l_train);
  (&(&(*P011_int)[0])[0])[5] = /* 1 */
    CAST_V_MAXTRAIN_to_int_TM_conversions((*P011_in).v_maxtrain);
  (&(&(*P011_int)[0])[0])[6] = /* 1 */
    CAST_M_LOADINGGAUGE_to_int_TM_conversions((*P011_in).m_loadinggauge);
  (&(&(*P011_int)[0])[0])[7] = /* 1 */
    CAST_M_AXLELOADCAT_to_int_TM_conversions((*P011_in).m_axleloadcat);
  (&(&(*P011_int)[0])[0])[8] = /* 1 */
    CAST_M_AIRTIGHT_to_int_TM_conversions((*P011_in).m_airtight);
  (&(&(*P011_int)[0])[0])[9] = /* 1 */
    CAST_N_AXLE_to_int_TM_conversions((*P011_in).n_axle);
  (&(&(*P011_int)[0])[0])[10] = /* 1 */
    CAST_N_ITER_to_int_TM_conversions((*P011_in).n_iter_voltage);
  /* 1 */
  C_P011_flatten_sections_voltage_TM_TrainToTrack_lib_internal(
    &(*P011_in).voltage_list,
    (P011_voltage_sections_array_flat_t_TM_TrainToTrack *) &tmp[0]);
  kcg_copy_array_int_1(&tmp[8], &_L109);
  kcg_copy_array_int_9(&(*P011_int)[11], &tmp);
  /* 1 */
  C_P011_flatten_sections_ntc_TM_TrainToTrack_lib_internal(
    &(*P011_in).nid_ntc_list,
    (P011_ntc_list_array_T_TM_TrainToTrack *) &(*P011_int)[20]);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P011_train_compr_TM_TrainToTrack.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

