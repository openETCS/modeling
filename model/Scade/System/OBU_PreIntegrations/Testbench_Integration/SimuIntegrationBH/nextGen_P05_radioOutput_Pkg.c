/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nextGen_P05_radioOutput_Pkg.h"

/* radioOutput_Pkg::nextGen_P05 */
void nextGen_P05_radioOutput_Pkg(
  /* radioOutput_Pkg::nextGen_P05::inP5 */ PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *inP5,
  /* radioOutput_Pkg::nextGen_P05::outP5 */ P005_TM_TrainToTrack *outP5)
{
  /* radioOutput_Pkg::nextGen_P05::_L1 */
  static PT5_TrainRunningNumber_Packet_TrainTypes_Pkg _L1;
  /* radioOutput_Pkg::nextGen_P05::_L2 */
  static P005_TM_TrainToTrack _L2;
  /* radioOutput_Pkg::nextGen_P05::_L12 */
  static kcg_int _L12;
  /* radioOutput_Pkg::nextGen_P05::_L34 */
  static kcg_bool _L34;
  /* radioOutput_Pkg::nextGen_P05::_L33 */
  static NID_OPERATIONAL _L33;
  /* radioOutput_Pkg::nextGen_P05::_L40 */
  static kcg_int _L40;
  
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(&_L1, inP5);
  _L34 = _L1.valid;
  _L40 = cp005_TrainRunningNumber_ids;
  _L12 = 0;
  _L33 = _L1.TrainRunningNumber;
  _L2.valid = _L34;
  _L2.nid_packet = _L40;
  _L2.l_packet = _L12;
  _L2.nid_opeartional = _L33;
  kcg_copy_P005_TM_TrainToTrack(outP5, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** nextGen_P05_radioOutput_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

