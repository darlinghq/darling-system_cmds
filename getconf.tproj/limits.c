/*
 * Copyright is disclaimed as to the contents of this file.
 *
 * $FreeBSD: src/usr.bin/getconf/limits.gperf,v 1.2 2003/08/22 17:32:07 markm Exp $
 */

#include <sys/types.h>

#include <string.h>
#include <limits.h>
#ifdef APPLE_GETCONF_UNDERSCORE
#include <alloca.h>
#endif /* APPLE_GETCONF_UNDERSCORE */

#include "getconf.h"

/*
 * Override gperf's built-in external scope.
 */
static const struct map *in_word_set(const char *str);

struct map { const char *name; intmax_t value; int valid; };
static const struct map wordlist[] = {
#ifdef _POSIX_AIO_LISTIO_MAX
	{ "_POSIX_AIO_LISTIO_MAX", _POSIX_AIO_LISTIO_MAX, 1 },
#else
	{ "_POSIX_AIO_LISTIO_MAX", 0, 0 },
#endif
#ifdef _POSIX_AIO_MAX
	{ "_POSIX_AIO_MAX", _POSIX_AIO_MAX, 1 },
#else
	{ "_POSIX_AIO_MAX", 0, 0 },
#endif
#ifdef _POSIX_ARG_MAX
	{ "_POSIX_ARG_MAX", _POSIX_ARG_MAX, 1 },
#else
	{ "_POSIX_ARG_MAX", 0, 0 },
#endif
#ifdef _POSIX_CHILD_MAX
	{ "_POSIX_CHILD_MAX", _POSIX_CHILD_MAX, 1 },
#else
	{ "_POSIX_CHILD_MAX", 0, 0 },
#endif
#ifdef _POSIX_CLOCKRES_MIN
	{ "_POSIX_CLOCKRES_MIN", _POSIX_CLOCKRES_MIN, 1 },
#else
	{ "_POSIX_CLOCKRES_MIN", 0, 0 },
#endif
#ifdef _POSIX_DELAYTIMER_MAX
	{ "_POSIX_DELAYTIMER_MAX", _POSIX_DELAYTIMER_MAX, 1 },
#else
	{ "_POSIX_DELAYTIMER_MAX", 0, 0 },
#endif
#ifdef _POSIX_HOST_NAME_MAX
	{ "_POSIX_HOST_NAME_MAX", _POSIX_HOST_NAME_MAX, 1 },
#else
	{ "_POSIX_HOST_NAME_MAX", 0, 0 },
#endif
#ifdef _POSIX_LINK_MAX
	{ "_POSIX_LINK_MAX", _POSIX_LINK_MAX, 1 },
#else
	{ "_POSIX_LINK_MAX", 0, 0 },
#endif
#ifdef _POSIX_LOGIN_NAME_MAX
	{ "_POSIX_LOGIN_NAME_MAX", _POSIX_LOGIN_NAME_MAX, 1 },
#else
	{ "_POSIX_LOGIN_NAME_MAX", 0, 0 },
#endif
#ifdef _POSIX_MAX_CANON
	{ "_POSIX_MAX_CANON", _POSIX_MAX_CANON, 1 },
#else
	{ "_POSIX_MAX_CANON", 0, 0 },
#endif
#ifdef _POSIX_MAX_INPUT
	{ "_POSIX_MAX_INPUT", _POSIX_MAX_INPUT, 1 },
#else
	{ "_POSIX_MAX_INPUT", 0, 0 },
#endif
#ifdef _POSIX_MQ_OPEN_MAX
	{ "_POSIX_MQ_OPEN_MAX", _POSIX_MQ_OPEN_MAX, 1 },
#else
	{ "_POSIX_MQ_OPEN_MAX", 0, 0 },
#endif
#ifdef _POSIX_MQ_PRIO_MAX
	{ "_POSIX_MQ_PRIO_MAX", _POSIX_MQ_PRIO_MAX, 1 },
#else
	{ "_POSIX_MQ_PRIO_MAX", 0, 0 },
#endif
#ifdef _POSIX_NAME_MAX
	{ "_POSIX_NAME_MAX", _POSIX_NAME_MAX, 1 },
#else
	{ "_POSIX_NAME_MAX", 0, 0 },
#endif
#ifdef _POSIX_NGROUPS_MAX
	{ "_POSIX_NGROUPS_MAX", _POSIX_NGROUPS_MAX, 1 },
#else
	{ "_POSIX_NGROUPS_MAX", 0, 0 },
#endif
#ifdef _POSIX_OPEN_MAX
	{ "_POSIX_OPEN_MAX", _POSIX_OPEN_MAX, 1 },
#else
	{ "_POSIX_OPEN_MAX", 0, 0 },
#endif
#ifdef _POSIX_PATH_MAX
	{ "_POSIX_PATH_MAX", _POSIX_PATH_MAX, 1 },
#else
	{ "_POSIX_PATH_MAX", 0, 0 },
#endif
#ifdef _POSIX_PIPE_BUF
	{ "_POSIX_PIPE_BUF", _POSIX_PIPE_BUF, 1 },
#else
	{ "_POSIX_PIPE_BUF", 0, 0 },
#endif
#ifdef _POSIX_RE_DUP_MAX
	{ "_POSIX_RE_DUP_MAX", _POSIX_RE_DUP_MAX, 1 },
#else
	{ "_POSIX_RE_DUP_MAX", 0, 0 },
#endif
#ifdef _POSIX_RTSIG_MAX
	{ "_POSIX_RTSIG_MAX", _POSIX_RTSIG_MAX, 1 },
#else
	{ "_POSIX_RTSIG_MAX", 0, 0 },
#endif
#ifdef _POSIX_SEM_NSEMS_MAX
	{ "_POSIX_SEM_NSEMS_MAX", _POSIX_SEM_NSEMS_MAX, 1 },
#else
	{ "_POSIX_SEM_NSEMS_MAX", 0, 0 },
#endif
#ifdef _POSIX_SEM_VALUE_MAX
	{ "_POSIX_SEM_VALUE_MAX", _POSIX_SEM_VALUE_MAX, 1 },
#else
	{ "_POSIX_SEM_VALUE_MAX", 0, 0 },
#endif
#ifdef _POSIX_SIGQUEUE_MAX
	{ "_POSIX_SIGQUEUE_MAX", _POSIX_SIGQUEUE_MAX, 1 },
#else
	{ "_POSIX_SIGQUEUE_MAX", 0, 0 },
#endif
#ifdef _POSIX_SSIZE_MAX
	{ "_POSIX_SSIZE_MAX", _POSIX_SSIZE_MAX, 1 },
#else
	{ "_POSIX_SSIZE_MAX", 0, 0 },
#endif
#ifdef _POSIX_STREAM_MAX
	{ "_POSIX_STREAM_MAX", _POSIX_STREAM_MAX, 1 },
#else
	{ "_POSIX_STREAM_MAX", 0, 0 },
#endif
#ifdef _POSIX_SS_REPL_MAX
	{ "_POSIX_SS_REPL_MAX", _POSIX_SS_REPL_MAX, 1 },
#else
	{ "_POSIX_SS_REPL_MAX", 0, 0 },
#endif
#ifdef _POSIX_SYMLINK_MAX
	{ "_POSIX_SYMLINK_MAX", _POSIX_SYMLINK_MAX, 1 },
#else
	{ "_POSIX_SYMLINK_MAX", 0, 0 },
#endif
#ifdef _POSIX_SYMLOOP_MAX
	{ "_POSIX_SYMLOOP_MAX", _POSIX_SYMLOOP_MAX, 1 },
#else
	{ "_POSIX_SYMLOOP_MAX", 0, 0 },
#endif
#ifdef _POSIX_THREAD_DESTRUCTOR_ITERATIONS
	{ "_POSIX_THREAD_DESTRUCTOR_ITERATIONS", _POSIX_THREAD_DESTRUCTOR_ITERATIONS, 1 },
#else
	{ "_POSIX_THREAD_DESTRUCTOR_ITERATIONS", 0, 0 },
#endif
#ifdef _POSIX_THREAD_KEYS_MAX
	{ "_POSIX_THREAD_KEYS_MAX", _POSIX_THREAD_KEYS_MAX, 1 },
#else
	{ "_POSIX_THREAD_KEYS_MAX", 0, 0 },
#endif
#ifdef _POSIX_THREAD_THREADS_MAX
	{ "_POSIX_THREAD_THREADS_MAX", _POSIX_THREAD_THREADS_MAX, 1 },
#else
	{ "_POSIX_THREAD_THREADS_MAX", 0, 0 },
#endif
#ifdef _POSIX_TIMER_MAX
	{ "_POSIX_TIMER_MAX", _POSIX_TIMER_MAX, 1 },
#else
	{ "_POSIX_TIMER_MAX", 0, 0 },
#endif
#ifdef _POSIX_TRACE_EVENT_NAME_MAX
	{ "_POSIX_TRACE_EVENT_NAME_MAX", _POSIX_TRACE_EVENT_NAME_MAX, 1 },
#else
	{ "_POSIX_TRACE_EVENT_NAME_MAX", 0, 0 },
#endif
#ifdef _POSIX_TRACE_NAME_MAX
	{ "_POSIX_TRACE_NAME_MAX", _POSIX_TRACE_NAME_MAX, 1 },
#else
	{ "_POSIX_TRACE_NAME_MAX", 0, 0 },
#endif
#ifdef _POSIX_TRACE_SYS_MAX
	{ "_POSIX_TRACE_SYS_MAX", _POSIX_TRACE_SYS_MAX, 1 },
#else
	{ "_POSIX_TRACE_SYS_MAX", 0, 0 },
#endif
#ifdef _POSIX_TRACE_USER_EVENT_MAX
	{ "_POSIX_TRACE_USER_EVENT_MAX", _POSIX_TRACE_USER_EVENT_MAX, 1 },
#else
	{ "_POSIX_TRACE_USER_EVENT_MAX", 0, 0 },
#endif
#ifdef _POSIX_TTY_NAME_MAX
	{ "_POSIX_TTY_NAME_MAX", _POSIX_TTY_NAME_MAX, 1 },
#else
	{ "_POSIX_TTY_NAME_MAX", 0, 0 },
#endif
#ifdef _POSIX_TZNAME_MAX
	{ "_POSIX_TZNAME_MAX", _POSIX_TZNAME_MAX, 1 },
#else
	{ "_POSIX_TZNAME_MAX", 0, 0 },
#endif
#ifdef _POSIX2_BC_BASE_MAX
	{ "_POSIX2_BC_BASE_MAX", _POSIX2_BC_BASE_MAX, 1 },
#else
	{ "_POSIX2_BC_BASE_MAX", 0, 0 },
#endif
#ifdef _POSIX2_BC_DIM_MAX
	{ "_POSIX2_BC_DIM_MAX", _POSIX2_BC_DIM_MAX, 1 },
#else
	{ "_POSIX2_BC_DIM_MAX", 0, 0 },
#endif
#ifdef _POSIX2_BC_SCALE_MAX
	{ "_POSIX2_BC_SCALE_MAX", _POSIX2_BC_SCALE_MAX, 1 },
#else
	{ "_POSIX2_BC_SCALE_MAX", 0, 0 },
#endif
#ifdef _POSIX2_BC_STRING_MAX
	{ "_POSIX2_BC_STRING_MAX", _POSIX2_BC_STRING_MAX, 1 },
#else
	{ "_POSIX2_BC_STRING_MAX", 0, 0 },
#endif
#ifdef _POSIX2_CHARCLASS_NAME_MAX
	{ "_POSIX2_CHARCLASS_NAME_MAX", _POSIX2_CHARCLASS_NAME_MAX, 1 },
#else
	{ "_POSIX2_CHARCLASS_NAME_MAX", 0, 0 },
#endif
#ifdef _POSIX2_COLL_WEIGHTS_MAX
	{ "_POSIX2_COLL_WEIGHTS_MAX", _POSIX2_COLL_WEIGHTS_MAX, 1 },
#else
	{ "_POSIX2_COLL_WEIGHTS_MAX", 0, 0 },
#endif
#ifdef _POSIX2_EXPR_NEST_MAX
	{ "_POSIX2_EXPR_NEST_MAX", _POSIX2_EXPR_NEST_MAX, 1 },
#else
	{ "_POSIX2_EXPR_NEST_MAX", 0, 0 },
#endif
#ifdef _POSIX2_LINE_MAX
	{ "_POSIX2_LINE_MAX", _POSIX2_LINE_MAX, 1 },
#else
	{ "_POSIX2_LINE_MAX", 0, 0 },
#endif
#ifdef _POSIX2_RE_DUP_MAX
	{ "_POSIX2_RE_DUP_MAX", _POSIX2_RE_DUP_MAX, 1 },
#else
	{ "_POSIX2_RE_DUP_MAX", 0, 0 },
#endif
#ifdef _XOPEN_IOV_MAX
	{ "_XOPEN_IOV_MAX", _XOPEN_IOV_MAX, 1 },
#else
	{ "_XOPEN_IOV_MAX", 0, 0 },
#endif
#ifdef _XOPEN_NAME_MAX
	{ "_XOPEN_NAME_MAX", _XOPEN_NAME_MAX, 1 },
#else
	{ "_XOPEN_NAME_MAX", 0, 0 },
#endif
#ifdef _XOPEN_PATH_MAX
	{ "_XOPEN_PATH_MAX", _XOPEN_PATH_MAX, 1 },
#else
	{ "_XOPEN_PATH_MAX", 0, 0 },
#endif
#ifdef CHAR_BIT
	{ "CHAR_BIT", CHAR_BIT, 1 },
#else
	{ "CHAR_BIT", 0, 0 },
#endif
#ifdef CHAR_MAX
	{ "CHAR_MAX", CHAR_MAX, 1 },
#else
	{ "CHAR_MAX", 0, 0 },
#endif
#ifdef CHAR_MIN
	{ "CHAR_MIN", CHAR_MIN, 1 },
#else
	{ "CHAR_MIN", 0, 0 },
#endif
#ifdef INT_MAX
	{ "INT_MAX", INT_MAX, 1 },
#else
	{ "INT_MAX", 0, 0 },
#endif
#ifdef INT_MIN
	{ "INT_MIN", INT_MIN, 1 },
#else
	{ "INT_MIN", 0, 0 },
#endif
#ifdef LLONG_MIN
	{ "LLONG_MIN", LLONG_MIN, 1 },
#else
	{ "LLONG_MIN", 0, 0 },
#endif
#ifdef LLONG_MAX
	{ "LLONG_MAX", LLONG_MAX, 1 },
#else
	{ "LLONG_MAX", 0, 0 },
#endif
#ifdef LONG_BIT
	{ "LONG_BIT", LONG_BIT, 1 },
#else
	{ "LONG_BIT", 0, 0 },
#endif
#ifdef LONG_MAX
	{ "LONG_MAX", LONG_MAX, 1 },
#else
	{ "LONG_MAX", 0, 0 },
#endif
#ifdef LONG_MIN
	{ "LONG_MIN", LONG_MIN, 1 },
#else
	{ "LONG_MIN", 0, 0 },
#endif
#ifdef MB_LEN_MAX
	{ "MB_LEN_MAX", MB_LEN_MAX, 1 },
#else
	{ "MB_LEN_MAX", 0, 0 },
#endif
#ifdef SCHAR_MAX
	{ "SCHAR_MAX", SCHAR_MAX, 1 },
#else
	{ "SCHAR_MAX", 0, 0 },
#endif
#ifdef SCHAR_MIN
	{ "SCHAR_MIN", SCHAR_MIN, 1 },
#else
	{ "SCHAR_MIN", 0, 0 },
#endif
#ifdef SHRT_MAX
	{ "SHRT_MAX", SHRT_MAX, 1 },
#else
	{ "SHRT_MAX", 0, 0 },
#endif
#ifdef SHRT_MIN
	{ "SHRT_MIN", SHRT_MIN, 1 },
#else
	{ "SHRT_MIN", 0, 0 },
#endif
#ifdef SSIZE_MAX
	{ "SSIZE_MAX", SSIZE_MAX, 1 },
#else
	{ "SSIZE_MAX", 0, 0 },
#endif
#ifdef UCHAR_MAX
	{ "UCHAR_MAX", UCHAR_MAX, 1 },
#else
	{ "UCHAR_MAX", 0, 0 },
#endif
#ifdef UINT_MAX
	{ "UINT_MAX", UINT_MAX, 1 },
#else
	{ "UINT_MAX", 0, 0 },
#endif
#ifdef ULLONG_MAX
	{ "ULLONG_MAX", ULLONG_MAX, 1 },
#else
	{ "ULLONG_MAX", 0, 0 },
#endif
#ifdef ULONG_MAX
	{ "ULONG_MAX", ULONG_MAX, 1 },
#else
	{ "ULONG_MAX", 0, 0 },
#endif
#ifdef USHRT_MAX
	{ "USHRT_MAX", USHRT_MAX, 1 },
#else
	{ "USHRT_MAX", 0, 0 },
#endif
#ifdef WORD_BIT
	{ "WORD_BIT", WORD_BIT, 1 },
#else
	{ "WORD_BIT", 0, 0 },
#endif
#ifdef CHARCLASS_NAME_MAX
	{ "CHARCLASS_NAME_MAX", CHARCLASS_NAME_MAX, 1 },
#else
	{ "CHARCLASS_NAME_MAX", 0, 0 },
#endif
#ifdef NL_ARGMAX
	{ "NL_ARGMAX", NL_ARGMAX, 1 },
#else
	{ "NL_ARGMAX", 0, 0 },
#endif
#ifdef NL_LANGMAX
	{ "ML_LANGMAX", NL_LANGMAX, 1 },
#else
	{ "ML_LANGMAX", 0, 0 },
#endif
#ifdef NL_MSGMAX
	{ "NL_MSGMAX", NL_MSGMAX, 1 },
#else
	{ "NL_MSGMAX", 0, 0 },
#endif
#ifdef NL_NMAX
	{ "NL_NMAX", NL_NMAX, 1 },
#else
	{ "NL_NMAX", 0, 0 },
#endif
#ifdef NL_SETMAX
	{ "NL_SETMAX", NL_SETMAX, 1 },
#else
	{ "NL_SETMAX", 0, 0 },
#endif
#ifdef NL_TEXTMAX
	{ "NL_TEXTMAX", NL_TEXTMAX, 1 },
#else
	{ "NL_TEXTMAX", 0, 0 },
#endif
#ifdef NZERO
	{ "NZERO", NZERO, 1 },
#else
	{ "NZERO", 0, 0 },
#endif
	{ NULL, 0, 0 }
};
#define	NWORDS	(sizeof(wordlist)/sizeof(wordlist[0]) - 1)
static const struct map *
in_word_set(const char *word)
{
	const struct map *mp;

	for (mp = wordlist; mp < &wordlist[NWORDS]; mp++) {
		if (strcmp(word, mp->name) == 0)
			return (mp);
	}
	return (NULL);
}

int
find_limit(const char *name, intmax_t *value)
{
	const struct map *rv;
#ifdef APPLE_GETCONF_UNDERSCORE
	char *alt;
#endif /* APPLE_GETCONF_UNDERSCORE */

	rv = in_word_set(name);
	if (rv != NULL) {
		if (rv->valid) {
			*value = rv->value;
			return 1;
		}
		return -1;
	}
#ifdef APPLE_GETCONF_UNDERSCORE
	if(*name == '_')
		alt = (char *)name + 1;
	else {
		if((alt = (char *)alloca(strlen(name) + 2)) == NULL)
			return 0;
		*alt = '_';
		strcpy(alt + 1, name);
	}
	rv = in_word_set(alt);
	if (rv != NULL) {
		if (rv->valid) {
			*value = rv->value;
			return 1;
		}
		return -1;
	}
#endif /* APPLE_GETCONF_UNDERSCORE */
	return 0;
}
