/*
 * slog.h
 *
 *  Created on: Jun 9, 2018
 *      Author: pchero
 */

#ifndef SLOG_H_
#define SLOG_H_

#include <stdbool.h>
#include <syslog.h>

#define LOG_EMERG 0   /* system is unusable */
#define LOG_ALERT 1   /* action must be taken immediately */
#define LOG_CRIT  2   /* critical conditions */
#define LOG_ERR   3   /* error conditions */
#define LOG_WARNING 4 /* warning conditions */
#define LOG_NOTICE  5 /* normal but significant condition */
#define LOG_INFO  6   /* informational */
#define LOG_DEBUG 7   /* debug-level messages */
#define LOG_VERBOSE 8

bool slog_init_handler(void);
bool slog_update_log_level(int level);

#define slog(...) syslog(__VA_ARGS__)
//#define slog(...) fprintf(stdout, __VA_ARGS__)




#endif /* SLOG_H_ */
