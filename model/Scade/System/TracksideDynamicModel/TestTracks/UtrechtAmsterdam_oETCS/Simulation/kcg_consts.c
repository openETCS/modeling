/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-06T10:22:38
*************************************************************$ */

#include "kcg_consts.h"

/* Balises426::BG352_header_B1 */
const BaliseTelegramHeader_int_T_TM BG352_header_B1_Balises426 = { 1, 16, 0, 1,
  1, 2, 255, 426, 352, 0 };

/* Balises426::BG352_header_B0 */
const BaliseTelegramHeader_int_T_TM BG352_header_B0_Balises426 = { 1, 16, 0, 0,
  1, 1, 255, 426, 352, 0 };

/* Balises426::BG352 */
const BaliseGroupData_Basics BG352_Balises426 = { 426, 352, 10507, Amsterdam_TM,
  N_TM };

/* InfraLib::DEFAULT_BaliseTelegramHd */
const BaliseTelegramHeader_int_T_TM DEFAULT_BaliseTelegramHd_InfraLib = { 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0 };

/* TM::DEFAULT_TM_BaliseHeaderInt */
const BaliseTelegramHeader_int_T_TM DEFAULT_TM_BaliseHeaderInt_TM = { 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0 };

/* TM::DEFAULT_Packets */
const CompressedPackets_T_Common_Types_Pkg DEFAULT_Packets_TM = { { { 0,
      Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, {
      0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0,
      0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false,
      0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse,
      kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0,
      Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, {
      0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0,
      0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false,
      0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse,
      kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0,
      Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, {
      0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0,
      0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false,
      0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse,
      kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0,
      Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, {
      0, Q_DIR_Reverse, kcg_false, 0, 0 } }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };

/* Balises426::BG353_header_B1 */
const BaliseTelegramHeader_int_T_TM BG353_header_B1_Balises426 = { 1, 16, 0, 1,
  1, 2, 255, 426, 353, 1 };

/* Balises426::BG353_header_B0 */
const BaliseTelegramHeader_int_T_TM BG353_header_B0_Balises426 = { 1, 16, 0, 0,
  1, 1, 255, 426, 353, 1 };

/* Balises426::BG353 */
const BaliseGroupData_Basics BG353_Balises426 = { 426, 353, 1565, Amsterdam_TM,
  N_TM };

/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_consts.c
** Generation date: 2015-06-06T10:22:38
*************************************************************$ */

