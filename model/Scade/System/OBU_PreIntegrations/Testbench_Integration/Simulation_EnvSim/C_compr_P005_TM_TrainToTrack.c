/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_compr_P005_TM_TrainToTrack.h"

/* TM_TrainToTrack::C_compr_P005 */
void C_compr_P005_TM_TrainToTrack(
  /* TM_TrainToTrack::C_compr_P005::P005_in */P005_TrainTrack_int_TM_TrainToTrack *P005_in,
  /* TM_TrainToTrack::C_compr_P005::P005_out */P005_TM_TrainToTrack *P005_out)
{
  /* TM_TrainToTrack::C_compr_P005::_L73 */
  static kcg_bool _L73;
  
  _L73 = /* 1 */ Decode_NID_PACKET_TM_TrainToTrack((*P005_in)[0], 9);
  (*P005_out).valid = _L73;
  (*P005_out).nid_packet = /* 1 */
    Filter_Variable_TM_TrainToTrack(_L73, (*P005_in)[0]);
  (*P005_out).l_packet = /* 2 */
    Filter_Variable_TM_TrainToTrack(_L73, (*P005_in)[1]);
  (*P005_out).nid_opeartional = /* 1 */
    CAST_Int_to_NID_OPERATIONAL_TM_conversions(
      /* 3 */ Filter_Variable_TM_TrainToTrack(_L73, (*P005_in)[2]));
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_compr_P005_TM_TrainToTrack.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

