/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_compr_P009_TM_TrainToTrack.h"

/* TM_TrainToTrack::C_compr_P009 */
void C_compr_P009_TM_TrainToTrack(
  /* TM_TrainToTrack::C_compr_P009::P009_in */P009_TrainTrack_int_TM_TrainToTrack *P009_in,
  /* TM_TrainToTrack::C_compr_P009::P009_out */P009_TM_TrainToTrack *P009_out)
{
  /* TM_TrainToTrack::C_compr_P009::_L73 */
  static kcg_bool _L73;
  
  _L73 = /* 1 */ Decode_NID_PACKET_TM_TrainToTrack((*P009_in)[0], 5);
  (*P009_out).valid = _L73;
  (*P009_out).nid_packet = /* 1 */
    Filter_Variable_TM_TrainToTrack(_L73, (*P009_in)[0]);
  (*P009_out).l_packet = /* 2 */
    Filter_Variable_TM_TrainToTrack(_L73, (*P009_in)[1]);
  (*P009_out).nid_ltrbg = /* 1 */
    CAST_Int_to_NID_LTRBG_TM_conversions(
      /* 3 */ Filter_Variable_TM_TrainToTrack(_L73, (*P009_in)[2]));
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_compr_P009_TM_TrainToTrack.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

