/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "splitInputData_Handover_Pkg_handoverUtils_Pkg.h"

/* Handover_Pkg::handoverUtils_Pkg::splitInputData */
void splitInputData_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::dataFromTrack_in */msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromTrack_in,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::useInformationFromAcceptingRBC */kcg_bool useInformationFromAcceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::handingOverMobile_is_mobile_1 */kcg_bool handingOverMobile_is_mobile_1,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::morcStatus_1 */morcStatus_T_RCM_Session_Types_Pkg *morcStatus_1,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::morcStatus_2 */morcStatus_T_RCM_Session_Types_Pkg *morcStatus_2,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::sessionManagementAbility */abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::dataFromHandingOverMobile */msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromHandingOverMobile,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::dataFromAcceptingMobile */msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromAcceptingMobile,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::dataFromBalise */msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromBalise,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::dataFromTrack_out */msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromTrack_out)
{
  static msgFromTrack_T_RCM_MsgTypes_Pkg tmp2;
  static morcStatus_T_RCM_Session_Types_Pkg tmp1;
  static morcStatus_T_RCM_Session_Types_Pkg tmp;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L120 */
  static kcg_bool _L120_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L109 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L109_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L83 */
  static kcg_bool _L83_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L100 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L100_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = sessionManagementAbility ==
    isAbleToManageOneSession_Handover_Pkg;
  if (IfBlock1_clock) {
    if (((*dataFromTrack_in).source == msrc_Euroradio_Common_Types_Pkg) &
      (*dataFromTrack_in).valid) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&tmp2, dataFromTrack_in);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &tmp2,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    }
    if (useInformationFromAcceptingRBC) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        dataFromHandingOverMobile,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(dataFromAcceptingMobile, &tmp2);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        dataFromHandingOverMobile,
        &tmp2);
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        dataFromAcceptingMobile,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    }
    if ((*dataFromTrack_in).BG_Common_Header.valid &
      (msrc_Eurobalise_Common_Types_Pkg == (*dataFromTrack_in).source) &
      (*dataFromTrack_in).valid) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        dataFromBalise,
        dataFromTrack_in);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        dataFromBalise,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      dataFromTrack_out,
      dataFromTrack_in);
  }
  else {
    _L120_IfBlock1 = (*dataFromTrack_in).BG_Common_Header.valid &
      (msrc_Eurobalise_Common_Types_Pkg == (*dataFromTrack_in).source) &
      (*dataFromTrack_in).valid;
    if (handingOverMobile_is_mobile_1) {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&tmp1, morcStatus_1);
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&tmp, morcStatus_2);
    }
    else {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&tmp1, morcStatus_2);
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&tmp, morcStatus_1);
    }
    _L83_IfBlock1 = (*dataFromTrack_in).valid & ((*dataFromTrack_in).source ==
        msrc_Euroradio_Common_Types_Pkg) &
      (*dataFromTrack_in).sendingRBC.valid & tmp1.session.valid;
    if (_L83_IfBlock1 & (tmp.session.phase ==
        sp_maintaining_RCM_Session_Types_Pkg) &
      ((*dataFromTrack_in).sendingRBC.nid_c == tmp.session.nid_c) &
      ((*dataFromTrack_in).sendingRBC.rbc_id == tmp.session.nid_rbc) &
      tmp.session.valid) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &_L109_IfBlock1,
        dataFromTrack_in);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &_L109_IfBlock1,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    }
    if (_L83_IfBlock1 & (tmp1.session.phase ==
        sp_maintaining_RCM_Session_Types_Pkg) & (tmp1.session.nid_c ==
        (*dataFromTrack_in).sendingRBC.nid_c) &
      ((*dataFromTrack_in).sendingRBC.rbc_id == tmp1.session.nid_rbc)) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &_L100_IfBlock1,
        dataFromTrack_in);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &_L100_IfBlock1,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      dataFromHandingOverMobile,
      &_L100_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      dataFromAcceptingMobile,
      &_L109_IfBlock1);
    if (_L120_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        dataFromBalise,
        dataFromTrack_in);
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        dataFromTrack_out,
        dataFromBalise);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        dataFromBalise,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
      if (useInformationFromAcceptingRBC) {
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          dataFromTrack_out,
          &_L109_IfBlock1);
      }
      else {
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          dataFromTrack_out,
          &_L100_IfBlock1);
      }
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** splitInputData_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

