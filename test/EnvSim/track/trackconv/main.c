#include <stdio.h>
#include <unistd.h>
#include "envsim.h"
#include "TriggerMessages.h"

#define STARTPOS 0.0
//#define STARTPOS 33000.0
//#define ENDPOS   3000.0
#define ENDPOS   40000.0
#define DELTAPOS 0.1

double startpos = STARTPOS;
double endpos = ENDPOS;
double deltapos = DELTAPOS;

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

void usage() {
  printf("USAGE: trackconv [-t TRACK] [-s STARTPOS] [-e ENDPOS]\n");
  exit(1);
}

void parseArgs(int argc, char *argv[]) {
  int ch;

  // set default track
  inC.track = US_01_to_12_US_Integration_November;

  while( (ch=getopt(argc,argv,"e:s:t:")) != -1 ) {
    switch (ch) {
      case 'e':
        endpos = atof(optarg);
        break;
      case 's':
        startpos = atof(optarg);
        break;
      case 't':
        if( !strcmp("US_01_to_12",optarg) ) {
          inC.track = US_01_to_12_US_Integration_November;
        }
        else if( !strcmp("US_13_to_16",optarg) ) {
          inC.track = US_13_to_16_US_Integration_November;
        }
        else if( !strcmp("Sheet14_only",optarg) ) {
          inC.track = Sheet14_only_US_Integration_November;
        }
        else {
          printf("Unknown track: %s\n",optarg);
          printf("supported tracks: US_01_to_12, US_13_to_16, Sheet14_only\n");
          exit(1);
        }
        break;
      default:
        usage();
    }
  }
  argc -= optind;
  argv += optind;
}

int main(int argc, char *argv[]) {
  parseArgs(argc,argv);

  double pos = startpos;
  int last_nid_bg = 0;
  int last_n_pig = 0;
  double last_bg_pos = 0.0;

  int *cur_nid_bg = &outC.BaliseMessage.Header.nid_bg;
  int *cur_n_pig = &outC.BaliseMessage.Header.n_pig;
  int *cur_nid_message = &outC.Compressed_Radio_Message_out.Header.nid_message;

  while(pos <= endpos) {
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
    }

    // write radio message
    if(*cur_nid_message!=0) {
      es_bytes_to_hex(rmsize,(char*)&outC.Compressed_Radio_Message_out,hexbuf);
      printf("track::radio raw %s\n",hexbuf);
      printf("track::add radio %f\n",pos);
    }
    
    pos += deltapos;
  }
  return 0;
}

