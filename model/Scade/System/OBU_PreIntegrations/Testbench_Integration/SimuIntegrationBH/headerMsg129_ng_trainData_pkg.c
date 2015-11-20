/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "headerMsg129_ng_trainData_pkg.h"

/* trainData_pkg::headerMsg129_ng */
void headerMsg129_ng_trainData_pkg(
  /* trainData_pkg::headerMsg129_ng::nidEngine */ NID_ENGINE nidEngine,
  /* trainData_pkg::headerMsg129_ng::t_train */ T_TRAIN t_train,
  /* trainData_pkg::headerMsg129_ng::header */ M_129_T_TM_radio_messages *header)
{
  /* trainData_pkg::headerMsg129_ng::_L11 */
  static NID_ENGINE _L11;
  /* trainData_pkg::headerMsg129_ng::_L16 */
  static T_TRAIN _L16;
  /* trainData_pkg::headerMsg129_ng::_L17 */
  static M_129_T_TM_radio_messages _L17;
  /* trainData_pkg::headerMsg129_ng::_L18 */
  static kcg_bool _L18;
  /* trainData_pkg::headerMsg129_ng::_L19 */
  static NID_MESSAGE _L19;
  /* trainData_pkg::headerMsg129_ng::_L20 */
  static kcg_int _L20;
  
  _L18 = kcg_true;
  _L19 = co129_Validated_Train_Data_Id_Pkg;
  _L20 = 0;
  _L16 = t_train;
  _L11 = nidEngine;
  _L17.valid = _L18;
  _L17.nid_message = _L19;
  _L17.l_message = _L20;
  _L17.t_train = _L16;
  _L17.nid_engine = _L11;
  kcg_copy_M_129_T_TM_radio_messages(header, &_L17);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** headerMsg129_ng_trainData_pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

