/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SwitchModes.h"

#ifndef KCG_USER_DEFINED_INIT
void SwitchModes_init(outC_SwitchModes *outC)
{
  outC->init = kcg_true;
  outC->currentMode = NP_Level_And_Mode_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SwitchModes_reset(outC_SwitchModes *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* SwitchModes */
void SwitchModes(
  /* SwitchModes::Condition1 */ kcg_bool Condition1,
  /* SwitchModes::Condition2 */ kcg_bool Condition2,
  /* SwitchModes::Condition3 */ kcg_bool Condition3,
  /* SwitchModes::Condition4 */ kcg_bool Condition4,
  /* SwitchModes::Condition5 */ kcg_bool Condition5,
  /* SwitchModes::Condition6 */ kcg_bool Condition6,
  /* SwitchModes::Condition7 */ kcg_bool Condition7,
  /* SwitchModes::Condition8 */ kcg_bool Condition8,
  /* SwitchModes::Condition10 */ kcg_bool Condition10,
  /* SwitchModes::Condition13 */ kcg_bool Condition13,
  /* SwitchModes::Condition14 */ kcg_bool Condition14,
  /* SwitchModes::Condition15 */ kcg_bool Condition15,
  /* SwitchModes::Condition19 */ kcg_bool Condition19,
  /* SwitchModes::Condition21 */ kcg_bool Condition21,
  /* SwitchModes::Condition22 */ kcg_bool Condition22,
  /* SwitchModes::Condition23 */ kcg_bool Condition23,
  /* SwitchModes::Condition25 */ kcg_bool Condition25,
  /* SwitchModes::Condition26 */ kcg_bool Condition26,
  /* SwitchModes::Condition27 */ kcg_bool Condition27,
  /* SwitchModes::Condition28 */ kcg_bool Condition28,
  /* SwitchModes::Condition29 */ kcg_bool Condition29,
  /* SwitchModes::Condition30 */ kcg_bool Condition30,
  /* SwitchModes::Condition31 */ kcg_bool Condition31,
  /* SwitchModes::Condition32 */ kcg_bool Condition32,
  /* SwitchModes::Condition34 */ kcg_bool Condition34,
  /* SwitchModes::Condition37 */ kcg_bool Condition37,
  /* SwitchModes::Condition40 */ kcg_bool Condition40,
  /* SwitchModes::Condition44 */ kcg_bool Condition44,
  /* SwitchModes::Condition45 */ kcg_bool Condition45,
  /* SwitchModes::Condition46 */ kcg_bool Condition46,
  /* SwitchModes::Condition47 */ kcg_bool Condition47,
  /* SwitchModes::Condition50 */ kcg_bool Condition50,
  /* SwitchModes::Condition51 */ kcg_bool Condition51,
  /* SwitchModes::Condition56 */ kcg_bool Condition56,
  /* SwitchModes::Condition58 */ kcg_bool Condition58,
  /* SwitchModes::Condition59 */ kcg_bool Condition59,
  /* SwitchModes::Condition60 */ kcg_bool Condition60,
  /* SwitchModes::Condition61 */ kcg_bool Condition61,
  /* SwitchModes::Condition62 */ kcg_bool Condition62,
  /* SwitchModes::Condition63 */ kcg_bool Condition63,
  /* SwitchModes::Condition68 */ kcg_bool Condition68,
  /* SwitchModes::Condition70 */ kcg_bool Condition70,
  /* SwitchModes::Condition71 */ kcg_bool Condition71,
  /* SwitchModes::Condition72 */ kcg_bool Condition72,
  /* SwitchModes::Condition73 */ kcg_bool Condition73,
  /* SwitchModes::Condition74 */ kcg_bool Condition74,
  /* SwitchModes::ConditionTrip */ kcg_bool ConditionTrip,
  outC_SwitchModes *outC)
{
  /* SwitchModes::currentMode */
  static T_Mode_Level_And_Mode_Types_Pkg last_currentMode;
  /* SwitchModes::previousMode_Loc */
  static T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc;
  /* SwitchModes::FromNP */
  static T_Mode_Level_And_Mode_Types_Pkg FromNP;
  /* SwitchModes::FromSB */
  static T_Mode_Level_And_Mode_Types_Pkg FromSB;
  /* SwitchModes::FromPS */
  static T_Mode_Level_And_Mode_Types_Pkg FromPS;
  /* SwitchModes::FromSH */
  static T_Mode_Level_And_Mode_Types_Pkg FromSH;
  /* SwitchModes::FromFS */
  static T_Mode_Level_And_Mode_Types_Pkg FromFS;
  /* SwitchModes::FromLS */
  static T_Mode_Level_And_Mode_Types_Pkg FromLS;
  /* SwitchModes::FromSR */
  static T_Mode_Level_And_Mode_Types_Pkg FromSR;
  /* SwitchModes::FromOS */
  static T_Mode_Level_And_Mode_Types_Pkg FromOS;
  /* SwitchModes::FromSL */
  static T_Mode_Level_And_Mode_Types_Pkg FromSL;
  /* SwitchModes::FromNL */
  static T_Mode_Level_And_Mode_Types_Pkg FromNL;
  /* SwitchModes::FromTR */
  static T_Mode_Level_And_Mode_Types_Pkg FromTR;
  /* SwitchModes::FromPT */
  static T_Mode_Level_And_Mode_Types_Pkg FromPT;
  /* SwitchModes::FromSF */
  static T_Mode_Level_And_Mode_Types_Pkg FromSF;
  /* SwitchModes::FromSN */
  static T_Mode_Level_And_Mode_Types_Pkg FromSN;
  /* SwitchModes::FromRV */
  static T_Mode_Level_And_Mode_Types_Pkg FromRV;
  /* SwitchModes::FromUN */
  static T_Mode_Level_And_Mode_Types_Pkg FromUN;
  /* SwitchModes::_L18 */
  static T_Mode_Level_And_Mode_Types_Pkg _L18;
  /* SwitchModes::_L21 */
  static T_Mode_Level_And_Mode_Types_Pkg _L21;
  /* SwitchModes::_L24 */
  static T_Mode_Level_And_Mode_Types_Pkg _L24;
  /* SwitchModes::_L38 */
  static T_Mode_Level_And_Mode_Types_Pkg _L38;
  /* SwitchModes::_L39 */
  static T_Mode_Level_And_Mode_Types_Pkg _L39;
  /* SwitchModes::_L40 */
  static T_Mode_Level_And_Mode_Types_Pkg _L40;
  /* SwitchModes::_L43 */
  static T_Mode_Level_And_Mode_Types_Pkg _L43;
  /* SwitchModes::_L47 */
  static T_Mode_Level_And_Mode_Types_Pkg _L47;
  /* SwitchModes::_L48 */
  static T_Mode_Level_And_Mode_Types_Pkg _L48;
  /* SwitchModes::_L49 */
  static T_Mode_Level_And_Mode_Types_Pkg _L49;
  /* SwitchModes::_L50 */
  static T_Mode_Level_And_Mode_Types_Pkg _L50;
  /* SwitchModes::_L51 */
  static T_Mode_Level_And_Mode_Types_Pkg _L51;
  /* SwitchModes::_L52 */
  static T_Mode_Level_And_Mode_Types_Pkg _L52;
  /* SwitchModes::_L53 */
  static T_Mode_Level_And_Mode_Types_Pkg _L53;
  /* SwitchModes::_L55 */
  static T_Mode_Level_And_Mode_Types_Pkg _L55;
  /* SwitchModes::_L56 */
  static T_Mode_Level_And_Mode_Types_Pkg _L56;
  /* SwitchModes::_L57 */
  static T_Mode_Level_And_Mode_Types_Pkg _L57;
  /* SwitchModes::_L58 */
  static T_Mode_Level_And_Mode_Types_Pkg _L58;
  /* SwitchModes::_L59 */
  static T_Mode_Level_And_Mode_Types_Pkg _L59;
  /* SwitchModes::_L60 */
  static T_Mode_Level_And_Mode_Types_Pkg _L60;
  /* SwitchModes::_L61 */
  static T_Mode_Level_And_Mode_Types_Pkg _L61;
  /* SwitchModes::_L62 */
  static T_Mode_Level_And_Mode_Types_Pkg _L62;
  /* SwitchModes::_L63 */
  static T_Mode_Level_And_Mode_Types_Pkg _L63;
  /* SwitchModes::_L64 */
  static T_Mode_Level_And_Mode_Types_Pkg _L64;
  /* SwitchModes::_L65 */
  static T_Mode_Level_And_Mode_Types_Pkg _L65;
  /* SwitchModes::_L66 */
  static T_Mode_Level_And_Mode_Types_Pkg _L66;
  /* SwitchModes::_L67 */
  static T_Mode_Level_And_Mode_Types_Pkg _L67;
  /* SwitchModes::_L68 */
  static T_Mode_Level_And_Mode_Types_Pkg _L68;
  /* SwitchModes::_L69 */
  static T_Mode_Level_And_Mode_Types_Pkg _L69;
  /* SwitchModes::_L70 */
  static T_Mode_Level_And_Mode_Types_Pkg _L70;
  /* SwitchModes::_L71 */
  static T_Mode_Level_And_Mode_Types_Pkg _L71;
  /* SwitchModes::_L72 */
  static T_Mode_Level_And_Mode_Types_Pkg _L72;
  /* SwitchModes::_L73 */
  static T_Mode_Level_And_Mode_Types_Pkg _L73;
  /* SwitchModes::_L74 */
  static T_Mode_Level_And_Mode_Types_Pkg _L74;
  /* SwitchModes::_L75 */
  static T_Mode_Level_And_Mode_Types_Pkg _L75;
  /* SwitchModes::_L76 */
  static T_Mode_Level_And_Mode_Types_Pkg _L76;
  /* SwitchModes::_L77 */
  static T_Mode_Level_And_Mode_Types_Pkg _L77;
  /* SwitchModes::_L78 */
  static T_Mode_Level_And_Mode_Types_Pkg _L78;
  /* SwitchModes::_L79 */
  static T_Mode_Level_And_Mode_Types_Pkg _L79;
  /* SwitchModes::_L80 */
  static T_Mode_Level_And_Mode_Types_Pkg _L80;
  /* SwitchModes::_L81 */
  static T_Mode_Level_And_Mode_Types_Pkg _L81;
  /* SwitchModes::_L82 */
  static T_Mode_Level_And_Mode_Types_Pkg _L82;
  /* SwitchModes::_L83 */
  static T_Mode_Level_And_Mode_Types_Pkg _L83;
  /* SwitchModes::_L84 */
  static T_Mode_Level_And_Mode_Types_Pkg _L84;
  /* SwitchModes::_L187 */
  static T_Mode_Level_And_Mode_Types_Pkg _L187;
  /* SwitchModes::_L199 */
  static T_Mode_Level_And_Mode_Types_Pkg _L199;
  /* SwitchModes::_L200 */
  static kcg_bool _L200;
  /* SwitchModes::_L201 */
  static kcg_bool _L201;
  /* SwitchModes::_L202 */
  static kcg_bool _L202;
  /* SwitchModes::_L203 */
  static kcg_bool _L203;
  /* SwitchModes::_L204 */
  static kcg_bool _L204;
  /* SwitchModes::_L205 */
  static kcg_bool _L205;
  /* SwitchModes::_L206 */
  static kcg_bool _L206;
  /* SwitchModes::_L207 */
  static kcg_bool _L207;
  /* SwitchModes::_L208 */
  static kcg_bool _L208;
  /* SwitchModes::_L209 */
  static kcg_bool _L209;
  /* SwitchModes::_L210 */
  static kcg_bool _L210;
  /* SwitchModes::_L211 */
  static kcg_bool _L211;
  /* SwitchModes::_L212 */
  static kcg_bool _L212;
  /* SwitchModes::_L213 */
  static kcg_bool _L213;
  /* SwitchModes::_L214 */
  static kcg_bool _L214;
  /* SwitchModes::_L215 */
  static kcg_bool _L215;
  /* SwitchModes::_L216 */
  static kcg_bool _L216;
  /* SwitchModes::_L218 */
  static kcg_bool _L218;
  /* SwitchModes::_L219 */
  static kcg_bool _L219;
  /* SwitchModes::_L220 */
  static kcg_bool _L220;
  /* SwitchModes::_L221 */
  static kcg_bool _L221;
  /* SwitchModes::_L222 */
  static kcg_bool _L222;
  /* SwitchModes::_L223 */
  static kcg_bool _L223;
  /* SwitchModes::_L224 */
  static kcg_bool _L224;
  /* SwitchModes::_L225 */
  static kcg_bool _L225;
  /* SwitchModes::_L226 */
  static kcg_bool _L226;
  /* SwitchModes::_L227 */
  static kcg_bool _L227;
  /* SwitchModes::_L228 */
  static kcg_bool _L228;
  /* SwitchModes::_L229 */
  static kcg_bool _L229;
  /* SwitchModes::_L230 */
  static kcg_bool _L230;
  /* SwitchModes::_L231 */
  static kcg_bool _L231;
  /* SwitchModes::_L233 */
  static kcg_bool _L233;
  /* SwitchModes::_L234 */
  static kcg_bool _L234;
  /* SwitchModes::_L235 */
  static kcg_bool _L235;
  /* SwitchModes::_L236 */
  static kcg_bool _L236;
  /* SwitchModes::_L241 */
  static T_Mode_Level_And_Mode_Types_Pkg _L241;
  /* SwitchModes::_L242 */
  static T_Mode_Level_And_Mode_Types_Pkg _L242;
  /* SwitchModes::_L243 */
  static T_Mode_Level_And_Mode_Types_Pkg _L243;
  /* SwitchModes::_L244 */
  static kcg_bool _L244;
  /* SwitchModes::_L245 */
  static kcg_bool _L245;
  /* SwitchModes::_L246 */
  static kcg_bool _L246;
  /* SwitchModes::_L247 */
  static kcg_bool _L247;
  /* SwitchModes::_L248 */
  static kcg_bool _L248;
  /* SwitchModes::_L249 */
  static kcg_bool _L249;
  /* SwitchModes::_L250 */
  static kcg_bool _L250;
  /* SwitchModes::_L251 */
  static kcg_bool _L251;
  /* SwitchModes::_L252 */
  static kcg_bool _L252;
  /* SwitchModes::_L253 */
  static kcg_bool _L253;
  /* SwitchModes::_L254 */
  static kcg_bool _L254;
  /* SwitchModes::_L255 */
  static kcg_bool _L255;
  /* SwitchModes::_L256 */
  static kcg_bool _L256;
  /* SwitchModes::_L257 */
  static kcg_bool _L257;
  /* SwitchModes::_L258 */
  static kcg_bool _L258;
  /* SwitchModes::_L259 */
  static kcg_bool _L259;
  /* SwitchModes::_L260 */
  static kcg_bool _L260;
  /* SwitchModes::_L261 */
  static kcg_bool _L261;
  /* SwitchModes::_L262 */
  static kcg_bool _L262;
  /* SwitchModes::_L263 */
  static kcg_bool _L263;
  /* SwitchModes::_L264 */
  static kcg_bool _L264;
  /* SwitchModes::_L265 */
  static kcg_bool _L265;
  /* SwitchModes::_L266 */
  static kcg_bool _L266;
  /* SwitchModes::_L267 */
  static kcg_bool _L267;
  /* SwitchModes::_L268 */
  static kcg_bool _L268;
  /* SwitchModes::_L269 */
  static kcg_bool _L269;
  /* SwitchModes::_L270 */
  static kcg_bool _L270;
  /* SwitchModes::_L271 */
  static kcg_bool _L271;
  /* SwitchModes::_L272 */
  static kcg_bool _L272;
  /* SwitchModes::_L273 */
  static kcg_bool _L273;
  /* SwitchModes::_L274 */
  static kcg_bool _L274;
  /* SwitchModes::_L275 */
  static kcg_bool _L275;
  /* SwitchModes::_L276 */
  static kcg_bool _L276;
  /* SwitchModes::_L277 */
  static kcg_bool _L277;
  /* SwitchModes::_L278 */
  static kcg_bool _L278;
  /* SwitchModes::_L280 */
  static kcg_bool _L280;
  /* SwitchModes::_L281 */
  static kcg_bool _L281;
  /* SwitchModes::_L282 */
  static kcg_bool _L282;
  /* SwitchModes::_L283 */
  static kcg_bool _L283;
  /* SwitchModes::_L284 */
  static kcg_bool _L284;
  /* SwitchModes::_L285 */
  static kcg_bool _L285;
  /* SwitchModes::_L286 */
  static kcg_bool _L286;
  /* SwitchModes::_L287 */
  static kcg_bool _L287;
  /* SwitchModes::_L288 */
  static kcg_bool _L288;
  /* SwitchModes::_L289 */
  static kcg_bool _L289;
  /* SwitchModes::_L290 */
  static kcg_bool _L290;
  /* SwitchModes::_L291 */
  static kcg_bool _L291;
  /* SwitchModes::_L292 */
  static kcg_bool _L292;
  /* SwitchModes::_L293 */
  static kcg_bool _L293;
  /* SwitchModes::_L294 */
  static kcg_bool _L294;
  /* SwitchModes::_L295 */
  static kcg_bool _L295;
  /* SwitchModes::_L296 */
  static kcg_bool _L296;
  /* SwitchModes::_L297 */
  static kcg_bool _L297;
  /* SwitchModes::_L298 */
  static kcg_bool _L298;
  /* SwitchModes::_L299 */
  static kcg_bool _L299;
  /* SwitchModes::_L300 */
  static kcg_bool _L300;
  /* SwitchModes::_L302 */
  static kcg_bool _L302;
  /* SwitchModes::_L303 */
  static kcg_bool _L303;
  /* SwitchModes::_L304 */
  static kcg_bool _L304;
  /* SwitchModes::_L305 */
  static kcg_bool _L305;
  /* SwitchModes::_L306 */
  static kcg_bool _L306;
  /* SwitchModes::_L307 */
  static kcg_bool _L307;
  /* SwitchModes::_L308 */
  static kcg_bool _L308;
  /* SwitchModes::_L309 */
  static kcg_bool _L309;
  /* SwitchModes::_L310 */
  static kcg_bool _L310;
  /* SwitchModes::_L311 */
  static kcg_bool _L311;
  /* SwitchModes::_L312 */
  static kcg_bool _L312;
  /* SwitchModes::_L313 */
  static kcg_bool _L313;
  /* SwitchModes::_L314 */
  static kcg_bool _L314;
  /* SwitchModes::_L315 */
  static kcg_bool _L315;
  /* SwitchModes::_L316 */
  static kcg_bool _L316;
  /* SwitchModes::_L317 */
  static kcg_bool _L317;
  /* SwitchModes::_L318 */
  static kcg_bool _L318;
  /* SwitchModes::_L320 */
  static kcg_bool _L320;
  /* SwitchModes::_L321 */
  static kcg_bool _L321;
  /* SwitchModes::_L322 */
  static kcg_bool _L322;
  /* SwitchModes::_L323 */
  static kcg_bool _L323;
  /* SwitchModes::_L324 */
  static kcg_bool _L324;
  /* SwitchModes::_L325 */
  static kcg_bool _L325;
  /* SwitchModes::_L326 */
  static kcg_bool _L326;
  /* SwitchModes::_L327 */
  static kcg_bool _L327;
  /* SwitchModes::_L328 */
  static kcg_bool _L328;
  /* SwitchModes::_L329 */
  static kcg_bool _L329;
  /* SwitchModes::_L330 */
  static kcg_bool _L330;
  /* SwitchModes::_L331 */
  static kcg_bool _L331;
  /* SwitchModes::_L332 */
  static kcg_bool _L332;
  /* SwitchModes::_L333 */
  static kcg_bool _L333;
  /* SwitchModes::_L334 */
  static kcg_bool _L334;
  /* SwitchModes::_L335 */
  static kcg_bool _L335;
  /* SwitchModes::_L336 */
  static kcg_bool _L336;
  /* SwitchModes::_L337 */
  static kcg_bool _L337;
  /* SwitchModes::_L338 */
  static kcg_bool _L338;
  /* SwitchModes::_L339 */
  static kcg_bool _L339;
  /* SwitchModes::_L340 */
  static kcg_bool _L340;
  /* SwitchModes::_L341 */
  static kcg_bool _L341;
  /* SwitchModes::_L342 */
  static kcg_bool _L342;
  /* SwitchModes::_L343 */
  static kcg_bool _L343;
  /* SwitchModes::_L344 */
  static kcg_bool _L344;
  /* SwitchModes::_L345 */
  static kcg_bool _L345;
  /* SwitchModes::_L346 */
  static kcg_bool _L346;
  /* SwitchModes::_L347 */
  static kcg_bool _L347;
  /* SwitchModes::_L348 */
  static kcg_bool _L348;
  /* SwitchModes::_L349 */
  static kcg_bool _L349;
  /* SwitchModes::_L350 */
  static kcg_bool _L350;
  /* SwitchModes::_L351 */
  static kcg_bool _L351;
  /* SwitchModes::_L352 */
  static kcg_bool _L352;
  /* SwitchModes::_L353 */
  static kcg_bool _L353;
  /* SwitchModes::_L354 */
  static kcg_bool _L354;
  /* SwitchModes::_L356 */
  static T_Mode_Level_And_Mode_Types_Pkg _L356;
  /* SwitchModes::_L357 */
  static kcg_bool _L357;
  /* SwitchModes::_L358 */
  static kcg_bool _L358;
  /* SwitchModes::_L359 */
  static kcg_bool _L359;
  /* SwitchModes::_L360 */
  static kcg_bool _L360;
  /* SwitchModes::_L361 */
  static kcg_bool _L361;
  /* SwitchModes::_L362 */
  static kcg_bool _L362;
  /* SwitchModes::_L363 */
  static kcg_bool _L363;
  /* SwitchModes::_L364 */
  static kcg_bool _L364;
  /* SwitchModes::_L365 */
  static kcg_bool _L365;
  /* SwitchModes::_L366 */
  static kcg_bool _L366;
  /* SwitchModes::_L367 */
  static kcg_bool _L367;
  /* SwitchModes::_L368 */
  static kcg_bool _L368;
  /* SwitchModes::_L370 */
  static kcg_bool _L370;
  /* SwitchModes::_L371 */
  static kcg_bool _L371;
  /* SwitchModes::_L372 */
  static kcg_bool _L372;
  /* SwitchModes::_L373 */
  static kcg_bool _L373;
  /* SwitchModes::_L374 */
  static kcg_bool _L374;
  /* SwitchModes::_L375 */
  static kcg_bool _L375;
  /* SwitchModes::_L376 */
  static kcg_bool _L376;
  
  /* last_init_ck_currentMode */ if (outC->init) {
    last_currentMode = SB_Level_And_Mode_Types_Pkg;
  }
  else {
    last_currentMode = outC->currentMode;
  }
  previousMode_Loc = last_currentMode;
  _L200 = Condition1;
  _L201 = Condition4;
  _L80 = previousMode_Loc;
  _L21 = /* 1 */ From_NP_PriorityManagement(_L200, _L201, _L80);
  FromNP = _L21;
  _L58 = FromNP;
  _L202 = Condition1;
  _L203 = Condition5;
  _L204 = Condition6;
  _L205 = Condition8;
  _L206 = Condition10;
  _L207 = Condition13;
  _L208 = Condition14;
  _L209 = Condition15;
  _L210 = Condition29;
  _L211 = Condition37;
  _L212 = Condition46;
  _L214 = Condition50;
  _L213 = Condition58;
  _L215 = Condition60;
  _L216 = Condition70;
  _L370 = ConditionTrip;
  _L81 = previousMode_Loc;
  _L24 = /* 1 */
    From_SB_PriorityManagement(
      _L202,
      _L203,
      _L204,
      _L205,
      _L206,
      _L207,
      _L208,
      _L209,
      _L210,
      _L211,
      _L212,
      _L214,
      _L213,
      _L215,
      _L216,
      _L370,
      _L81);
  FromSB = _L24;
  _L63 = FromSB;
  _L218 = Condition1;
  _L219 = Condition13;
  _L220 = Condition14;
  _L221 = Condition22;
  _L222 = Condition23;
  _L223 = Condition29;
  _L82 = previousMode_Loc;
  _L39 = /* 1 */
    From_PS_PriorityManagement(_L218, _L219, _L220, _L221, _L222, _L223, _L82);
  FromPS = _L39;
  _L60 = FromPS;
  _L224 = Condition1;
  _L225 = Condition13;
  _L226 = Condition19;
  _L227 = Condition26;
  _L228 = Condition27;
  _L229 = Condition29;
  _L230 = Condition30;
  _L231 = Condition46;
  _L371 = ConditionTrip;
  _L83 = previousMode_Loc;
  _L40 = /* 1 */
    From_SH_PriorityManagement(
      _L224,
      _L225,
      _L226,
      _L227,
      _L228,
      _L229,
      _L230,
      _L231,
      _L371,
      _L83);
  FromSH = _L40;
  _L65 = FromSH;
  _L244 = Condition1;
  _L245 = Condition5;
  _L246 = Condition6;
  _L247 = Condition13;
  _L248 = Condition15;
  _L249 = Condition21;
  _L250 = Condition28;
  _L251 = Condition29;
  _L252 = Condition37;
  _L253 = Condition40;
  _L254 = Condition46;
  _L255 = Condition50;
  _L256 = Condition51;
  _L257 = Condition56;
  _L258 = Condition59;
  _L259 = Condition70;
  _L260 = Condition72;
  _L261 = ConditionTrip;
  _L84 = previousMode_Loc;
  _L43 = /* 1 */
    From_FS_PriorityManagement(
      _L244,
      _L245,
      _L246,
      _L247,
      _L248,
      _L249,
      _L250,
      _L251,
      _L252,
      _L253,
      _L254,
      _L255,
      _L256,
      _L257,
      _L258,
      _L259,
      _L260,
      _L261,
      _L84);
  FromFS = _L43;
  _L55 = FromFS;
  _L262 = Condition1;
  _L263 = Condition5;
  _L264 = Condition6;
  _L265 = Condition13;
  _L266 = Condition15;
  _L267 = Condition21;
  _L268 = Condition28;
  _L269 = Condition29;
  _L270 = Condition31;
  _L271 = Condition32;
  _L272 = Condition37;
  _L273 = Condition46;
  _L274 = Condition50;
  _L275 = Condition51;
  _L276 = Condition56;
  _L277 = Condition59;
  _L278 = Condition73;
  _L372 = ConditionTrip;
  _L79 = previousMode_Loc;
  _L241 = /* 1 */
    From_LS_PriorityManagement(
      _L262,
      _L263,
      _L264,
      _L265,
      _L266,
      _L267,
      _L268,
      _L269,
      _L270,
      _L271,
      _L272,
      _L273,
      _L274,
      _L275,
      _L276,
      _L277,
      _L278,
      _L372,
      _L79);
  FromLS = _L241;
  _L56 = FromLS;
  _L286 = Condition1;
  _L287 = Condition5;
  _L288 = Condition6;
  _L289 = Condition13;
  _L290 = Condition21;
  _L291 = Condition28;
  _L292 = Condition29;
  _L298 = Condition31;
  _L299 = Condition32;
  _L293 = Condition40;
  _L294 = Condition46;
  _L295 = Condition51;
  _L296 = Condition56;
  _L297 = Condition59;
  _L300 = Condition72;
  _L375 = ConditionTrip;
  _L78 = previousMode_Loc;
  _L243 = /* 1 */
    From_SR_PriorityManagement(
      _L286,
      _L287,
      _L288,
      _L289,
      _L290,
      _L291,
      _L292,
      _L298,
      _L299,
      _L293,
      _L294,
      _L295,
      _L296,
      _L297,
      _L300,
      _L375,
      _L78);
  FromSR = _L243;
  _L69 = FromSR;
  _L302 = Condition1;
  _L303 = Condition5;
  _L304 = Condition6;
  _L305 = Condition13;
  _L306 = Condition21;
  _L307 = Condition28;
  _L308 = Condition29;
  _L309 = Condition31;
  _L310 = Condition32;
  _L311 = Condition37;
  _L312 = Condition46;
  _L313 = Condition50;
  _L314 = Condition51;
  _L315 = Condition56;
  _L316 = Condition59;
  _L317 = Condition70;
  _L318 = Condition74;
  _L373 = ConditionTrip;
  _L77 = previousMode_Loc;
  _L242 = /* 1 */
    From_OS_PriorityManagement(
      _L302,
      _L303,
      _L304,
      _L305,
      _L306,
      _L307,
      _L308,
      _L309,
      _L310,
      _L311,
      _L312,
      _L313,
      _L314,
      _L315,
      _L316,
      _L317,
      _L318,
      _L373,
      _L77);
  FromOS = _L242;
  _L59 = FromOS;
  _L320 = Condition1;
  _L321 = Condition2;
  _L322 = Condition3;
  _L323 = Condition29;
  _L76 = previousMode_Loc;
  _L47 = /* 1 */ From_SL_PriorityManagement(_L320, _L321, _L322, _L323, _L76);
  FromSL = _L47;
  _L66 = FromSL;
  _L280 = Condition1;
  _L281 = Condition28;
  _L282 = Condition29;
  _L283 = Condition47;
  _L75 = previousMode_Loc;
  _L48 = /* 1 */ From_NL_PriorityManagement(_L280, _L281, _L282, _L283, _L75);
  FromNL = _L48;
  _L57 = FromNL;
  _L324 = Condition1;
  _L325 = Condition7;
  _L326 = Condition13;
  _L327 = Condition29;
  _L328 = Condition62;
  _L329 = Condition63;
  _L330 = Condition68;
  _L70 = previousMode_Loc;
  _L49 = /* 1 */
    From_TR_PriorityManagement(
      _L324,
      _L325,
      _L326,
      _L327,
      _L328,
      _L329,
      _L330,
      _L70);
  FromTR = _L49;
  _L68 = FromTR;
  _L331 = Condition1;
  _L332 = Condition5;
  _L333 = Condition6;
  _L334 = Condition8;
  _L335 = Condition13;
  _L336 = Condition15;
  _L337 = Condition28;
  _L338 = Condition29;
  _L339 = Condition31;
  _L340 = Condition37;
  _L341 = Condition50;
  _L342 = Condition70;
  _L71 = previousMode_Loc;
  _L50 = /* 1 */
    From_PT_PriorityManagement(
      _L331,
      _L332,
      _L333,
      _L334,
      _L335,
      _L336,
      _L337,
      _L338,
      _L339,
      _L340,
      _L341,
      _L342,
      _L71);
  FromPT = _L50;
  _L61 = FromPT;
  _L284 = Condition1;
  _L285 = Condition29;
  _L72 = previousMode_Loc;
  _L51 = /* 1 */ From_SF_PriorityManagement(_L284, _L285, _L72);
  FromSF = _L51;
  _L64 = FromSF;
  _L38 = IS_Level_And_Mode_Types_Pkg;
  _L343 = Condition1;
  _L344 = Condition5;
  _L345 = Condition13;
  _L346 = Condition21;
  _L347 = Condition25;
  _L348 = Condition28;
  _L349 = Condition29;
  _L350 = Condition34;
  _L351 = Condition44;
  _L352 = Condition45;
  _L353 = Condition61;
  _L354 = Condition71;
  _L374 = ConditionTrip;
  _L73 = previousMode_Loc;
  _L52 = /* 1 */
    From_SN_PriorityManagement(
      _L343,
      _L344,
      _L345,
      _L346,
      _L347,
      _L348,
      _L349,
      _L350,
      _L351,
      _L352,
      _L353,
      _L354,
      _L374,
      _L73);
  FromSN = _L52;
  _L67 = FromSN;
  _L233 = Condition1;
  _L234 = Condition13;
  _L235 = Condition28;
  _L236 = Condition29;
  _L74 = previousMode_Loc;
  _L53 = /* 1 */ From_RV_PriorityManagement(_L233, _L234, _L235, _L236, _L74);
  FromRV = _L53;
  _L62 = FromRV;
  _L357 = Condition1;
  _L358 = Condition5;
  _L359 = Condition13;
  _L360 = Condition25;
  _L361 = Condition28;
  _L362 = Condition29;
  _L363 = Condition34;
  _L364 = Condition44;
  _L365 = Condition45;
  _L366 = Condition56;
  _L367 = Condition61;
  _L368 = Condition71;
  _L376 = ConditionTrip;
  _L187 = previousMode_Loc;
  _L356 = /* 1 */
    From_UN_PriorityManagement(
      _L357,
      _L358,
      _L359,
      _L360,
      _L361,
      _L362,
      _L363,
      _L364,
      _L365,
      _L366,
      _L367,
      _L368,
      _L376,
      _L187);
  FromUN = _L356;
  _L199 = FromUN;
  switch (previousMode_Loc) {
    case NP_Level_And_Mode_Types_Pkg :
      _L18 = _L58;
      break;
    case SB_Level_And_Mode_Types_Pkg :
      _L18 = _L63;
      break;
    case PS_Level_And_Mode_Types_Pkg :
      _L18 = _L60;
      break;
    case SH_Level_And_Mode_Types_Pkg :
      _L18 = _L65;
      break;
    case FS_Level_And_Mode_Types_Pkg :
      _L18 = _L55;
      break;
    case LS_Level_And_Mode_Types_Pkg :
      _L18 = _L56;
      break;
    case SR_Level_And_Mode_Types_Pkg :
      _L18 = _L69;
      break;
    case OS_Level_And_Mode_Types_Pkg :
      _L18 = _L59;
      break;
    case SL_Level_And_Mode_Types_Pkg :
      _L18 = _L66;
      break;
    case NL_Level_And_Mode_Types_Pkg :
      _L18 = _L57;
      break;
    case TR_Level_And_Mode_Types_Pkg :
      _L18 = _L68;
      break;
    case PT_Level_And_Mode_Types_Pkg :
      _L18 = _L61;
      break;
    case SF_Level_And_Mode_Types_Pkg :
      _L18 = _L64;
      break;
    case IS_Level_And_Mode_Types_Pkg :
      _L18 = _L38;
      break;
    case SN_Level_And_Mode_Types_Pkg :
      _L18 = _L67;
      break;
    case RV_Level_And_Mode_Types_Pkg :
      _L18 = _L62;
      break;
    case UN_Level_And_Mode_Types_Pkg :
      _L18 = _L199;
      break;
    
  }
  outC->currentMode = _L18;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SwitchModes.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

