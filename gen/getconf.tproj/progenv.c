/*
 * Copyright is disclaimed as to the contents of this file.
 *
 * $FreeBSD: src/usr.bin/getconf/progenv.gperf,v 1.2 2003/08/22 17:32:07 markm Exp $
 */

#include <sys/types.h>

#include <string.h>
#include <unistd.h>

#include "getconf.h"

/*
 * Override gperf's built-in external scope.
 */
static const struct map *in_word_set(const char *str);

/*
 * The Standard seems a bit ambiguous over whether the POSIX_V6_*
 * are specified with or without a leading underscore, so we just
 * use both.
 */
/*
 * The alt_path member gives the path containing another `getconf'
 * executable which was compiled using the specified programming
 * environment.  If it is NULL, the current executable is good enough.
 * If we ever support multiple environments, this table will need to
 * be updated.  (We cheat here and define the supported environments
 * statically.)
 */
#if defined(__alpha__) || defined(__sparc64__)
#define	have_LP64_OFF64		NULL
#elif defined(__APPLE__)
#define	have_LP64_OFF64		NULL
#define	have_LPBIG_OFFBIG	NULL
#endif

#if defined(__i386__) || defined(__powerpc__) || defined(__x86_64__)
#define	have_ILP32_OFFBIG	NULL
#endif

struct map { const char *name; const char *alt_path; int valid; };
static const struct map wordlist[] = {
#ifdef notdef
	{ "POSIX_V6_ILP32_OFF32", notdef, 1 },
#else
	{ "POSIX_V6_ILP32_OFF32", 0, 0 },
#endif
#ifdef have_ILP32_OFFBIG
	{ "POSIX_V6_ILP32_OFFBIG", have_ILP32_OFFBIG, 1 },
#else
	{ "POSIX_V6_ILP32_OFFBIG", 0, 0 },
#endif
#ifdef have_LP64_OFF64
	{ "POSIX_V6_LP64_OFF64", have_LP64_OFF64, 1 },
#else
	{ "POSIX_V6_LP64_OFF64", 0, 0 },
#endif
#ifdef have_LPBIG_OFFBIG
	{ "POSIX_V6_LPBIG_OFFBIG", have_LPBIG_OFFBIG, 1 },
#else
	{ "POSIX_V6_LPBIG_OFFBIG", 0, 0 },
#endif
#ifdef notdef
	{ "_POSIX_V6_ILP32_OFF32", notdef, 1 },
#else
	{ "_POSIX_V6_ILP32_OFF32", 0, 0 },
#endif
#ifdef have_ILP32_OFFBIG
	{ "_POSIX_V6_ILP32_OFFBIG", have_ILP32_OFFBIG, 1 },
#else
	{ "_POSIX_V6_ILP32_OFFBIG", 0, 0 },
#endif
#ifdef have_LP64_OFF64
	{ "_POSIX_V6_LP64_OFF64", have_LP64_OFF64, 1 },
#else
	{ "_POSIX_V6_LP64_OFF64", 0, 0 },
#endif
#ifdef have_LPBIG_OFFBIG
	{ "_POSIX_V6_LPBIG_OFFBIG", have_LPBIG_OFFBIG, 1 },
#else
	{ "_POSIX_V6_LPBIG_OFFBIG", 0, 0 },
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
find_progenv(const char *name, const char **alt_path)
{
	const struct map *rv;

	rv = in_word_set(name);
	if (rv != NULL) {
		if (rv->valid) {
			*alt_path = rv->alt_path;
			return 1;
		}
		return -1;
	}
	return 0;
}