/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nextGen_P01_radioOutput_Pkg.h"

/* radioOutput_Pkg::nextGen_P01 */
void nextGen_P01_radioOutput_Pkg(
  /* radioOutput_Pkg::nextGen_P01::inP1 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *inP1,
  /* radioOutput_Pkg::nextGen_P01::outP1 */ P001_TM_TrainToTrack *outP1)
{
  static kcg_int noname;
  /* radioOutput_Pkg::nextGen_P01::_L1 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L1;
  /* radioOutput_Pkg::nextGen_P01::_L2 */
  static P001_TM_TrainToTrack _L2;
  /* radioOutput_Pkg::nextGen_P01::_L12 */
  static kcg_int _L12;
  /* radioOutput_Pkg::nextGen_P01::_L34 */
  static kcg_int _L34;
  /* radioOutput_Pkg::nextGen_P01::_L33 */
  static kcg_int _L33;
  /* radioOutput_Pkg::nextGen_P01::_L32 */
  static Q_SCALE _L32;
  /* radioOutput_Pkg::nextGen_P01::_L31 */
  static kcg_int _L31;
  /* radioOutput_Pkg::nextGen_P01::_L30 */
  static kcg_int _L30;
  /* radioOutput_Pkg::nextGen_P01::_L29 */
  static kcg_int _L29;
  /* radioOutput_Pkg::nextGen_P01::_L28 */
  static Q_DIRLRBG _L28;
  /* radioOutput_Pkg::nextGen_P01::_L27 */
  static Q_DLRBG _L27;
  /* radioOutput_Pkg::nextGen_P01::_L26 */
  static kcg_int _L26;
  /* radioOutput_Pkg::nextGen_P01::_L25 */
  static kcg_int _L25;
  /* radioOutput_Pkg::nextGen_P01::_L24 */
  static Q_LENGTH _L24;
  /* radioOutput_Pkg::nextGen_P01::_L23 */
  static kcg_int _L23;
  /* radioOutput_Pkg::nextGen_P01::_L22 */
  static kcg_int _L22;
  /* radioOutput_Pkg::nextGen_P01::_L21 */
  static Q_DIRTRAIN _L21;
  /* radioOutput_Pkg::nextGen_P01::_L20 */
  static M_MODE _L20;
  /* radioOutput_Pkg::nextGen_P01::_L19 */
  static M_LEVEL _L19;
  /* radioOutput_Pkg::nextGen_P01::_L35 */
  static kcg_bool _L35;
  /* radioOutput_Pkg::nextGen_P01::_L36 */
  static Position_Report_based_on_two_balise_groups_TrainToTrack _L36;
  /* radioOutput_Pkg::nextGen_P01::_L37 */
  static kcg_int _L37;
  
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&_L1, inP1);
  _L35 = _L1.valid;
  kcg_copy_Position_Report_based_on_two_balise_groups_TrainToTrack(
    &_L36,
    &_L1.packet1);
  _L34 = _L36.NID_PACKET;
  _L12 = 0;
  _L32 = _L36.qscale;
  _L31 = _L36.NID_LRBG;
  _L30 = _L36.NID_PRVLRBG;
  _L29 = _L36.D_LRBG;
  _L28 = _L36.dirlrbg;
  _L27 = _L36.dlrbg;
  _L26 = _L36.L_DOUBTOVER;
  _L25 = _L36.L_DOUBTUNDER;
  _L24 = _L36.length;
  _L23 = _L36.L_TRAININT;
  _L22 = _L36.V_TRAIN;
  _L21 = _L36.dirtrain;
  _L20 = _L36.mode;
  _L19 = _L36.level;
  _L37 = _L36.NID_NTC;
  _L2.valid = _L35;
  _L2.nid_packet = _L34;
  _L2.l_packet = _L12;
  _L2.q_scale = _L32;
  _L2.nid_lrbg = _L31;
  _L2.nid_prvlrbg = _L30;
  _L2.d_lrbg = _L29;
  _L2.q_dirlrbg = _L28;
  _L2.q_dlrbg = _L27;
  _L2.l_doubtover = _L26;
  _L2.l_doubtunder = _L25;
  _L2.q_length = _L24;
  _L2.l_trainint = _L23;
  _L2.v_train = _L22;
  _L2.q_dirtrain = _L21;
  _L2.m_mode = _L20;
  _L2.m_level = _L19;
  _L2.nid_ntc = _L37;
  kcg_copy_P001_TM_TrainToTrack(outP1, &_L2);
  _L33 = _L36.L_PACKET;
  noname = _L33;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** nextGen_P01_radioOutput_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

