/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "StoreRaw_NV_TA_Storage.h"

#ifndef KCG_USER_DEFINED_INIT
void StoreRaw_NV_init_TA_Storage(outC_StoreRaw_NV_TA_Storage *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->_L24.valid = kcg_true;
  outC->_L24.q_dir = Q_DIR_Reverse;
  outC->_L24.q_scale = Q_SCALE_10_cm_scale;
  outC->_L24.d_validnv = 0;
  outC->_L24.n_iter = 0;
  for (i = 0; i < 32; i++) {
    outC->_L24.SECTIONS[i].valid = kcg_true;
    outC->_L24.SECTIONS[i].nid_c = 0;
  }
  outC->_L24.v_nvshunt = 0;
  outC->_L24.v_nvstff = 0;
  outC->_L24.v_nvonsight = 0;
  outC->_L24.v_nvunfit = 0;
  outC->_L24.v_nvrel = 0;
  outC->_L24.d_nvroll = 0;
  outC->_L24.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L24.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L24.v_nvallowovtrp = 0;
  outC->_L24.v_nvsopovtrp = 0;
  outC->_L24.d_nvovtrp = 0;
  outC->_L24.t_nvovtrp = 0;
  outC->_L24.d_nvpotrp = 0;
  outC->_L24.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L24.t_nvcontact = 0;
  outC->_L24.m_nvderun = M_NVDERUN_No;
  outC->_L24.d_nvstff = 0;
  outC->_L24.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L23 = kcg_true;
  outC->NV_onboard_out.valid = kcg_true;
  outC->NV_onboard_out.q_dir = Q_DIR_Reverse;
  outC->NV_onboard_out.q_scale = Q_SCALE_10_cm_scale;
  outC->NV_onboard_out.d_validnv = 0;
  outC->NV_onboard_out.n_iter = 0;
  for (i1 = 0; i1 < 32; i1++) {
    outC->NV_onboard_out.SECTIONS[i1].valid = kcg_true;
    outC->NV_onboard_out.SECTIONS[i1].nid_c = 0;
  }
  outC->NV_onboard_out.v_nvshunt = 0;
  outC->NV_onboard_out.v_nvstff = 0;
  outC->NV_onboard_out.v_nvonsight = 0;
  outC->NV_onboard_out.v_nvunfit = 0;
  outC->NV_onboard_out.v_nvrel = 0;
  outC->NV_onboard_out.d_nvroll = 0;
  outC->NV_onboard_out.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->NV_onboard_out.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->NV_onboard_out.v_nvallowovtrp = 0;
  outC->NV_onboard_out.v_nvsopovtrp = 0;
  outC->NV_onboard_out.d_nvovtrp = 0;
  outC->NV_onboard_out.t_nvovtrp = 0;
  outC->NV_onboard_out.d_nvpotrp = 0;
  outC->NV_onboard_out.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->NV_onboard_out.t_nvcontact = 0;
  outC->NV_onboard_out.m_nvderun = M_NVDERUN_No;
  outC->NV_onboard_out.d_nvstff = 0;
  outC->NV_onboard_out.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->new_NV = kcg_true;
  outC->vald_NV = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void StoreRaw_NV_reset_TA_Storage(outC_StoreRaw_NV_TA_Storage *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_Storage::StoreRaw_NV */
void StoreRaw_NV_TA_Storage(
  /* TA_Storage::StoreRaw_NV::mesaage_in */ ReceivedMessage_T_Common_Types_Pkg *mesaage_in,
  outC_StoreRaw_NV_TA_Storage *outC)
{
  /* TA_Storage::StoreRaw_NV */
  static kcg_bool tmp1;
  /* TA_Storage::StoreRaw_NV */
  static P003V1_OBU_T_TM_baseline2 tmp;
  /* TA_Storage::StoreRaw_NV */
  static P003V1_OBU_T_TM_baseline2 op_call;
  /* TA_Storage::StoreRaw_NV */
  static kcg_bool _2_op_call;
  /* TA_Storage::StoreRaw_NV */
  static kcg_bool ck_every;
  /* TA_Storage::StoreRaw_NV::_L25 */
  static ReceivedMessage_T_Common_Types_Pkg _L25;
  /* TA_Storage::StoreRaw_NV::_L21 */
  static kcg_bool _L21;
  /* TA_Storage::StoreRaw_NV::_L22 */
  static P003V1_OBU_T_TM_baseline2 _L22;
  /* TA_Storage::StoreRaw_NV::_L26 */
  static CompressedPackets_T_Common_Types_Pkg _L26;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L25, mesaage_in);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L26, &_L25.packets);
  /* 3 */ Read_P003V1_TM_baseline2(&_L26, &_L21, &_L22);
  ck_every = _L21;
  /* ck_StoreRaw_NV */ if (ck_every) {
    /* 3 */ NV_storage_TA_Storage(&_L22, &_2_op_call, &op_call);
    outC->_L23 = _2_op_call;
  }
  else {
    if (outC->init) {
      tmp1 = kcg_false;
    }
    else {
      tmp1 = outC->_L23;
    }
    outC->_L23 = tmp1;
  }
  outC->vald_NV = outC->_L23;
  /* ck_StoreRaw_NV */ if (ck_every) {
    kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->_L24, &op_call);
  }
  else {
    if (outC->init) {
      kcg_copy_P003V1_OBU_T_TM_baseline2(
        &tmp,
        (P003V1_OBU_T_TM_baseline2 *) &INIT_P3V1_TA_Storage);
    }
    else {
      kcg_copy_P003V1_OBU_T_TM_baseline2(&tmp, &outC->_L24);
    }
    kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->_L24, &tmp);
  }
  kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->NV_onboard_out, &outC->_L24);
  outC->new_NV = _L21;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** StoreRaw_NV_TA_Storage.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

