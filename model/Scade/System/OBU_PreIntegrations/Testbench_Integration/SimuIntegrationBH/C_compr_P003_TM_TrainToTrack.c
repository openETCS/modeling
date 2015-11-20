/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_compr_P003_TM_TrainToTrack.h"

#ifndef KCG_USER_DEFINED_INIT
void C_compr_P003_init_TM_TrainToTrack(outC_C_compr_P003_TM_TrainToTrack *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  for (i = 0; i < 5; i++) {
    outC->_L89[i] = 0;
  }
  outC->P003_out.valid = kcg_true;
  outC->P003_out.nid_packet = 0;
  outC->P003_out.l_packet = 0;
  outC->P003_out.n_iter = 0;
  for (i1 = 0; i1 < 5; i1++) {
    outC->P003_out.nid_radio[i1] = 0;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_compr_P003_reset_TM_TrainToTrack(outC_C_compr_P003_TM_TrainToTrack *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_TrainToTrack::C_compr_P003 */
void C_compr_P003_TM_TrainToTrack(
  /* TM_TrainToTrack::C_compr_P003::P003_int */ P003_TrainTrack_int_TM_TrainToTrack *P003_int,
  outC_C_compr_P003_TM_TrainToTrack *outC)
{
  /* TM_TrainToTrack::C_compr_P003 */
  static P003_nid_radio_list_int_t_TM_TrainToTrack tmp;
  /* TM_TrainToTrack::C_compr_P003 */
  static P003_nid_radio_list_int_t_TM_TrainToTrack op_call;
  /* TM_TrainToTrack::C_compr_P003 */
  static kcg_bool ck_every;
  /* TM_TrainToTrack::C_compr_P003::_L1 */
  static P003_TrainTrack_int_TM_TrainToTrack _L1;
  /* TM_TrainToTrack::C_compr_P003::_L69 */
  static kcg_int _L69;
  /* TM_TrainToTrack::C_compr_P003::_L70 */
  static kcg_int _L70;
  /* TM_TrainToTrack::C_compr_P003::_L71 */
  static kcg_int _L71;
  /* TM_TrainToTrack::C_compr_P003::_L94 */
  static array_int_3 _L94;
  /* TM_TrainToTrack::C_compr_P003::_L100 */
  static kcg_int _L100;
  /* TM_TrainToTrack::C_compr_P003::_L99 */
  static kcg_int _L99;
  /* TM_TrainToTrack::C_compr_P003::_L98 */
  static kcg_int _L98;
  /* TM_TrainToTrack::C_compr_P003::_L103 */
  static P003_TM_TrainToTrack _L103;
  /* TM_TrainToTrack::C_compr_P003::_L104 */
  static array_int_5 _L104;
  /* TM_TrainToTrack::C_compr_P003::_L105 */
  static kcg_bool _L105;
  /* TM_TrainToTrack::C_compr_P003::_L106 */
  static kcg_int _L106;
  /* TM_TrainToTrack::C_compr_P003::_L107 */
  static kcg_int _L107;
  /* TM_TrainToTrack::C_compr_P003::_L108 */
  static kcg_int _L108;
  
  kcg_copy_P003_TrainTrack_int_TM_TrainToTrack(&_L1, P003_int);
  kcg_copy_array_int_3(&_L94, (array_int_3 *) &_L1[0]);
  _L98 = _L94[0];
  _L105 = /* 1 */ Decode_NID_PACKET_TM_TrainToTrack(_L98, 3);
  ck_every = _L105;
  kcg_copy_array_int_5(&_L104, (array_int_5 *) &_L1[3]);
  /* ck_C_compr_P003 */ if (ck_every) {
    /* 1 */
    C_P003_flatten_sections_TM_TrainToTrack_lib_internal(&_L104, &op_call);
  }
  _L106 = /* 1 */ Filter_Variable_TM_TrainToTrack(_L105, _L98);
  _L69 = /* 1 */ CAST_NID_PACKET_to_int_TM_conversions(_L106);
  _L99 = _L94[1];
  _L107 = /* 2 */ Filter_Variable_TM_TrainToTrack(_L105, _L99);
  _L70 = /* 1 */ CAST_L_PACKET_to_int_TM_conversions(_L107);
  _L100 = _L94[2];
  _L108 = /* 3 */ Filter_Variable_TM_TrainToTrack(_L105, _L100);
  _L71 = /* 1 */ CAST_N_ITER_to_int_TM_conversions(_L108);
  /* ck_C_compr_P003 */ if (ck_every) {
    kcg_copy_P003_nid_radio_list_int_t_TM_TrainToTrack(&outC->_L89, &op_call);
  }
  else {
    if (outC->init) {
      kcg_copy_P003_nid_radio_list_int_t_TM_TrainToTrack(
        &tmp,
        (P003_nid_radio_list_int_t_TM_TrainToTrack *)
          &DEFAULT_P003_nid_radio_list_TM_TrainToTrack);
    }
    else {
      kcg_copy_P003_nid_radio_list_int_t_TM_TrainToTrack(&tmp, &outC->_L89);
    }
    kcg_copy_P003_nid_radio_list_int_t_TM_TrainToTrack(&outC->_L89, &tmp);
  }
  _L103.valid = _L105;
  _L103.nid_packet = _L69;
  _L103.l_packet = _L70;
  _L103.n_iter = _L71;
  kcg_copy_P003_nid_radio_list_t_TM_TrainToTrack(&_L103.nid_radio, &outC->_L89);
  kcg_copy_P003_TM_TrainToTrack(&outC->P003_out, &_L103);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_compr_P003_TM_TrainToTrack.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

