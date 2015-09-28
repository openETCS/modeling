//     Project: openETCS libenvsim
//      Module: logging.h
// Description: Provides the global logging facility
//
// History:
// - 26.09.15, J. Kastner: initial version

#ifndef LIBENVSIM_LOGGING_H
#define LIBENVSIM_LOGGING_H

#define LOG_TRACE(src,...) if(es_current_loglevel>=ES_LOG_TRACE) es_log(ES_LOG_TRACE,__VA_ARGS__);
#define LOG_INFO(src,...) if(es_current_loglevel>=ES_LOG_INFO) es_log(ES_LOG_INFO,__VA_ARGS__);
#define LOG_WARN(src,...) if(es_current_loglevel>=ES_LOG_WARN) es_log(ES_LOG_WARN,__VA_ARGS__);
#define LOG_ERROR(src,...) es_log(ES_LOG_ERROR,__VA_ARGS__);

typedef enum {
  ES_LOG_ERROR,
  ES_LOG_WARN,
  ES_LOG_INFO,
  ES_LOG_TRACE,
} es_LogLevel;

extern es_LogLevel es_current_loglevel;

void es_log(es_LogLevel lvl, char* msg, ...);

void es_log_init(char *logfile);

void es_log_exit();

#endif //LIBENVSIM_LOGGING_H
