//     Project: openETCS libenvsim
//      Module: scade / scade_probe.c
// Description: implementation of the init and cycle functions for the SCADE ProbeXXX operators
//
// History:
// - 28.10.15, J. Kastner: initial version
// - 30.10.15, J. Kastner: add handling of train messages to trackside_cycle()

#include <stdio.h>
#include "../tcp.h"
#include "ProbeTracksideInput_EnvSim.h"
#include "ProbeSDM_EnvSim.h"
#include "ProbeEVC_EnvSim.h"

typedef struct {
  kcg_bool valid;
  kcg_real dist;
  kcg_real acc;
  kcg_real speed;
} es_scade_probe_CurveSeg;


typedef struct {
  es_scade_probe_CurveSeg eoa_sbd[2];
} es_scade_probe_BrakingCurves;


const size_t PROBE_TRACKSIDE_BMSG_SIZE = sizeof(CompressedBaliseMessage_TM);
const size_t PROBE_TRACKSIDE_RMSG_SIZE = sizeof(CompressedRadioMessage_TM);
const size_t PROBE_TRACKSIDE_TMSG_SIZE = sizeof(M_TrainTrack_Message_T_TM_radio_messages);
const size_t PROBE_SDM_TARGET_SIZE = sizeof(Target_T_TargetManagement_types);
const size_t PROBE_EVC_MORC_REG_SIZE = sizeof(mobileRegistrationContext_T_RCM_Types_Pkg);
const size_t PROBE_EVC_MORC_CON_SIZE = sizeof(mobileConnectionContext_T_RCM_Types_Pkg);
const size_t PROBE_EVC_MORC_SES_SIZE = sizeof(sessionStatus_T_RCM_Session_Types_Pkg);
const size_t PROBE_EVT_BC_SIZE = sizeof(es_scade_probe_BrakingCurves);


// If not NULL, send all events (track messages, train messages) to this stream
es_TCPStream *scade_probe_evtstream = NULL;

void es_scade_probe_trackside_init(outC_ProbeTracksideInput_EnvSim *outC) {

}

void es_scade_probe_trackside_cycle(double currentPosition,
                                    CompressedBaliseMessage_TM* bm,
                                    CompressedRadioMessage_TM* rm,
                                    M_TrainTrack_Message_T_TM_radio_messages *tm,
                                    outC_ProbeTracksideInput_EnvSim* out) {
  static int last_nid_bg = 0;
  static int last_n_pig = 0;
  //static char hexdata[10000];
  if(scade_probe_evtstream != NULL && scade_probe_evtstream->client != INVALID_SOCKET) {
    if(bm->Header.nid_c > 0 && !(bm->Header.nid_bg==last_nid_bg && bm->Header.n_pig==last_n_pig)) {
      last_nid_bg = bm->Header.nid_bg;
      last_n_pig = bm->Header.n_pig;
      int len = 8 + PROBE_TRACKSIDE_BMSG_SIZE;
      char buf[len];
      memcpy(buf,&currentPosition,8);
      memcpy(buf+8,bm,PROBE_TRACKSIDE_BMSG_SIZE);
      es_tcp_send(scade_probe_evtstream,TCPMSG_ES_EVT_BMSG,buf,len);
    }
    if(rm->Header.nid_message > 0) {
      int len = 8 + PROBE_TRACKSIDE_RMSG_SIZE;
      char buf[len];
      memcpy(buf,&currentPosition,8);
      memcpy(buf+8,rm,PROBE_TRACKSIDE_RMSG_SIZE);
      es_tcp_send(scade_probe_evtstream,TCPMSG_ES_EVT_RMSG,buf,len);
    }
    if(tm->Message.valid || tm->Message.nid_message > 0) {
      int len = 8 + PROBE_TRACKSIDE_TMSG_SIZE;
      char buf[len];
      memcpy(buf,&currentPosition,8);
      memcpy(buf+8,tm,PROBE_TRACKSIDE_TMSG_SIZE);
      es_tcp_send(scade_probe_evtstream,TCPMSG_ES_EVT_TMSG,buf,len);
    }
  }
}


