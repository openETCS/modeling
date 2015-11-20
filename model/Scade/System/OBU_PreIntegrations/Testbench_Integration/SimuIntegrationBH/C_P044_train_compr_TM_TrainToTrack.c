/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P044_train_compr_TM_TrainToTrack.h"

/* TM_TrainToTrack::C_P044_train_compr */
void C_P044_train_compr_TM_TrainToTrack(
  /* TM_TrainToTrack::C_P044_train_compr::P044_in */ P044_TM_TrainToTrack *P044_in,
  /* TM_TrainToTrack::C_P044_train_compr::P044_int */ P044_TrainTrack_int_TM_TrainToTrack *P044_int)
{
  static P044_TM_TrainToTrack noname;
  /* TM_TrainToTrack::C_P044_train_compr::_L1 */
  static P044_TM_TrainToTrack _L1;
  /* TM_TrainToTrack::C_P044_train_compr::_L116 */
  static P044_TrainTrack_int_TM_TrainToTrack _L116;
  
  kcg_copy_P044_TM_TrainToTrack(&_L1, P044_in);
  kcg_copy_P044_TrainTrack_int_TM_TrainToTrack(
    &_L116,
    (P044_TrainTrack_int_TM_TrainToTrack *) &DEFAULT_P044_int_TM_TrainToTrack);
  kcg_copy_P044_TrainTrack_int_TM_TrainToTrack(P044_int, &_L116);
  kcg_copy_P044_TM_TrainToTrack(&noname, &_L1);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P044_train_compr_TM_TrainToTrack.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

