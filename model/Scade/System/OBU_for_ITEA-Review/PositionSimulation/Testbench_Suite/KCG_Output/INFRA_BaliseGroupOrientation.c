/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "INFRA_BaliseGroupOrientation.h"

/* INFRA_BaliseGroupOrientation */
void INFRA_BaliseGroupOrientation(
  /* INFRA_BaliseGroupOrientation::QDIR */ kcg_int QDIR,
  /* INFRA_BaliseGroupOrientation::BG */ TM_BaliseGroupData *BG,
  /* INFRA_BaliseGroupOrientation::T_Balise1 */ TM_BaliseTelegramHeader_int_T *T_Balise1,
  /* INFRA_BaliseGroupOrientation::T_Balise2 */ TM_BaliseTelegramHeader_int_T *T_Balise2,
  /* INFRA_BaliseGroupOrientation::Telegram_Balise_A */ TM_BaliseTelegramHeader_int_T *Telegram_Balise_A,
  /* INFRA_BaliseGroupOrientation::Pos_Balise_A */ kcg_real *Pos_Balise_A,
  /* INFRA_BaliseGroupOrientation::Telegram_Balise_B */ TM_BaliseTelegramHeader_int_T *Telegram_Balise_B,
  /* INFRA_BaliseGroupOrientation::Pos_Balise_B */ kcg_real *Pos_Balise_B)
{
  /* INFRA_BaliseGroupOrientation::_L13 */ kcg_real _L13;
  /* INFRA_BaliseGroupOrientation::_L7 */ kcg_bool _L7;
  /* INFRA_BaliseGroupOrientation::_L4 */ kcg_real _L4;
  /* INFRA_BaliseGroupOrientation::_L1 */ kcg_bool _L1;
  /* INFRA_BaliseGroupOrientation::_L17 */ kcg_real _L17;
  /* INFRA_BaliseGroupOrientation::_L20 */ kcg_real _L20;
  
  _L20 = DEFINE_Distance2Balises / 2.0;
  _L17 = (kcg_real) (*BG).Pos / 10.0;
  _L13 = _L20 + _L17;
  _L7 = /* 1 */ TOOLS_Int_to_Q_DIR(QDIR) == ENUM_Q_DIR_nomiinal_QDIR;
  _L1 = !_L7;
  _L4 = _L17 - _L20;
  if (_L1) {
    kcg_copy_TM_BaliseTelegramHeader_int_T(Telegram_Balise_B, T_Balise1);
    *Pos_Balise_B = _L13;
  }
  else {
    kcg_copy_TM_BaliseTelegramHeader_int_T(Telegram_Balise_B, T_Balise2);
    *Pos_Balise_B = _L4;
  }
  if (_L7) {
    *Pos_Balise_A = _L13;
    kcg_copy_TM_BaliseTelegramHeader_int_T(Telegram_Balise_A, T_Balise1);
  }
  else {
    *Pos_Balise_A = _L4;
    kcg_copy_TM_BaliseTelegramHeader_int_T(Telegram_Balise_A, T_Balise2);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** INFRA_BaliseGroupOrientation.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