void es_scade_probe_sdm_init(outC_ProbeSDM_EnvSim *outC) {

}


void es_scade_probe_curves(CurveCollection_T_CalcBrakingCurves_types *curves) {
  static int cycle = 0;
  static es_scade_probe_BrakingCurves data;

  if( cycle % 10 == 0 ) {
    char buf[4000];
    int rest = 4000;
    char *p = buf;
    int i, len;

    ParabolaCurve_T_CalcBrakingCurves_types *c = &curves->EOA_SBD_curve;

    len = snprintf(p,rest,"{eoasbd ");
    rest -= len;
    p += len;

    kcg_real last_dist = -1;
    for(i=0; i<10; i++) {
      if( c->valid[i] ) {
        len = snprintf(p,rest,"{%f %f %f} ", c->distances[i], c->accelerations[i], c->speeds[i]);
        rest -= len;
        p += len;
      }

    }
    snprintf(p,rest,"}");

    es_tcp_send(scade_probe_evtstream,TCPMSG_ES_EVT_BC,(char*)buf,strlen(buf));
  }


  cycle++;
}

void es_scade_probe_sdm_cycle(TargetCollection_T_TargetManagement_types *targetCollection,
                              CurveCollection_T_CalcBrakingCurves_types *curveCollection,
                              Target_T_TargetManagement_types *target,
                              outC_ProbeSDM_EnvSim *outC) {
  static Target_real_T_TargetManagement_types last_target;

  if( scade_probe_evtstream==NULL || scade_probe_evtstream->client == INVALID_SOCKET ) {
    return;
  }

  if(target->valid) {
    if( memcmp(&last_target,target,PROBE_SDM_TARGET_SIZE) ) {
      memcpy(&last_target,target,PROBE_SDM_TARGET_SIZE);
      es_tcp_send(scade_probe_evtstream,TCPMSG_ES_EVT_TGT,(char*)target,PROBE_SDM_TARGET_SIZE);
    }
  }

//  es_scade_probe_curves(curveCollection);

}


void es_scade_probe_evc_init(outC_ProbeEVC_EnvSim *outC) {

}

#define SEND_POSITION_ERROR(type,bg) {\
  char buf[200]; \
  if(bg.valid) {\
    snprintf(buf,200,"Position Error: %s  (BG: %d)",type,bg.nid_bg); \
  }\
  else { \
    snprintf(buf,200,"Position Error: %s",type); \
  }\
  es_tcp_send(scade_probe_evtstream,TCPMSG_ES_EVT_ERR,buf,strlen(buf)); \
}

