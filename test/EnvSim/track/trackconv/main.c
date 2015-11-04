#include <stdio.h>
#include "envsim.h"
#include "TriggerMessages.h"

#define STARTPOS 0.0
//#define STARTPOS 33000.0
//#define ENDPOS   3000.0
#define ENDPOS   40000.0
#define DELTAPOS 0.1

inC_TriggerMessages inC;
outC_TriggerMessages outC;

const size_t bmsize = sizeof(CompressedBaliseMessage_TM);
const size_t rmsize = sizeof(CompressedRadioMessage_TM);
const size_t bufsize = rmsize>bmsize ? rmsize : bmsize;
char hexbuf[bufsize*2+1];
CompressedBaliseMessage_TM m2;

int calcTriggerId(double curPos, int lrbg, double lrbgPos) {
  double delta = curPos - lrbgPos;
  //printf("%.1f\n",delta);
  return lrbg * 1000000 + (int)(delta*10);
}


int main() {
  double pos = STARTPOS;
  int last_nid_bg = 0;
  int last_n_pig = 0;
  double last_bg_pos = 0.0;

  int *cur_nid_bg = &outC.BaliseMessage.Header.nid_bg;
  int *cur_n_pig = &outC.BaliseMessage.Header.n_pig;
  int *cur_nid_message = &outC.Compressed_Radio_Message_out.Header.nid_message;

  while(pos<=ENDPOS) {
    inC.TrainPos = pos;
    inC.Trigger_in = calcTriggerId(pos,last_nid_bg,last_bg_pos);
    TriggerMessages(&inC, &outC);

    // write balise message
    if(*cur_nid_bg!=0 && (*cur_nid_bg!=last_nid_bg || *cur_n_pig!=last_n_pig)) {
      last_nid_bg = *cur_nid_bg;
      last_n_pig = *cur_n_pig;
      last_bg_pos = pos;
      es_bytes_to_hex(bmsize,(char*)&outC.BaliseMessage,hexbuf);
      printf("track::balise raw %s\n",hexbuf);
      printf("track::add balise %f\n",pos);
      //printf("pos: %f,  nid_bg: %d\n",pos,*cur_nid_bg);
      //printf("%s\n",hexbuf);
      //es_hex_to_bytes(bmsize,hexbuf,(char*)&m2);
      //printf("%d\n",m2.Header.nid_bg);
    }

    // write radio message
    if(*cur_nid_message!=0) {
      //printf("pos: %.1f,  lrbg: %d,  msg: %d\n",pos,last_nid_bg,*cur_nid_message);
      es_bytes_to_hex(rmsize,(char*)&outC.Compressed_Radio_Message_out,hexbuf);
      printf("track::radio raw %s\n",hexbuf);
      printf("track::add radio %f\n",pos);
    }
    
    pos += DELTAPOS;
  }
  return 0;
}

