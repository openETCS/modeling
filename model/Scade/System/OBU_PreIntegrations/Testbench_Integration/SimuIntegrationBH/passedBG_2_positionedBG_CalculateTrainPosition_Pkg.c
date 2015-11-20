/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "passedBG_2_positionedBG_CalculateTrainPosition_Pkg.h"

/* CalculateTrainPosition_Pkg::passedBG_2_positionedBG */
void passedBG_2_positionedBG_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::passedBG_asAnnounced */ positionedBG_T_TrainPosition_Types_Pck *passedBG_asAnnounced,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::previouslyPassedLinkedBG */ positionedBG_T_TrainPosition_Types_Pck *previouslyPassedLinkedBG,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::passedBGSeqNo */ kcg_int passedBGSeqNo,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::passedPositionedBG */ positionedBG_T_TrainPosition_Types_Pck *passedPositionedBG,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::foundNotWhereAnnounced */ kcg_bool *_33_foundNotWhereAnnounced,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::BGpassedInUnexpectedDirection */ kcg_bool *BGpassedInUnexpectedDirection,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::linkedBGs */ linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck *linkedBGs)
{
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::foundNotWhereAnnounced_loc */
  static kcg_bool _3_foundNotWhereAnnounced_loc;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::location */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _2_location;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::foundNotWhereAnnounced */
  static kcg_bool _1_foundNotWhereAnnounced;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::then::_L26 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L26_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::then::_L27 */
  static kcg_bool _L27_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::then::_L20 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L20_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::then::_L21 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L21_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::then::_L22 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L22_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::then::_L23 */
  static passedBG_T_BG_Types_Pkg _L23_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::then::_L24 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L24_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::then::_L25 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L25_ifAnnouncedOrABGWasPreviouslyPassed;
  static kcg_bool _17_noname;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::foundNotWhereAnnounced_loc */
  static kcg_bool foundNotWhereAnnounced_loc;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::location */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg location;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::foundNotWhereAnnounced */
  static kcg_bool foundNotWhereAnnounced;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else */
  static kcg_bool _18_else_clock_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::foundNotWhereAnnounced_loc */
  static kcg_bool _15_foundNotWhereAnnounced_loc;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::location */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _14_location;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::foundNotWhereAnnounced */
  static kcg_bool _13_foundNotWhereAnnounced;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::then::_L1 */
  static positionedBG_T_TrainPosition_Types_Pck _L1_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::then::_L2 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L2_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::foundNotWhereAnnounced_loc */
  static kcg_bool _12_foundNotWhereAnnounced_loc;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::location */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _11_location;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::foundNotWhereAnnounced */
  static kcg_bool _10_foundNotWhereAnnounced;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L16 */
  static kcg_bool _L16_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L15 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L1519_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L1 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L120_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L2 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L221_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L3 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L3_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L4 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L4_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L5 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L5_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L6 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L622_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L7 */
  static positionedBG_T_TrainPosition_Types_Pck _L723_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L8 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L824_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L10 */
  static kcg_bool _L1025_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L9 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L926_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L11 */
  static positionedBG_T_TrainPosition_Types_Pck _L1127_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L12 */
  static kcg_bool _L1228_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L13 */
  static passedBG_T_BG_Types_Pkg _L1329_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L14 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L1430_ifAnnouncedOrABGWasPreviouslyPassed;
  static kcg_bool noname;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else */
  static kcg_bool else_clock_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::foundNotWhereAnnounced */
  static kcg_bool _4_foundNotWhereAnnounced;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::location */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _5_location;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::foundNotWhereAnnounced_loc */
  static kcg_bool _6_foundNotWhereAnnounced_loc;
  static kcg_bool _16_noname;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::then::_L13 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L13_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::then::_L12 */
  static positionedBG_T_TrainPosition_Types_Pck _L12_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::then::_L11 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L11_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::then::_L10 */
  static passedBG_T_BG_Types_Pkg _L10_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::then::_L9 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L9_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::then::_L8 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L8_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::then::_L7 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L7_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::then::_L6 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L6_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::then::_L14 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L14_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::then::_L15 */
  static kcg_bool _L15_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::foundNotWhereAnnounced */
  static kcg_bool _7_foundNotWhereAnnounced;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::location */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _8_location;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::foundNotWhereAnnounced_loc */
  static kcg_bool _9_foundNotWhereAnnounced_loc;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed */
  static kcg_bool ifAnnouncedOrABGWasPreviouslyPassed_clock;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::BG_wasAnnounced */
  static kcg_bool BG_wasAnnounced;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::location */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _32_location;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::passedPositionedBG_loc */
  static positionedBG_T_TrainPosition_Types_Pck passedPositionedBG_loc;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::foundNotWhereAnnounced_loc */
  static kcg_bool _31_foundNotWhereAnnounced_loc;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::BGpassedInUnexpectedDirection_loc */
  static kcg_bool BGpassedInUnexpectedDirection_loc;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L14 */
  static positionedBG_T_TrainPosition_Types_Pck _L14;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L15 */
  static passedBG_T_BG_Types_Pkg _L15;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L16 */
  static passedBG_T_BG_Types_Pkg _L16;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L37 */
  static NID_C _L37;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L38 */
  static NID_BG _L38;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L39 */
  static Q_LINK _L39;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L40 */
  static positionedBG_T_TrainPosition_Types_Pck _L40;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L41 */
  static positionedBG_T_TrainPosition_Types_Pck _L41;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L56 */
  static kcg_bool _L56;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L57 */
  static NID_BG _L57;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L58 */
  static passedBG_T_BG_Types_Pkg _L58;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L59 */
  static NID_BG _L59;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L60 */
  static kcg_bool _L60;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L61 */
  static NID_C _L61;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L62 */
  static NID_C _L62;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L63 */
  static kcg_bool _L63;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L64 */
  static Q_LINK _L64;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L65 */
  static Q_LINK _L65;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L66 */
  static kcg_bool _L66;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L67 */
  static kcg_bool _L67;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L68 */
  static kcg_bool _L68;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L181 */
  static kcg_bool _L181;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L182 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L182;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L183 */
  static infoFromLinking_T_TrainPosition_Types_Pck _L183;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L184 */
  static infoFromLinking_T_TrainPosition_Types_Pck _L184;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L185 */
  static infoFromLinking_T_TrainPosition_Types_Pck _L185;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L262 */
  static positionedBG_T_TrainPosition_Types_Pck _L262;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L264 */
  static passedBG_T_BG_Types_Pkg _L264;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L263 */
  static LinkedBGs_T_BG_Types_Pkg _L263;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L265 */
  static linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck _L265;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L281 */
  static kcg_int _L281;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L282 */
  static trainProperties_T_TrainPosition_Types_Pck _L282;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L283 */
  static passedBG_T_BG_Types_Pkg _L283;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L284 */
  static kcg_bool _L284;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L285 */
  static passedBG_T_BG_Types_Pkg _L285;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L295 */
  static BG_Header_T_BG_Types_Pkg _L295;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L296 */
  static kcg_bool _L296;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L297 */
  static kcg_bool _L297;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L301 */
  static kcg_bool _L301;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L302 */
  static kcg_bool _L302;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L303 */
  static Q_LINK _L303;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L305 */
  static kcg_bool _L305;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L306 */
  static passedBG_T_BG_Types_Pkg _L306;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L307 */
  static positionedBG_T_TrainPosition_Types_Pck _L307;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L308 */
  static Q_DIRLRBG _L308;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L309 */
  static Q_LINKORIENTATION _L309;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L310 */
  static Q_LINKORIENTATION _L310;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L311 */
  static Q_LINKORIENTATION _L311;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L312 */
  static Q_DIRLRBG _L312;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L313 */
  static Q_DIRLRBG _L313;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L315 */
  static kcg_bool _L315;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L316 */
  static kcg_bool _L316;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L317 */
  static kcg_bool _L317;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L318 */
  static kcg_bool _L318;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L319 */
  static kcg_bool _L319;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L320 */
  static kcg_bool _L320;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L321 */
  static kcg_bool _L321;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L322 */
  static kcg_bool _L322;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L325 */
  static kcg_bool _L325;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L326 */
  static kcg_bool _L326;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::_L327 */
  static kcg_bool _L327;
  
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L15, passedBG);
  _L296 = _L15.valid;
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L295, &_L15.BG_Header);
  _L37 = _L295.nid_c;
  _L38 = _L295.nid_bg;
  _L39 = _L295.q_link;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L41, passedBG_asAnnounced);
  _L56 = _L41.valid;
  _L57 = _L41.nid_bg;
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L58, passedBG);
  _L59 = _L58.BG_Header.nid_bg;
  _L60 = _L57 == _L59;
  _L61 = _L41.nid_c;
  _L62 = _L58.BG_Header.nid_c;
  _L63 = _L61 == _L62;
  _L303 = Q_LINK_Linked;
  _L64 = _L41.q_link;
  _L302 = _L303 == _L64;
  _L65 = _L58.BG_Header.q_link;
  _L66 = _L64 == _L65;
  _L181 = _L41.infoFromLinking.valid;
  _L301 = _L58.valid;
  _L305 = _L58.BG_Header.valid;
  _L67 = _L56 & _L60 & _L63 & _L302 & _L66 & _L181 & _L301 & _L305;
  BG_wasAnnounced = _L67;
  ifAnnouncedOrABGWasPreviouslyPassed_clock = !BG_wasAnnounced &
    !(*previouslyPassedLinkedBG).valid;
  /* ck_ifAnnouncedOrABGWasPreviouslyPassed */ if (ifAnnouncedOrABGWasPreviouslyPassed_clock) {
    kcg_copy_passedBG_T_BG_Types_Pkg(
      &_L23_ifAnnouncedOrABGWasPreviouslyPassed,
      passedBG);
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &_L21_ifAnnouncedOrABGWasPreviouslyPassed,
      &_L23_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.odo);
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &_L20_ifAnnouncedOrABGWasPreviouslyPassed,
      (OdometryLocations_T_Obu_BasicTypes_Pkg *)
        &cOdometryInitialValue_Obu_BasicTypes_Pkg);
    /* 8 */
    sub_2_odoDistances_BasicLocationFunctions_Pkg(
      &_L21_ifAnnouncedOrABGWasPreviouslyPassed,
      &_L20_ifAnnouncedOrABGWasPreviouslyPassed,
      &_L24_ifAnnouncedOrABGWasPreviouslyPassed);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &_L25_ifAnnouncedOrABGWasPreviouslyPassed,
      &_L23_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.BG_centerDetectionInaccuraccuracies);
    /* 9 */
    add_2_Distances_BasicLocationFunctions_Pkg(
      &_L24_ifAnnouncedOrABGWasPreviouslyPassed,
      &_L25_ifAnnouncedOrABGWasPreviouslyPassed,
      &_L22_ifAnnouncedOrABGWasPreviouslyPassed);
    /* 4 */
    overlapOf_2_Locations_BasicLocationFunctions_Pkg(
      &_L22_ifAnnouncedOrABGWasPreviouslyPassed,
      &_L22_ifAnnouncedOrABGWasPreviouslyPassed,
      &_L26_ifAnnouncedOrABGWasPreviouslyPassed,
      &_L27_ifAnnouncedOrABGWasPreviouslyPassed);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &_2_location,
      &_L26_ifAnnouncedOrABGWasPreviouslyPassed);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_32_location, &_2_location);
  }
  else {
    _18_else_clock_ifAnnouncedOrABGWasPreviouslyPassed = !BG_wasAnnounced &
      (*previouslyPassedLinkedBG).valid;
    /* ck_anon_activ */ if (_18_else_clock_ifAnnouncedOrABGWasPreviouslyPassed) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &_L12_ifAnnouncedOrABGWasPreviouslyPassed,
        previouslyPassedLinkedBG);
      kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
        &_L7_ifAnnouncedOrABGWasPreviouslyPassed,
        &_L12_ifAnnouncedOrABGWasPreviouslyPassed.location);
      kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
        &_L11_ifAnnouncedOrABGWasPreviouslyPassed,
        &_L12_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.odo);
      kcg_copy_passedBG_T_BG_Types_Pkg(
        &_L10_ifAnnouncedOrABGWasPreviouslyPassed,
        passedBG);
      kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
        &_L9_ifAnnouncedOrABGWasPreviouslyPassed,
        &_L10_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.odo);
      /* 5 */
      add_odo_2_Location_BasicLocationFunctions_Pkg(
        &_L7_ifAnnouncedOrABGWasPreviouslyPassed,
        &_L11_ifAnnouncedOrABGWasPreviouslyPassed,
        &_L9_ifAnnouncedOrABGWasPreviouslyPassed,
        &_L6_ifAnnouncedOrABGWasPreviouslyPassed);
      kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
        &_L13_ifAnnouncedOrABGWasPreviouslyPassed,
        &_L10_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.BG_centerDetectionInaccuraccuracies);
      /* 13 */
      add_2_Distances_BasicLocationFunctions_Pkg(
        &_L6_ifAnnouncedOrABGWasPreviouslyPassed,
        &_L13_ifAnnouncedOrABGWasPreviouslyPassed,
        &_L8_ifAnnouncedOrABGWasPreviouslyPassed);
      /* 5 */
      overlapOf_2_Locations_BasicLocationFunctions_Pkg(
        &_L8_ifAnnouncedOrABGWasPreviouslyPassed,
        &_L8_ifAnnouncedOrABGWasPreviouslyPassed,
        &_L14_ifAnnouncedOrABGWasPreviouslyPassed,
        &_L15_ifAnnouncedOrABGWasPreviouslyPassed);
      kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
        &_8_location,
        &_L14_ifAnnouncedOrABGWasPreviouslyPassed);
      kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&location, &_8_location);
    }
    else {
      else_clock_ifAnnouncedOrABGWasPreviouslyPassed = BG_wasAnnounced &
        !(*previouslyPassedLinkedBG).valid;
      /* ck_anon_activ */ if (else_clock_ifAnnouncedOrABGWasPreviouslyPassed) {
        kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
          &_L1_ifAnnouncedOrABGWasPreviouslyPassed,
          passedBG_asAnnounced);
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
          &_L2_ifAnnouncedOrABGWasPreviouslyPassed,
          &_L1_ifAnnouncedOrABGWasPreviouslyPassed.location);
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
          &_14_location,
          &_L2_ifAnnouncedOrABGWasPreviouslyPassed);
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_5_location, &_14_location);
      }
      else {
        kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
          &_L1127_ifAnnouncedOrABGWasPreviouslyPassed,
          passedBG_asAnnounced);
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
          &_L1430_ifAnnouncedOrABGWasPreviouslyPassed,
          &_L1127_ifAnnouncedOrABGWasPreviouslyPassed.location);
        kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
          &_L723_ifAnnouncedOrABGWasPreviouslyPassed,
          previouslyPassedLinkedBG);
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
          &_L824_ifAnnouncedOrABGWasPreviouslyPassed,
          &_L723_ifAnnouncedOrABGWasPreviouslyPassed.location);
        kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
          &_L3_ifAnnouncedOrABGWasPreviouslyPassed,
          &_L723_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.odo);
        kcg_copy_passedBG_T_BG_Types_Pkg(
          &_L1329_ifAnnouncedOrABGWasPreviouslyPassed,
          passedBG);
        kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
          &_L622_ifAnnouncedOrABGWasPreviouslyPassed,
          &_L1329_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.odo);
        /* 6 */
        add_odo_2_Location_BasicLocationFunctions_Pkg(
          &_L824_ifAnnouncedOrABGWasPreviouslyPassed,
          &_L3_ifAnnouncedOrABGWasPreviouslyPassed,
          &_L622_ifAnnouncedOrABGWasPreviouslyPassed,
          &_L221_ifAnnouncedOrABGWasPreviouslyPassed);
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
          &_L4_ifAnnouncedOrABGWasPreviouslyPassed,
          &_L1329_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.BG_centerDetectionInaccuraccuracies);
        /* 14 */
        add_2_Distances_BasicLocationFunctions_Pkg(
          &_L221_ifAnnouncedOrABGWasPreviouslyPassed,
          &_L4_ifAnnouncedOrABGWasPreviouslyPassed,
          &_L120_ifAnnouncedOrABGWasPreviouslyPassed);
        /* 3 */
        overlapOf_2_Locations_BasicLocationFunctions_Pkg(
          &_L1430_ifAnnouncedOrABGWasPreviouslyPassed,
          &_L120_ifAnnouncedOrABGWasPreviouslyPassed,
          &_L926_ifAnnouncedOrABGWasPreviouslyPassed,
          &_L1025_ifAnnouncedOrABGWasPreviouslyPassed);
        /* 6 */
        overlapOf_2_Locations_BasicLocationFunctions_Pkg(
          &_L1430_ifAnnouncedOrABGWasPreviouslyPassed,
          &_L1430_ifAnnouncedOrABGWasPreviouslyPassed,
          &_L1519_ifAnnouncedOrABGWasPreviouslyPassed,
          &_L16_ifAnnouncedOrABGWasPreviouslyPassed);
        /* 4 */ if (_L1025_ifAnnouncedOrABGWasPreviouslyPassed) {
          kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
            &_L5_ifAnnouncedOrABGWasPreviouslyPassed,
            &_L926_ifAnnouncedOrABGWasPreviouslyPassed);
        }
        else {
          kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
            &_L5_ifAnnouncedOrABGWasPreviouslyPassed,
            &_L1519_ifAnnouncedOrABGWasPreviouslyPassed);
        }
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
          &_11_location,
          &_L5_ifAnnouncedOrABGWasPreviouslyPassed);
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_5_location, &_11_location);
      }
      kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&location, &_5_location);
    }
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_32_location, &location);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L182, &_32_location);
  _L281 = passedBGSeqNo;
  _L68 = BG_wasAnnounced;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L40, passedBG_asAnnounced);
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &_L183,
    &_L40.infoFromLinking);
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &_L185,
    (infoFromLinking_T_TrainPosition_Types_Pck *)
      &cNoInfoFromLinking_CalculateTrainPosition_Pkg);
  /* 5 */ if (_L68) {
    kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(&_L184, &_L183);
  }
  else {
    kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(&_L184, &_L185);
  }
  /* ck_ifAnnouncedOrABGWasPreviouslyPassed */ if (ifAnnouncedOrABGWasPreviouslyPassed_clock) {
    _3_foundNotWhereAnnounced_loc = kcg_false;
    _31_foundNotWhereAnnounced_loc = _3_foundNotWhereAnnounced_loc;
  }
  else {
    /* ck_anon_activ */ if (_18_else_clock_ifAnnouncedOrABGWasPreviouslyPassed) {
      _9_foundNotWhereAnnounced_loc = kcg_false;
      foundNotWhereAnnounced_loc = _9_foundNotWhereAnnounced_loc;
    }
    else {
      /* ck_anon_activ */ if (else_clock_ifAnnouncedOrABGWasPreviouslyPassed) {
        _15_foundNotWhereAnnounced_loc = kcg_false;
        _6_foundNotWhereAnnounced_loc = _15_foundNotWhereAnnounced_loc;
      }
      else {
        _L1228_ifAnnouncedOrABGWasPreviouslyPassed =
          !_L1025_ifAnnouncedOrABGWasPreviouslyPassed;
        _12_foundNotWhereAnnounced_loc =
          _L1228_ifAnnouncedOrABGWasPreviouslyPassed;
        _6_foundNotWhereAnnounced_loc = _12_foundNotWhereAnnounced_loc;
      }
      foundNotWhereAnnounced_loc = _6_foundNotWhereAnnounced_loc;
    }
    _31_foundNotWhereAnnounced_loc = foundNotWhereAnnounced_loc;
  }
  _L284 = _31_foundNotWhereAnnounced_loc;
  _L297 = BG_wasAnnounced;
  _L313 = Q_DIRLRBG_Nominal;
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L306, passedBG);
  _L308 = _L306.BG_Header.trainOrientationToBG;
  _L315 = _L313 == _L308;
  _L311 =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L307, passedBG_asAnnounced);
  _L309 = _L307.infoFromLinking.linkingInfo.q_linkorientation;
  _L316 = _L311 == _L309;
  _L317 = _L315 & _L316;
  _L312 = Q_DIRLRBG_Reverse;
  _L318 = _L308 == _L312;
  _L310 =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  _L319 = _L310 == _L309;
  _L320 = _L318 & _L319;
  _L321 = _L317 | _L320;
  _L322 = !_L321;
  BGpassedInUnexpectedDirection_loc = _L297 & _L322;
  _L325 = BGpassedInUnexpectedDirection_loc;
  _L326 = _L284 | _L325;
  kcg_copy_passedBG_T_BG_Types_Pkg(
    &_L285,
    (passedBG_T_BG_Types_Pkg *) &cNoPassedBG_CalculateTrainPosition_Pkg);
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L16, passedBG);
  /* 6 */ if (_L326) {
    kcg_copy_passedBG_T_BG_Types_Pkg(&_L283, &_L285);
  }
  else {
    kcg_copy_passedBG_T_BG_Types_Pkg(&_L283, &_L16);
  }
  _L327 = kcg_false;
  _L14.valid = _L296;
  _L14.nid_c = _L37;
  _L14.nid_bg = _L38;
  _L14.q_link = _L39;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L14.location, &_L182);
  _L14.seqNoOnTrack = _L281;
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &_L14.infoFromLinking,
    &_L184);
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L14.infoFromPassing, &_L283);
  _L14.missed = _L327;
  /* ck_ifAnnouncedOrABGWasPreviouslyPassed */ if (ifAnnouncedOrABGWasPreviouslyPassed_clock) {
    _1_foundNotWhereAnnounced = kcg_false;
    *_33_foundNotWhereAnnounced = _1_foundNotWhereAnnounced;
    _17_noname = _L27_ifAnnouncedOrABGWasPreviouslyPassed;
  }
  else {
    /* ck_anon_activ */ if (_18_else_clock_ifAnnouncedOrABGWasPreviouslyPassed) {
      _7_foundNotWhereAnnounced = kcg_false;
      foundNotWhereAnnounced = _7_foundNotWhereAnnounced;
    }
    else {
      /* ck_anon_activ */ if (else_clock_ifAnnouncedOrABGWasPreviouslyPassed) {
        _13_foundNotWhereAnnounced = kcg_false;
        _4_foundNotWhereAnnounced = _13_foundNotWhereAnnounced;
      }
      else {
        _10_foundNotWhereAnnounced = _L1228_ifAnnouncedOrABGWasPreviouslyPassed;
        _4_foundNotWhereAnnounced = _10_foundNotWhereAnnounced;
      }
      foundNotWhereAnnounced = _4_foundNotWhereAnnounced;
    }
    *_33_foundNotWhereAnnounced = foundNotWhereAnnounced;
    /* ck_anon_activ */ if (_18_else_clock_ifAnnouncedOrABGWasPreviouslyPassed) {
      _16_noname = _L15_ifAnnouncedOrABGWasPreviouslyPassed;
    }
    else /* ck_anon_activ */ if (else_clock_ifAnnouncedOrABGWasPreviouslyPassed) {
    }
    else {
      noname = _L16_ifAnnouncedOrABGWasPreviouslyPassed;
    }
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(passedPositionedBG, &_L14);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &passedPositionedBG_loc,
    &_L14);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &_L262,
    &passedPositionedBG_loc);
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L264, passedBG);
  kcg_copy_LinkedBGs_T_BG_Types_Pkg(&_L263, &_L264.linkedBGs);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L282, trainProperties);
  /* 1 */
  positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L262,
    &_L263,
    &_L282,
    &_L265);
  kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck(
    linkedBGs,
    &_L265);
  *BGpassedInUnexpectedDirection = BGpassedInUnexpectedDirection_loc;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** passedBG_2_positionedBG_CalculateTrainPosition_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