void es_scade_probe_evc_cycle(MSG_Errors_T_Common_Types_Pkg *msgErrors,
                              positionErrors_T_TrainPosition_Types_Pck *posErrors,
                              morcStatus_T_RCM_Session_Types_Pkg *morcStatus,
                              outC_ProbeEVC_EnvSim *outC) {
  static mobileRegistrationContext_T_RCM_Types_Pkg lastMorcReg;
  static mobileConnectionContext_T_RCM_Types_Pkg lastMorcCon;
  static sessionStatus_T_RCM_Session_Types_Pkg lastMorcSess;

  if( scade_probe_evtstream==NULL || scade_probe_evtstream->client == INVALID_SOCKET ) {
    return;
  }

  if( msgErrors->BG_versionIncompatible ||
      msgErrors->linkedBGError ||
      msgErrors->otherTimingError ||
      msgErrors->radioMessageConsistencyError ||
      msgErrors->radioSequenceError ||
      msgErrors->tNvContactError ||
      msgErrors->unlinkedBGError) {
//    printf("MSG Error: incompatible: %d  link: %d  timing: %d  consistency: %d  sequence: %d  contact: %d  unlinked: %d\n",
//       msgErrors->BG_versionIncompatible ,
//      msgErrors->linkedBGError ,
//      msgErrors->otherTimingError ,
//      msgErrors->radioMessageConsistencyError ,
//      msgErrors->radioSequenceError ,
//      msgErrors->tNvContactError ,
//      msgErrors->unlinkedBGError
//    );
  }

  if( posErrors->linkedBGMissed ) {
    SEND_POSITION_ERROR("linkedBGMissed",posErrors->bg);
  }
  if( posErrors->doubleRepositioningError ) {
    SEND_POSITION_ERROR("doubleRepositioningError",posErrors->bg);
  }
  if( posErrors->outOfMemSpace ) {
    SEND_POSITION_ERROR("outOfMemSpace",posErrors->bg);
  }
  if( posErrors->BGpassedInUnexpectedDirection ) {
    SEND_POSITION_ERROR("BGpassedInUnexpectedDirection",posErrors->bg);
  }
  if( posErrors->passedBG_foundNotWhereExpected ) {
    SEND_POSITION_ERROR("passedBG_foundNotWhereExpected",posErrors->bg);
  }
  if( posErrors->positionCalculation_inconsistent ) {
    SEND_POSITION_ERROR("positionCalculation_inconsistent",posErrors->bg);
  }
  if( posErrors->twoConsecutiveLinkedBGs_missed ) {
    SEND_POSITION_ERROR("twoConsecutiveLinkedBGs_missed",posErrors->bg);
  }


  if( morcStatus->registration.valid && memcmp(&lastMorcReg,&morcStatus->registration,PROBE_EVC_MORC_REG_SIZE) ) {
    char buf[200];
    memcpy(&lastMorcReg,&morcStatus->registration,PROBE_EVC_MORC_REG_SIZE);
    int len = snprintf(buf,200,"Registration status: %d  healthStatus: %d  nid_mn: %d  mobileDeviceNo: %d",
                       lastMorcReg.status,
                       lastMorcReg.healthStatus,
                       lastMorcReg.nid_mn,
                       lastMorcReg.mobileDeviceNo);
    es_tcp_send(scade_probe_evtstream,TCPMSG_ES_EVT_MORC,buf,len);
  }

  if( morcStatus->connection.valid && memcmp(&lastMorcCon,&morcStatus->connection,PROBE_EVC_MORC_CON_SIZE) ) {
    char buf[200];
    memcpy(&lastMorcCon,&morcStatus->connection,PROBE_EVC_MORC_CON_SIZE);
    int len = snprintf(buf,200,"Connection status: %d  mobileDeviceNo: %d  nid_radio: %d  connectionLost: %d  isInRadioHole: %d  settingUpConnectionHasFailed: %d",
                       lastMorcCon.status,
                       lastMorcCon.mobileDeviceNo,
                       lastMorcCon.nid_radio,
                       lastMorcCon.connectionLost,
                       lastMorcCon.isInRadioHole,
                       lastMorcCon.settingUpConnectionHasFailed);
    es_tcp_send(scade_probe_evtstream,TCPMSG_ES_EVT_MORC,buf,len);
  }

  if( morcStatus->session.valid && memcmp(&lastMorcSess,&morcStatus->session,PROBE_EVC_MORC_SES_SIZE) ) {
    char buf[200];
    memcpy(&lastMorcSess,&morcStatus->session,PROBE_EVC_MORC_SES_SIZE);
    int len = snprintf(buf,200,"Session phase: %d  nid_radio: %d  nid_rbc: %d  nid_c: %d",
                       lastMorcSess.phase,
                       lastMorcSess.nid_radio,
                       lastMorcSess.nid_rbc,
                       lastMorcSess.nid_c );
    es_tcp_send(scade_probe_evtstream,TCPMSG_ES_EVT_MORC,buf,len);
  }
}
