/*
 * Copyright is disclaimed as to the contents of this file.
 *
 * $FreeBSD: src/usr.bin/getconf/sysconf.gperf,v 1.5 2003/08/22 17:32:07 markm Exp $
 */

#include <sys/types.h>

#include <string.h>
#include <unistd.h>
#ifdef APPLE_GETCONF_UNDERSCORE
#include <alloca.h>
#endif /* APPLE_GETCONF_UNDERSCORE */

#include "getconf.h"

/*
 * Override gperf's built-in external scope.
 */
static const struct map *in_word_set(const char *str);

struct map { const char *name; int key; int valid; };
static const struct map wordlist[] = {
#ifdef _SC_AIO_LISTIO_MAX
	{ "AIO_LISTIO_MAX", _SC_AIO_LISTIO_MAX, 1 },
#else
	{ "AIO_LISTIO_MAX", 0, 0 },
#endif
#ifdef _SC_AIO_MAX
	{ "AIO_MAX", _SC_AIO_MAX, 1 },
#else
	{ "AIO_MAX", 0, 0 },
#endif
#ifdef _SC_AIO_PRIO_DELTA_MAX
	{ "AIO_PRIO_DELTA_MAX", _SC_AIO_PRIO_DELTA_MAX, 1 },
#else
	{ "AIO_PRIO_DELTA_MAX", 0, 0 },
#endif
#ifdef _SC_ARG_MAX
	{ "ARG_MAX", _SC_ARG_MAX, 1 },
#else
	{ "ARG_MAX", 0, 0 },
#endif
#ifdef _SC_ATEXIT_MAX
	{ "ATEXIT_MAX", _SC_ATEXIT_MAX, 1 },
#else
	{ "ATEXIT_MAX", 0, 0 },
#endif
#ifdef _SC_BC_BASE_MAX
	{ "BC_BASE_MAX", _SC_BC_BASE_MAX, 1 },
#else
	{ "BC_BASE_MAX", 0, 0 },
#endif
#ifdef _SC_BC_DIM_MAX
	{ "BC_DIM_MAX", _SC_BC_DIM_MAX, 1 },
#else
	{ "BC_DIM_MAX", 0, 0 },
#endif
#ifdef _SC_BC_SCALE_MAX
	{ "BC_SCALE_MAX", _SC_BC_SCALE_MAX, 1 },
#else
	{ "BC_SCALE_MAX", 0, 0 },
#endif
#ifdef _SC_BC_STRING_MAX
	{ "BC_STRING_MAX", _SC_BC_STRING_MAX, 1 },
#else
	{ "BC_STRING_MAX", 0, 0 },
#endif
#ifdef _SC_CHILD_MAX
	{ "CHILD_MAX", _SC_CHILD_MAX, 1 },
#else
	{ "CHILD_MAX", 0, 0 },
#endif
#ifdef _SC_CLK_TCK
	{ "CLK_TCK", _SC_CLK_TCK, 1 },
#else
	{ "CLK_TCK", 0, 0 },
#endif
#ifdef _SC_COLL_WEIGHTS_MAX
	{ "COLL_WEIGHTS_MAX", _SC_COLL_WEIGHTS_MAX, 1 },
#else
	{ "COLL_WEIGHTS_MAX", 0, 0 },
#endif
#ifdef _SC_DELAYTIMER_MAX
	{ "DELAYTIMER_MAX", _SC_DELAYTIMER_MAX, 1 },
#else
	{ "DELAYTIMER_MAX", 0, 0 },
#endif
#ifdef _SC_EXPR_NEST_MAX
	{ "EXPR_NEST_MAX", _SC_EXPR_NEST_MAX, 1 },
#else
	{ "EXPR_NEST_MAX", 0, 0 },
#endif
#ifdef _SC_GETGR_R_SIZE_MAX
	{ "GETGR_R_SIZE_MAX", _SC_GETGR_R_SIZE_MAX, 1 },
#else
	{ "GETGR_R_SIZE_MAX", 0, 0 },
#endif
#ifdef _SC_GETPW_R_SIZE_MAX
	{ "GETPW_R_SIZE_MAX", _SC_GETPW_R_SIZE_MAX, 1 },
#else
	{ "GETPW_R_SIZE_MAX", 0, 0 },
#endif
#ifdef _SC_HOST_NAME_MAX
	{ "HOST_NAME_MAX", _SC_HOST_NAME_MAX, 1 },
#else
	{ "HOST_NAME_MAX", 0, 0 },
#endif
#ifdef _SC_IOV_MAX
	{ "IOV_MAX", _SC_IOV_MAX, 1 },
#else
	{ "IOV_MAX", 0, 0 },
#endif
#ifdef _SC_LINE_MAX
	{ "LINE_MAX", _SC_LINE_MAX, 1 },
#else
	{ "LINE_MAX", 0, 0 },
#endif
#ifdef _SC_LOGIN_NAME_MAX
	{ "LOGIN_NAME_MAX", _SC_LOGIN_NAME_MAX, 1 },
#else
	{ "LOGIN_NAME_MAX", 0, 0 },
#endif
#ifdef _SC_MQ_OPEN_MAX
	{ "MQ_OPEN_MAX", _SC_MQ_OPEN_MAX, 1 },
#else
	{ "MQ_OPEN_MAX", 0, 0 },
#endif
#ifdef _SC_MQ_PRIO_MAX
	{ "MQ_PRIO_MAX", _SC_MQ_PRIO_MAX, 1 },
#else
	{ "MQ_PRIO_MAX", 0, 0 },
#endif
#ifdef _SC_NGROUPS_MAX
	{ "NGROUPS_MAX", _SC_NGROUPS_MAX, 1 },
#else
	{ "NGROUPS_MAX", 0, 0 },
#endif
#ifdef _SC_NPROCESSORS_CONF
	{ "NPROCESSORS_CONF", _SC_NPROCESSORS_CONF, 1 },
#else
	{ "NPROCESSORS_CONF", 0, 0 },
#endif
#ifdef _SC_NPROCESSORS_ONLN
	{ "NPROCESSORS_ONLN", _SC_NPROCESSORS_ONLN, 1 },
#else
	{ "NPROCESSORS_ONLN", 0, 0 },
#endif
#ifdef _SC_OPEN_MAX
	{ "OPEN_MAX", _SC_OPEN_MAX, 1 },
#else
	{ "OPEN_MAX", 0, 0 },
#endif
#ifdef _SC_PAGESIZE
	{ "PAGESIZE", _SC_PAGESIZE, 1 },
#else
	{ "PAGESIZE", 0, 0 },
#endif
#ifdef _SC_PAGESIZE
	{ "PAGE_SIZE", _SC_PAGESIZE, 1 },
#else
	{ "PAGE_SIZE", 0, 0 },
#endif
#ifdef _SC_PASS_MAX
	{ "PASS_MAX", _SC_PASS_MAX, 1 },
#else
	{ "PASS_MAX", 0, 0 },
#endif
#ifdef _SC_THREAD_DESTRUCTOR_ITERATIONS
	{ "PTHREAD_DESTRUCTOR_ITERATIONS", _SC_THREAD_DESTRUCTOR_ITERATIONS, 1 },
#else
	{ "PTHREAD_DESTRUCTOR_ITERATIONS", 0, 0 },
#endif
#ifdef _SC_THREAD_KEYS_MAX
	{ "PTHREAD_KEYS_MAX", _SC_THREAD_KEYS_MAX, 1 },
#else
	{ "PTHREAD_KEYS_MAX", 0, 0 },
#endif
#ifdef _SC_THREAD_STACK_MIN
	{ "PTHREAD_STACK_MIN", _SC_THREAD_STACK_MIN, 1 },
#else
	{ "PTHREAD_STACK_MIN", 0, 0 },
#endif
#ifdef _SC_THREAD_THREADS_MAX
	{ "PTHREAD_THREADS_MAX", _SC_THREAD_THREADS_MAX, 1 },
#else
	{ "PTHREAD_THREADS_MAX", 0, 0 },
#endif
#ifdef _SC_RE_DUP_MAX
	{ "RE_DUP_MAX", _SC_RE_DUP_MAX, 1 },
#else
	{ "RE_DUP_MAX", 0, 0 },
#endif
#ifdef _SC_RTSIG_MAX
	{ "RTSIG_MAX", _SC_RTSIG_MAX, 1 },
#else
	{ "RTSIG_MAX", 0, 0 },
#endif
#ifdef _SC_SEM_NSEMS_MAX
	{ "SEM_NSEMS_MAX", _SC_SEM_NSEMS_MAX, 1 },
#else
	{ "SEM_NSEMS_MAX", 0, 0 },
#endif
#ifdef _SC_SEM_VALUE_MAX
	{ "SEM_VALUE_MAX", _SC_SEM_VALUE_MAX, 1 },
#else
	{ "SEM_VALUE_MAX", 0, 0 },
#endif
#ifdef _SC_SIGQUEUE_MAX
	{ "SIGQUEUE_MAX", _SC_SIGQUEUE_MAX, 1 },
#else
	{ "SIGQUEUE_MAX", 0, 0 },
#endif
#ifdef _SC_STREAM_MAX
	{ "STREAM_MAX", _SC_STREAM_MAX, 1 },
#else
	{ "STREAM_MAX", 0, 0 },
#endif
#ifdef _SC_SYMLOOP_MAX
	{ "SYMLOOP_MAX", _SC_SYMLOOP_MAX, 1 },
#else
	{ "SYMLOOP_MAX", 0, 0 },
#endif
#ifdef _SC_TIMER_MAX
	{ "TIMER_MAX", _SC_TIMER_MAX, 1 },
#else
	{ "TIMER_MAX", 0, 0 },
#endif
#ifdef _SC_TTY_NAME_MAX
	{ "TTY_NAME_MAX", _SC_TTY_NAME_MAX, 1 },
#else
	{ "TTY_NAME_MAX", 0, 0 },
#endif
#ifdef _SC_TZNAME_MAX
	{ "TZNAME_MAX", _SC_TZNAME_MAX, 1 },
#else
	{ "TZNAME_MAX", 0, 0 },
#endif
#ifdef _SC_2_CHAR_TERM
	{ "_POSIX2_CHAR_TERM", _SC_2_CHAR_TERM, 1 },
#else
	{ "_POSIX2_CHAR_TERM", 0, 0 },
#endif
#ifdef _SC_2_C_BIND
	{ "_POSIX2_C_BIND", _SC_2_C_BIND, 1 },
#else
	{ "_POSIX2_C_BIND", 0, 0 },
#endif
#ifdef _SC_2_C_DEV
	{ "_POSIX2_C_DEV", _SC_2_C_DEV, 1 },
#else
	{ "_POSIX2_C_DEV", 0, 0 },
#endif
#ifdef _SC_2_C_VERSION
	{ "_POSIX2_C_VERSION", _SC_2_C_VERSION, 1 },
#else
	{ "_POSIX2_C_VERSION", 0, 0 },
#endif
#ifdef _SC_2_FORT_DEV
	{ "_POSIX2_FORT_DEV", _SC_2_FORT_DEV, 1 },
#else
	{ "_POSIX2_FORT_DEV", 0, 0 },
#endif
#ifdef _SC_2_FORT_RUN
	{ "_POSIX2_FORT_RUN", _SC_2_FORT_RUN, 1 },
#else
	{ "_POSIX2_FORT_RUN", 0, 0 },
#endif
#ifdef _SC_2_LOCALEDEF
	{ "_POSIX2_LOCALEDEF", _SC_2_LOCALEDEF, 1 },
#else
	{ "_POSIX2_LOCALEDEF", 0, 0 },
#endif
#ifdef _SC_PBS
	{ "_POSIX2_PBS", _SC_PBS, 1 },
#else
	{ "_POSIX2_PBS", 0, 0 },
#endif
#ifdef _SC_PBS_ACCOUNTING
	{ "_POSIX2_PBS_ACCOUNTING", _SC_PBS_ACCOUNTING, 1 },
#else
	{ "_POSIX2_PBS_ACCOUNTING", 0, 0 },
#endif
#ifdef _SC_PBS_CHECKPOINT
	{ "_POSIX2_PBS_CHECKPOINT", _SC_PBS_CHECKPOINT, 1 },
#else
	{ "_POSIX2_PBS_CHECKPOINT", 0, 0 },
#endif
#ifdef _SC_PBS_LOCATE
	{ "_POSIX2_PBS_LOCATE", _SC_PBS_LOCATE, 1 },
#else
	{ "_POSIX2_PBS_LOCATE", 0, 0 },
#endif
#ifdef _SC_PBS_MESSAGE
	{ "_POSIX2_PBS_MESSAGE", _SC_PBS_MESSAGE, 1 },
#else
	{ "_POSIX2_PBS_MESSAGE", 0, 0 },
#endif
#ifdef _SC_PBS_TRACK
	{ "_POSIX2_PBS_TRACK", _SC_PBS_TRACK, 1 },
#else
	{ "_POSIX2_PBS_TRACK", 0, 0 },
#endif
#ifdef _SC_2_SW_DEV
	{ "_POSIX2_SW_DEV", _SC_2_SW_DEV, 1 },
#else
	{ "_POSIX2_SW_DEV", 0, 0 },
#endif
#ifdef _SC_2_UPE
	{ "_POSIX2_UPE", _SC_2_UPE, 1 },
#else
	{ "_POSIX2_UPE", 0, 0 },
#endif
#ifdef _SC_2_VERSION
	{ "_POSIX2_VERSION", _SC_2_VERSION, 1 },
#else
	{ "_POSIX2_VERSION", 0, 0 },
#endif
#ifdef _SC_ADVISORY_INFO
	{ "_POSIX_ADVISORY_INFO", _SC_ADVISORY_INFO, 1 },
#else
	{ "_POSIX_ADVISORY_INFO", 0, 0 },
#endif
#ifdef _SC_ASYNCHRONOUS_IO
	{ "_POSIX_ASYNCHRONOUS_IO", _SC_ASYNCHRONOUS_IO, 1 },
#else
	{ "_POSIX_ASYNCHRONOUS_IO", 0, 0 },
#endif
#ifdef _SC_BARRIERS
	{ "_POSIX_BARRIERS", _SC_BARRIERS, 1 },
#else
	{ "_POSIX_BARRIERS", 0, 0 },
#endif
#ifdef _SC_CLOCK_SELECTION
	{ "_POSIX_CLOCK_SELECTION", _SC_CLOCK_SELECTION, 1 },
#else
	{ "_POSIX_CLOCK_SELECTION", 0, 0 },
#endif
#ifdef _SC_CPUTIME
	{ "_POSIX_CPUTIME", _SC_CPUTIME, 1 },
#else
	{ "_POSIX_CPUTIME", 0, 0 },
#endif
#ifdef _SC_FILE_LOCKING
	{ "_POSIX_FILE_LOCKING", _SC_FILE_LOCKING, 1 },
#else
	{ "_POSIX_FILE_LOCKING", 0, 0 },
#endif
#ifdef _SC_FSYNC
	{ "_POSIX_FSYNC", _SC_FSYNC, 1 },
#else
	{ "_POSIX_FSYNC", 0, 0 },
#endif
#ifdef _SC_IPV6
	{ "_POSIX_IPV6", _SC_IPV6, 1 },
#else
	{ "_POSIX_IPV6", 0, 0 },
#endif
#ifdef _SC_JOB_CONTROL
	{ "_POSIX_JOB_CONTROL", _SC_JOB_CONTROL, 1 },
#else
	{ "_POSIX_JOB_CONTROL", 0, 0 },
#endif
#ifdef _SC_MAPPED_FILES
	{ "_POSIX_MAPPED_FILES", _SC_MAPPED_FILES, 1 },
#else
	{ "_POSIX_MAPPED_FILES", 0, 0 },
#endif
#ifdef _SC_MEMLOCK
	{ "_POSIX_MEMLOCK", _SC_MEMLOCK, 1 },
#else
	{ "_POSIX_MEMLOCK", 0, 0 },
#endif
#ifdef _SC_MEMLOCK_RANGE
	{ "_POSIX_MEMLOCK_RANGE", _SC_MEMLOCK_RANGE, 1 },
#else
	{ "_POSIX_MEMLOCK_RANGE", 0, 0 },
#endif
#ifdef _SC_MEMORY_PROTECTION
	{ "_POSIX_MEMORY_PROTECTION", _SC_MEMORY_PROTECTION, 1 },
#else
	{ "_POSIX_MEMORY_PROTECTION", 0, 0 },
#endif
#ifdef _SC_MESSAGE_PASSING
	{ "_POSIX_MESSAGE_PASSING", _SC_MESSAGE_PASSING, 1 },
#else
	{ "_POSIX_MESSAGE_PASSING", 0, 0 },
#endif
#ifdef _SC_MONOTONIC_CLOCK
	{ "_POSIX_MONOTONIC_CLOCK", _SC_MONOTONIC_CLOCK, 1 },
#else
	{ "_POSIX_MONOTONIC_CLOCK", 0, 0 },
#endif
#ifdef _SC_PRIORITIZED_IO
	{ "_POSIX_PRIORITIZED_IO", _SC_PRIORITIZED_IO, 1 },
#else
	{ "_POSIX_PRIORITIZED_IO", 0, 0 },
#endif
#ifdef _SC_PRIORITY_SCHEDULING
	{ "_POSIX_PRIORITY_SCHEDULING", _SC_PRIORITY_SCHEDULING, 1 },
#else
	{ "_POSIX_PRIORITY_SCHEDULING", 0, 0 },
#endif
#ifdef _SC_RAW_SOCKETS
	{ "_POSIX_RAW_SOCKETS", _SC_RAW_SOCKETS, 1 },
#else
	{ "_POSIX_RAW_SOCKETS", 0, 0 },
#endif
#ifdef _SC_READER_WRITER_LOCKS
	{ "_POSIX_READER_WRITER_LOCKS", _SC_READER_WRITER_LOCKS, 1 },
#else
	{ "_POSIX_READER_WRITER_LOCKS", 0, 0 },
#endif
#ifdef _SC_REALTIME_SIGNALS
	{ "_POSIX_REALTIME_SIGNALS", _SC_REALTIME_SIGNALS, 1 },
#else
	{ "_POSIX_REALTIME_SIGNALS", 0, 0 },
#endif
#ifdef _SC_REGEXP
	{ "_POSIX_REGEXP", _SC_REGEXP, 1 },
#else
	{ "_POSIX_REGEXP", 0, 0 },
#endif
#ifdef _SC_SAVED_IDS
	{ "_POSIX_SAVED_IDS", _SC_SAVED_IDS, 1 },
#else
	{ "_POSIX_SAVED_IDS", 0, 0 },
#endif
#ifdef _SC_SEMAPHORES
	{ "_POSIX_SEMAPHORES", _SC_SEMAPHORES, 1 },
#else
	{ "_POSIX_SEMAPHORES", 0, 0 },
#endif
#ifdef _SC_SHARED_MEMORY_OBJECTS
	{ "_POSIX_SHARED_MEMORY_OBJECTS", _SC_SHARED_MEMORY_OBJECTS, 1 },
#else
	{ "_POSIX_SHARED_MEMORY_OBJECTS", 0, 0 },
#endif
#ifdef _SC_SHELL
	{ "_POSIX_SHELL", _SC_SHELL, 1 },
#else
	{ "_POSIX_SHELL", 0, 0 },
#endif
#ifdef _SC_SPAWN
	{ "_POSIX_SPAWN", _SC_SPAWN, 1 },
#else
	{ "_POSIX_SPAWN", 0, 0 },
#endif
#ifdef _SC_SPIN_LOCKS
	{ "_POSIX_SPIN_LOCKS", _SC_SPIN_LOCKS, 1 },
#else
	{ "_POSIX_SPIN_LOCKS", 0, 0 },
#endif
#ifdef _SC_SPORADIC_SERVER
	{ "_POSIX_SPORADIC_SERVER", _SC_SPORADIC_SERVER, 1 },
#else
	{ "_POSIX_SPORADIC_SERVER", 0, 0 },
#endif
#ifdef _SC_SS_REPL_MAX
	{ "_POSIX_SS_REPL_MAX", _SC_SS_REPL_MAX, 1 },
#else
	{ "_POSIX_SS_REPL_MAX", 0, 0 },
#endif
#ifdef _SC_SYNCHRONIZED_IO
	{ "_POSIX_SYNCHRONIZED_IO", _SC_SYNCHRONIZED_IO, 1 },
#else
	{ "_POSIX_SYNCHRONIZED_IO", 0, 0 },
#endif
#ifdef _SC_THREADS
	{ "_POSIX_THREADS", _SC_THREADS, 1 },
#else
	{ "_POSIX_THREADS", 0, 0 },
#endif
#ifdef _SC_THREAD_ATTR_STACKADDR
	{ "_POSIX_THREAD_ATTR_STACKADDR", _SC_THREAD_ATTR_STACKADDR, 1 },
#else
	{ "_POSIX_THREAD_ATTR_STACKADDR", 0, 0 },
#endif
#ifdef _SC_THREAD_ATTR_STACKSIZE
	{ "_POSIX_THREAD_ATTR_STACKSIZE", _SC_THREAD_ATTR_STACKSIZE, 1 },
#else
	{ "_POSIX_THREAD_ATTR_STACKSIZE", 0, 0 },
#endif
#ifdef _SC_THREAD_CPUTIME
	{ "_POSIX_THREAD_CPUTIME", _SC_THREAD_CPUTIME, 1 },
#else
	{ "_POSIX_THREAD_CPUTIME", 0, 0 },
#endif
#ifdef _SC_THREAD_PRIORITY_SCHEDULING
	{ "_POSIX_THREAD_PRIORITY_SCHEDULING", _SC_THREAD_PRIORITY_SCHEDULING, 1 },
#else
	{ "_POSIX_THREAD_PRIORITY_SCHEDULING", 0, 0 },
#endif
#ifdef _SC_THREAD_PRIO_INHERIT
	{ "_POSIX_THREAD_PRIO_INHERIT", _SC_THREAD_PRIO_INHERIT, 1 },
#else
	{ "_POSIX_THREAD_PRIO_INHERIT", 0, 0 },
#endif
#ifdef _SC_THREAD_PRIO_PROTECT
	{ "_POSIX_THREAD_PRIO_PROTECT", _SC_THREAD_PRIO_PROTECT, 1 },
#else
	{ "_POSIX_THREAD_PRIO_PROTECT", 0, 0 },
#endif
#ifdef _SC_THREAD_PROCESS_SHARED
	{ "_POSIX_THREAD_PROCESS_SHARED", _SC_THREAD_PROCESS_SHARED, 1 },
#else
	{ "_POSIX_THREAD_PROCESS_SHARED", 0, 0 },
#endif
#ifdef _SC_THREAD_SAFE_FUNCTIONS
	{ "_POSIX_THREAD_SAFE_FUNCTIONS", _SC_THREAD_SAFE_FUNCTIONS, 1 },
#else
	{ "_POSIX_THREAD_SAFE_FUNCTIONS", 0, 0 },
#endif
#ifdef _SC_THREAD_SPORADIC_SERVER
	{ "_POSIX_THREAD_SPORADIC_SERVER", _SC_THREAD_SPORADIC_SERVER, 1 },
#else
	{ "_POSIX_THREAD_SPORADIC_SERVER", 0, 0 },
#endif
#ifdef _SC_TIMEOUTS
	{ "_POSIX_TIMEOUTS", _SC_TIMEOUTS, 1 },
#else
	{ "_POSIX_TIMEOUTS", 0, 0 },
#endif
#ifdef _SC_TIMERS
	{ "_POSIX_TIMERS", _SC_TIMERS, 1 },
#else
	{ "_POSIX_TIMERS", 0, 0 },
#endif
#ifdef _SC_TRACE
	{ "_POSIX_TRACE", _SC_TRACE, 1 },
#else
	{ "_POSIX_TRACE", 0, 0 },
#endif
#ifdef _SC_TRACE_EVENT_FILTER
	{ "_POSIX_TRACE_EVENT_FILTER", _SC_TRACE_EVENT_FILTER, 1 },
#else
	{ "_POSIX_TRACE_EVENT_FILTER", 0, 0 },
#endif
#ifdef _SC_TRACE_EVENT_NAME_MAX
	{ "_POSIX_TRACE_EVENT_NAME_MAX", _SC_TRACE_EVENT_NAME_MAX, 1 },
#else
	{ "_POSIX_TRACE_EVENT_NAME_MAX", 0, 0 },
#endif
#ifdef _SC_TRACE_INHERIT
	{ "_POSIX_TRACE_INHERIT", _SC_TRACE_INHERIT, 1 },
#else
	{ "_POSIX_TRACE_INHERIT", 0, 0 },
#endif
#ifdef _SC_TRACE_LOG
	{ "_POSIX_TRACE_LOG", _SC_TRACE_LOG, 1 },
#else
	{ "_POSIX_TRACE_LOG", 0, 0 },
#endif
#ifdef _SC_TRACE_NAME_MAX
	{ "_POSIX_TRACE_NAME_MAX", _SC_TRACE_NAME_MAX, 1 },
#else
	{ "_POSIX_TRACE_NAME_MAX", 0, 0 },
#endif
#ifdef _SC_TRACE_SYS_MAX
	{ "_POSIX_TRACE_SYS_MAX", _SC_TRACE_SYS_MAX, 1 },
#else
	{ "_POSIX_TRACE_SYS_MAX", 0, 0 },
#endif
#ifdef _SC_TRACE_USER_EVENT_MAX
	{ "_POSIX_TRACE_USER_EVENT_MAX", _SC_TRACE_USER_EVENT_MAX, 1 },
#else
	{ "_POSIX_TRACE_USER_EVENT_MAX", 0, 0 },
#endif
#ifdef _SC_TYPED_MEMORY_OBJECTS
	{ "_POSIX_TYPED_MEMORY_OBJECTS", _SC_TYPED_MEMORY_OBJECTS, 1 },
#else
	{ "_POSIX_TYPED_MEMORY_OBJECTS", 0, 0 },
#endif
#ifdef _SC_V6_ILP32_OFF32
	{ "_POSIX_V6_ILP32_OFF32", _SC_V6_ILP32_OFF32, 1 },
#else
	{ "_POSIX_V6_ILP32_OFF32", 0, 0 },
#endif
#ifdef _SC_V6_ILP32_OFFBIG
	{ "_POSIX_V6_ILP32_OFFBIG", _SC_V6_ILP32_OFFBIG, 1 },
#else
	{ "_POSIX_V6_ILP32_OFFBIG", 0, 0 },
#endif
#ifdef _SC_V6_LP64_OFF64
	{ "_POSIX_V6_LP64_OFF64", _SC_V6_LP64_OFF64, 1 },
#else
	{ "_POSIX_V6_LP64_OFF64", 0, 0 },
#endif
#ifdef _SC_V6_LPBIG_OFFBIG
	{ "_POSIX_V6_LPBIG_OFFBIG", _SC_V6_LPBIG_OFFBIG, 1 },
#else
	{ "_POSIX_V6_LPBIG_OFFBIG", 0, 0 },
#endif
#ifdef _SC_VERSION
	{ "_POSIX_VERSION", _SC_VERSION, 1 },
#else
	{ "_POSIX_VERSION", 0, 0 },
#endif
#ifdef _SC_XOPEN_CRYPT
	{ "_XOPEN_CRYPT", _SC_XOPEN_CRYPT, 1 },
#else
	{ "_XOPEN_CRYPT", 0, 0 },
#endif
#ifdef _SC_XOPEN_ENH_I18N
	{ "_XOPEN_ENH_I18N", _SC_XOPEN_ENH_I18N, 1 },
#else
	{ "_XOPEN_ENH_I18N", 0, 0 },
#endif
#ifdef _SC_XOPEN_LEGACY
	{ "_XOPEN_LEGACY", _SC_XOPEN_LEGACY, 1 },
#else
	{ "_XOPEN_LEGACY", 0, 0 },
#endif
#ifdef _SC_XOPEN_REALTIME
	{ "_XOPEN_REALTIME", _SC_XOPEN_REALTIME, 1 },
#else
	{ "_XOPEN_REALTIME", 0, 0 },
#endif
#ifdef _SC_XOPEN_REALTIME_THREADS
	{ "_XOPEN_REALTIME_THREADS", _SC_XOPEN_REALTIME_THREADS, 1 },
#else
	{ "_XOPEN_REALTIME_THREADS", 0, 0 },
#endif
#ifdef _SC_XOPEN_SHM
	{ "_XOPEN_SHM", _SC_XOPEN_SHM, 1 },
#else
	{ "_XOPEN_SHM", 0, 0 },
#endif
#ifdef _SC_XOPEN_STREAMS
	{ "_XOPEN_STREAMS", _SC_XOPEN_STREAMS, 1 },
#else
	{ "_XOPEN_STREAMS", 0, 0 },
#endif
#ifdef _SC_XOPEN_UNIX
	{ "_XOPEN_UNIX", _SC_XOPEN_UNIX, 1 },
#else
	{ "_XOPEN_UNIX", 0, 0 },
#endif
#ifdef _SC_XOPEN_VERSION
	{ "_XOPEN_VERSION", _SC_XOPEN_VERSION, 1 },
#else
	{ "_XOPEN_VERSION", 0, 0 },
#endif
#ifdef _SC_XCU_VERSION
	{ "_XOPEN_XCU_VERSION", _SC_XCU_VERSION, 1 },
#else
	{ "_XOPEN_XCU_VERSION", 0, 0 },
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
find_sysconf(const char *name, int *key)
{
	const struct map *rv;
#ifdef APPLE_GETCONF_UNDERSCORE
	char *alt;
#endif /* APPLE_GETCONF_UNDERSCORE */

	rv = in_word_set(name);
	if (rv != NULL) {
		if (rv->valid) {
			*key = rv->key;
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
			*key = rv->key;
			return 1;
		}
		return -1;
	}
#endif /* APPLE_GETCONF_UNDERSCORE */
	return 0;
}
