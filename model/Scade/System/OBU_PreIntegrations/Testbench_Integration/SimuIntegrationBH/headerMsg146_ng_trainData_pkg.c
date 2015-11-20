/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "headerMsg146_ng_trainData_pkg.h"

/* trainData_pkg::headerMsg146_ng */
void headerMsg146_ng_trainData_pkg(
  /* trainData_pkg::headerMsg146_ng::nidEngine */ NID_ENGINE nidEngine,
  /* trainData_pkg::headerMsg146_ng::t_train */ T_TRAIN t_train,
  /* trainData_pkg::headerMsg146_ng::RBC_timeStamp */ T_TRAIN RBC_timeStamp,
  /* trainData_pkg::headerMsg146_ng::header */ M_146_T_TM_radio_messages *header)
{
  /* trainData_pkg::headerMsg146_ng::_L11 */
  static NID_ENGINE _L11;
  /* trainData_pkg::headerMsg146_ng::_L16 */
  static T_TRAIN _L16;
  /* trainData_pkg::headerMsg146_ng::_L18 */
  static T_TRAIN _L18;
  /* trainData_pkg::headerMsg146_ng::_L19 */
  static M_146_T_TM_radio_messages _L19;
  /* trainData_pkg::headerMsg146_ng::_L20 */
  static kcg_bool _L20;
  /* trainData_pkg::headerMsg146_ng::_L21 */
  static NID_MESSAGE _L21;
  /* trainData_pkg::headerMsg146_ng::_L22 */
  static kcg_int _L22;
  
  _L20 = kcg_true;
  _L21 = co146_Acknowledgement_Id_Pkg;
  _L22 = 0;
  _L18 = t_train;
  _L11 = nidEngine;
  _L16 = RBC_timeStamp;
  _L19.valid = _L20;
  _L19.nid_message = _L21;
  _L19.l_message = _L22;
  _L19.t_train = _L18;
  _L19.nid_engine = _L11;
  _L19.t_train_req = _L16;
  kcg_copy_M_146_T_TM_radio_messages(header, &_L19);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** headerMsg146_ng_trainData_pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

