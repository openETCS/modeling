/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_compr_P011_TM_TrainToTrack.h"

/* TM_TrainToTrack::C_compr_P011 */
void C_compr_P011_TM_TrainToTrack(
  /* TM_TrainToTrack::C_compr_P011::P011_int */P011_TrainTrack_int_TM_TrainToTrack *P011_int,
  /* TM_TrainToTrack::C_compr_P011::P011_out */P011_TM_TrainToTrack *P011_out)
{
  /* TM_TrainToTrack::C_compr_P011::_L127 */
  static array_int_11 _L127;
  /* TM_TrainToTrack::C_compr_P011::_L150 */
  static kcg_bool _L150;
  
  kcg_copy_array_int_11(&_L127, (array_int_11 *) &(*P011_int)[0]);
  _L150 = /* 1 */ Decode_NID_PACKET_TM_TrainToTrack(_L127[0], 11);
  (*P011_out).valid = _L150;
  (*P011_out).nid_packet = /* 1 */
    Filter_Variable_TM_TrainToTrack(_L150, _L127[0]);
  (*P011_out).l_packet = /* 2 */
    Filter_Variable_TM_TrainToTrack(_L150, _L127[1]);
  (*P011_out).nc_cdtrain = /* 1 */
    CAST_Int_to_NC_CDTRAIN_TM_conversions(
      /* 3 */ Filter_Variable_TM_TrainToTrack(_L150, _L127[2]));
  (*P011_out).nc_train = /* 1 */
    CAST_Int_to_NC_TRAIN_TM_conversions(
      /* 4 */ Filter_Variable_TM_TrainToTrack(_L150, _L127[3]));
  (*P011_out).l_train = /* 1 */
    CAST_Int_to_L_TRAIN_TM_conversions(
      /* 6 */ Filter_Variable_TM_TrainToTrack(_L150, _L127[4]));
  (*P011_out).v_maxtrain = /* 1 */
    CAST_Int_to_V_MAXTRAIN_TM_conversions(
      /* 7 */ Filter_Variable_TM_TrainToTrack(_L150, _L127[5]));
  (*P011_out).m_loadinggauge = /* 1 */
    CAST_Int_to_M_LOADINGGAUGE_TM_conversions(
      /* 8 */ Filter_Variable_TM_TrainToTrack(_L150, _L127[6]));
  (*P011_out).m_axleloadcat = /* 1 */
    CAST_Int_to_M_AXLELOADCAT_TM_conversions(
      /* 10 */ Filter_Variable_TM_TrainToTrack(_L150, _L127[7]));
  (*P011_out).m_airtight = /* 1 */
    CAST_Int_to_M_AIRTIGHT_TM_conversions(
      /* 9 */ Filter_Variable_TM_TrainToTrack(_L150, _L127[8]));
  (*P011_out).n_axle = /* 1 */
    CAST_Int_to_N_AXLE_TM_conversions(
      /* 11 */ Filter_Variable_TM_TrainToTrack(_L150, _L127[9]));
  (*P011_out).n_iter_voltage = /* 12 */
    Filter_Variable_TM_TrainToTrack(_L150, _L127[10]);
  if (_L150) {
    /* 1 */
    C_P011_unflatten_sections_voltage_TM_TrainToTrack_lib_internal(
      (P011_voltage_sections_array_flat_t_TM_TrainToTrack *) &(*P011_int)[11],
      &(*P011_out).voltage_list);
  }
  else {
    kcg_copy_P011_voltage_list_TM_TrainToTrack(
      &(*P011_out).voltage_list,
      (P011_voltage_list_TM_TrainToTrack *)
        &DEFAULT_P011_voltage_list_TM_TrainToTrack);
  }
  (*P011_out).n_iter_nid_ntc = /* 13 */
    Filter_Variable_TM_TrainToTrack(_L150, (*P011_int)[19]);
  if (_L150) {
    /* 1 */
    C_P011_unflatten_sections_ntc_TM_TrainToTrack_lib_internal(
      (P011_ntc_list_array_T_TM_TrainToTrack *) &(*P011_int)[20],
      &(*P011_out).nid_ntc_list);
  }
  else {
    kcg_copy_P011_ntc_list_TM_TrainToTrack(
      &(*P011_out).nid_ntc_list,
      (P011_ntc_list_TM_TrainToTrack *) &DEFAULT_P011_ntc_list_TM_TrainToTrack);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_compr_P011_TM_TrainToTrack.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

