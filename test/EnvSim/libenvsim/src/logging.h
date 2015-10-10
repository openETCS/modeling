//     Project: openETCS libenvsim
//      Module: logging.h
// Description: Provides the global logging facility
//
// History:
// - 26.09.15, J. Kastner: initial version
// - 10.10.15, J. Kastner: use environment variable OPENETCS_ENVSIM_LOGDIR instead of OPENETCS_ENVSIM_LOGFILE

#ifndef LIBENVSIM_LOGGING_H
#define LIBENVSIM_LOGGING_H

#define LOG_TRACE(src,...) if(es_current_loglevel>=ES_LOG_TRACE) es_log(ES_LOG_TRACE,#src,__VA_ARGS__);
#define LOG_INFO(src,...) if(es_current_loglevel>=ES_LOG_INFO) es_log(ES_LOG_INFO,#src,__VA_ARGS__);
#define LOG_WARN(src,...) if(es_current_loglevel>=ES_LOG_WARN) es_log(ES_LOG_WARN,#src,__VA_ARGS__);
#define LOG_ERROR(src,...) es_log(ES_LOG_ERROR,#src,__VA_ARGS__);

typedef enum {
  ES_LOG_ERROR,
  ES_LOG_WARN,
  ES_LOG_INFO,
  ES_LOG_TRACE,
} es_LogLevel;

// Currently active log level; only messages with a level less than the current log level
// are printed to the logging facility.
extern es_LogLevel es_current_loglevel;

// Writes a log message; use the LOG_XXX macros for convenience.
//
// @param lvl log level (one of ES_LOG_ERROR, ES_LOG_WARN, ES_LOG_INFO, ES_LOG_TRACE)
// @param src a marker identifying the source of the log message
// @param msg log message format string (with optional value arguments)
void es_log(es_LogLevel lvl, char* src, char* msg, ...);

// Initialize the logging facility.
// If logfile==NULL, or the environment variable OPENETCS_ENVSIM_LOGDIR is undefined,
// all log messages are printed to stdout. Otherwise log messages are written to the
// specified logfile, which is prefixed by the path specified by OPENETCS_ENVSIM_LOGDIR.
//
// @param logfile name of the logfile
void es_log_init(char *logfile);

void es_log_exit();

#endif //LIBENVSIM_LOGGING_H
