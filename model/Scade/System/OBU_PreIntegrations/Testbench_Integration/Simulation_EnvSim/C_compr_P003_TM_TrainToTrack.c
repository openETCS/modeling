/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_compr_P003_TM_TrainToTrack.h"

void C_compr_P003_reset_TM_TrainToTrack(outC_C_compr_P003_TM_TrainToTrack *outC)
{
  outC->init = kcg_true;
}

/* TM_TrainToTrack::C_compr_P003 */
void C_compr_P003_TM_TrainToTrack(
  /* TM_TrainToTrack::C_compr_P003::P003_int */P003_TrainTrack_int_TM_TrainToTrack *P003_int,
  outC_C_compr_P003_TM_TrainToTrack *outC)
{
  /* TM_TrainToTrack::C_compr_P003::_L94 */
  static array_int_3 _L94;
  /* TM_TrainToTrack::C_compr_P003::_L105 */
  static kcg_bool _L105;
  
  kcg_copy_array_int_3(&_L94, (array_int_3 *) &(*P003_int)[0]);
  _L105 = /* 1 */ Decode_NID_PACKET_TM_TrainToTrack(_L94[0], 3);
  outC->P003_out.valid = _L105;
  if (_L105) {
    /* 1 */
    C_P003_flatten_sections_TM_TrainToTrack_lib_internal(
      (P003_nid_radio_list_t_TM_TrainToTrack *) &(*P003_int)[3],
      &outC->_L89);
  }
  else if (outC->init) {
    kcg_copy_P003_nid_radio_list_int_t_TM_TrainToTrack(
      &outC->_L89,
      (P003_nid_radio_list_int_t_TM_TrainToTrack *)
        &DEFAULT_P003_nid_radio_list_TM_TrainToTrack);
  }
  outC->init = kcg_false;
  kcg_copy_P003_nid_radio_list_t_TM_TrainToTrack(
    &outC->P003_out.nid_radio,
    &outC->_L89);
  outC->P003_out.nid_packet = /* 1 */
    CAST_NID_PACKET_to_int_TM_conversions(
      /* 1 */ Filter_Variable_TM_TrainToTrack(_L105, _L94[0]));
  outC->P003_out.l_packet = /* 1 */
    CAST_L_PACKET_to_int_TM_conversions(
      /* 2 */ Filter_Variable_TM_TrainToTrack(_L105, _L94[1]));
  outC->P003_out.n_iter = /* 1 */
    CAST_N_ITER_to_int_TM_conversions(
      /* 3 */ Filter_Variable_TM_TrainToTrack(_L105, _L94[2]));
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_compr_P003_TM_TrainToTrack.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

