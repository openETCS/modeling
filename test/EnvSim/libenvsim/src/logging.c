//     Project: openETCS libenvsim
//      Module: logging.c
// Description: Provides the global logging facility
//
// History:
// - 26.09.15, J. Kastner: initial version
// - 05.11.15, J. Kastner: implement logging of version info; rename OPENETCS_ENVSIM_LOGDIR to ENVSIM_LOGDIR

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <time.h>
#include "logging.h"
#include "utils.h"

void (*es_log_write)(char*) = NULL;
FILE *es_logfile = NULL;

#define LOG_MSG_SIZE 500
#define LOG_BUF_SIZE LOG_MSG_SIZE+50
char es_logmsg[LOG_MSG_SIZE];
char es_logbuf[LOG_BUF_SIZE];

es_LogLevel es_current_loglevel = ES_LOG_INFO;

void es_log_write_to_file(char *msg) {
  if(es_logfile==NULL) return;
  fprintf(es_logfile,"%s" NEWLINE,msg);
  fflush(es_logfile);
}

void es_log_write_to_stdout(char *msg) {
  printf("%s" NEWLINE,msg);
}


void es_log_exit() {
  if (es_logfile != NULL) {
    fclose(es_logfile);
    es_logfile = NULL;
  }
}


void es_log_init(char *logfile) {
  if(es_log_write!=NULL) {
    return;
  }

  if(logfile==NULL) {
    es_log_write = es_log_write_to_stdout;
    goto finish;
  }

  char *logdir = getenv("ENVSIM_LOGDIR");
  if( logdir==NULL ) {
    es_log_write = es_log_write_to_stdout;
    goto finish;
  }

  char buf[256];
  if( snprintf(buf,256,"%s/%s",logdir,logfile) >= 256 ) {
    perror("path to log file too long! writing log messages to stdout");
    es_log_write = es_log_write_to_stdout;
    goto finish;
  }

  es_logfile = fopen(buf,"w");
  if(es_logfile==NULL) {
    perror("opening logfile");
  }
  es_log_write = es_log_write_to_file;

finish:
  atexit(es_log_exit);
  es_log_write("*** openETCS libenvsim V" PROJECT_VERSION " (" PROJECT_BUILD ") ***");
};


void es_log(es_LogLevel lvl, char* src, char* msg , ...) {
  if(es_log_write==NULL) return;

  // format log message
  va_list argptr;
  va_start(argptr,msg);
  vsnprintf(es_logmsg,LOG_MSG_SIZE,msg,argptr);
  va_end(argptr);
  // add timestamp & level
  //time_t *tstamp;
  //time(tstamp);
  char *lvlstring = lvl==ES_LOG_TRACE ? "TRACE" : (lvl==ES_LOG_INFO ? "INFO" : (lvl==ES_LOG_WARN ? "WARN" : "ERROR"));
  //snprintf(es_logbuf,LOG_BUF_SIZE,"%s, %s: %s",ctime(tstamp),lvlstring,msgbuf);
  snprintf(es_logbuf,LOG_BUF_SIZE,"%s, %s, %s: %s",es_timestamp(),src,lvlstring,es_logmsg);

  es_log_write(es_logbuf);
}

