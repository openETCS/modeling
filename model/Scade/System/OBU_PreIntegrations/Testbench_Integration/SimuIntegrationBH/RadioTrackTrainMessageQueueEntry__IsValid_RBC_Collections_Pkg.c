/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageQueueEntry__IsValid_RBC_Collections_Pkg.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__IsValid */
kcg_bool RadioTrackTrainMessageQueueEntry__IsValid_RBC_Collections_Pkg(
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__IsValid::inRadioTrackTrainMessageQueueEntry */ RadioTrackTrainMessageQueueEntry_T *inRadioTrackTrainMessageQueueEntry)
{
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__IsValid::_L1 */
  static RadioTrackTrainMessageQueueEntry_T _L1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__IsValid::_L2 */
  static kcg_bool _L2;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__IsValid::outIsValid */
  static kcg_bool outIsValid;
  
  kcg_copy_RadioTrackTrainMessageQueueEntry_T(
    &_L1,
    inRadioTrackTrainMessageQueueEntry);
  _L2 = _L1.m_IsValid;
  outIsValid = _L2;
  return outIsValid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainMessageQueueEntry__IsValid_RBC_Collections_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

