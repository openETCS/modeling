/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _INFRA_BaliseGroupOrientation_H_
#define _INFRA_BaliseGroupOrientation_H_

#include "kcg_types.h"
#include "TOOLS_Int_to_Q_DIR.h"

/* =====================  no input structure  ====================== */


/* INFRA_BaliseGroupOrientation */
extern void INFRA_BaliseGroupOrientation(
  /* INFRA_BaliseGroupOrientation::QDIR */ kcg_int QDIR,
  /* INFRA_BaliseGroupOrientation::BG */ TM_BaliseGroupData *BG,
  /* INFRA_BaliseGroupOrientation::T_Balise1 */ TM_BaliseTelegramHeader_int_T *T_Balise1,
  /* INFRA_BaliseGroupOrientation::T_Balise2 */ TM_BaliseTelegramHeader_int_T *T_Balise2,
  /* INFRA_BaliseGroupOrientation::Telegram_Balise_A */ TM_BaliseTelegramHeader_int_T *Telegram_Balise_A,
  /* INFRA_BaliseGroupOrientation::Pos_Balise_A */ kcg_real *Pos_Balise_A,
  /* INFRA_BaliseGroupOrientation::Telegram_Balise_B */ TM_BaliseTelegramHeader_int_T *Telegram_Balise_B,
  /* INFRA_BaliseGroupOrientation::Pos_Balise_B */ kcg_real *Pos_Balise_B);

#endif /* _INFRA_BaliseGroupOrientation_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** INFRA_BaliseGroupOrientation.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

