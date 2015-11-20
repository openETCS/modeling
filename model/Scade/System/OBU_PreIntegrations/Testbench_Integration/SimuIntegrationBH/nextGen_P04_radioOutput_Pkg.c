/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nextGen_P04_radioOutput_Pkg.h"

/* radioOutput_Pkg::nextGen_P04 */
void nextGen_P04_radioOutput_Pkg(
  /* radioOutput_Pkg::nextGen_P04::inP4 */ PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *inP4,
  /* radioOutput_Pkg::nextGen_P04::outP4 */ P004_TM_TrainToTrack *outP4)
{
  /* radioOutput_Pkg::nextGen_P04::_L1 */
  static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg _L1;
  /* radioOutput_Pkg::nextGen_P04::_L2 */
  static P004_TM_TrainToTrack _L2;
  /* radioOutput_Pkg::nextGen_P04::_L12 */
  static kcg_int _L12;
  /* radioOutput_Pkg::nextGen_P04::_L34 */
  static kcg_bool _L34;
  /* radioOutput_Pkg::nextGen_P04::_L33 */
  static M_ERROR _L33;
  /* radioOutput_Pkg::nextGen_P04::_L38 */
  static kcg_int _L38;
  
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(&_L1, inP4);
  _L34 = _L1.valid;
  _L38 = cp004_ErrorReporting_ids;
  _L12 = 0;
  _L33 = _L1.m_error;
  _L2.valid = _L34;
  _L2.nid_packet = _L38;
  _L2.l_packet = _L12;
  _L2.m_error = _L33;
  kcg_copy_P004_TM_TrainToTrack(outP4, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** nextGen_P04_radioOutput_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

