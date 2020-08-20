/*
 * Copyright is disclaimed as to the contents of this file.
 *
 * $FreeBSD: src/usr.bin/getconf/confstr.gperf,v 1.5 2003/08/22 17:32:07 markm Exp $
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
struct map { const char *name; int key; int valid; };
static const struct map wordlist[] = {
#ifdef _CS_PATH
	{ "PATH", _CS_PATH, 1 },
#else
	{ "PATH", 0, 0 },
#endif
#ifdef _CS_POSIX_V6_ILP32_OFF32_CFLAGS
	{ "POSIX_V6_ILP32_OFF32_CFLAGS", _CS_POSIX_V6_ILP32_OFF32_CFLAGS, 1 },
#else
	{ "POSIX_V6_ILP32_OFF32_CFLAGS", 0, 0 },
#endif
#ifdef _CS_POSIX_V6_ILP32_OFF32_LDFLAGS
	{ "POSIX_V6_ILP32_OFF32_LDFLAGS", _CS_POSIX_V6_ILP32_OFF32_LDFLAGS, 1 },
#else
	{ "POSIX_V6_ILP32_OFF32_LDFLAGS", 0, 0 },
#endif
#ifdef _CS_POSIX_V6_ILP32_OFF32_LIBS
	{ "POSIX_V6_ILP32_OFF32_LIBS", _CS_POSIX_V6_ILP32_OFF32_LIBS, 1 },
#else
	{ "POSIX_V6_ILP32_OFF32_LIBS", 0, 0 },
#endif
#ifdef _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS
	{ "POSIX_V6_ILP32_OFFBIG_CFLAGS", _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS, 1 },
#else
	{ "POSIX_V6_ILP32_OFFBIG_CFLAGS", 0, 0 },
#endif
#ifdef _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS
	{ "POSIX_V6_ILP32_OFFBIG_LDFLAGS", _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS, 1 },
#else
	{ "POSIX_V6_ILP32_OFFBIG_LDFLAGS", 0, 0 },
#endif
#ifdef _CS_POSIX_V6_ILP32_OFFBIG_LIBS
	{ "POSIX_V6_ILP32_OFFBIG_LIBS", _CS_POSIX_V6_ILP32_OFFBIG_LIBS, 1 },
#else
	{ "POSIX_V6_ILP32_OFFBIG_LIBS", 0, 0 },
#endif
#ifdef _CS_POSIX_V6_LP64_OFF64_CFLAGS
	{ "POSIX_V6_LP64_OFF64_CFLAGS", _CS_POSIX_V6_LP64_OFF64_CFLAGS, 1 },
#else
	{ "POSIX_V6_LP64_OFF64_CFLAGS", 0, 0 },
#endif
#ifdef _CS_POSIX_V6_LP64_OFF64_LDFLAGS
	{ "POSIX_V6_LP64_OFF64_LDFLAGS", _CS_POSIX_V6_LP64_OFF64_LDFLAGS, 1 },
#else
	{ "POSIX_V6_LP64_OFF64_LDFLAGS", 0, 0 },
#endif
#ifdef _CS_POSIX_V6_LP64_OFF64_LIBS
	{ "POSIX_V6_LP64_OFF64_LIBS", _CS_POSIX_V6_LP64_OFF64_LIBS, 1 },
#else
	{ "POSIX_V6_LP64_OFF64_LIBS", 0, 0 },
#endif
#ifdef _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS
	{ "POSIX_V6_LPBIG_OFFBIG_CFLAGS", _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS, 1 },
#else
	{ "POSIX_V6_LPBIG_OFFBIG_CFLAGS", 0, 0 },
#endif
#ifdef _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS
	{ "POSIX_V6_LPBIG_OFFBIG_LDFLAGS", _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS, 1 },
#else
	{ "POSIX_V6_LPBIG_OFFBIG_LDFLAGS", 0, 0 },
#endif
#ifdef _CS_POSIX_V6_LPBIG_OFFBIG_LIBS
	{ "POSIX_V6_LPBIG_OFFBIG_LIBS", _CS_POSIX_V6_LPBIG_OFFBIG_LIBS, 1 },
#else
	{ "POSIX_V6_LPBIG_OFFBIG_LIBS", 0, 0 },
#endif
#ifdef _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS
	{ "POSIX_V6_WIDTH_RESTRICTED_ENVS", _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS, 1 },
#else
	{ "POSIX_V6_WIDTH_RESTRICTED_ENVS", 0, 0 },
#endif
#ifdef _CS_POSIX_V6_ILP32_OFF32_CFLAGS
	{ "_POSIX_V6_ILP32_OFF32_CFLAGS", _CS_POSIX_V6_ILP32_OFF32_CFLAGS, 1 },
#else
	{ "_POSIX_V6_ILP32_OFF32_CFLAGS", 0, 0 },
#endif
#ifdef _CS_POSIX_V6_ILP32_OFF32_LDFLAGS
	{ "_POSIX_V6_ILP32_OFF32_LDFLAGS", _CS_POSIX_V6_ILP32_OFF32_LDFLAGS, 1 },
#else
	{ "_POSIX_V6_ILP32_OFF32_LDFLAGS", 0, 0 },
#endif
#ifdef _CS_POSIX_V6_ILP32_OFF32_LIBS
	{ "_POSIX_V6_ILP32_OFF32_LIBS", _CS_POSIX_V6_ILP32_OFF32_LIBS, 1 },
#else
	{ "_POSIX_V6_ILP32_OFF32_LIBS", 0, 0 },
#endif
#ifdef _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS
	{ "_POSIX_V6_ILP32_OFFBIG_CFLAGS", _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS, 1 },
#else
	{ "_POSIX_V6_ILP32_OFFBIG_CFLAGS", 0, 0 },
#endif
#ifdef _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS
	{ "_POSIX_V6_ILP32_OFFBIG_LDFLAGS", _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS, 1 },
#else
	{ "_POSIX_V6_ILP32_OFFBIG_LDFLAGS", 0, 0 },
#endif
#ifdef _CS_POSIX_V6_ILP32_OFFBIG_LIBS
	{ "_POSIX_V6_ILP32_OFFBIG_LIBS", _CS_POSIX_V6_ILP32_OFFBIG_LIBS, 1 },
#else
	{ "_POSIX_V6_ILP32_OFFBIG_LIBS", 0, 0 },
#endif
#ifdef _CS_POSIX_V6_LP64_OFF64_CFLAGS
	{ "_POSIX_V6_LP64_OFF64_CFLAGS", _CS_POSIX_V6_LP64_OFF64_CFLAGS, 1 },
#else
	{ "_POSIX_V6_LP64_OFF64_CFLAGS", 0, 0 },
#endif
#ifdef _CS_POSIX_V6_LP64_OFF64_LDFLAGS
	{ "_POSIX_V6_LP64_OFF64_LDFLAGS", _CS_POSIX_V6_LP64_OFF64_LDFLAGS, 1 },
#else
	{ "_POSIX_V6_LP64_OFF64_LDFLAGS", 0, 0 },
#endif
#ifdef _CS_POSIX_V6_LP64_OFF64_LIBS
	{ "_POSIX_V6_LP64_OFF64_LIBS", _CS_POSIX_V6_LP64_OFF64_LIBS, 1 },
#else
	{ "_POSIX_V6_LP64_OFF64_LIBS", 0, 0 },
#endif
#ifdef _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS
	{ "_POSIX_V6_LPBIG_OFFBIG_CFLAGS", _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS, 1 },
#else
	{ "_POSIX_V6_LPBIG_OFFBIG_CFLAGS", 0, 0 },
#endif
#ifdef _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS
	{ "_POSIX_V6_LPBIG_OFFBIG_LDFLAGS", _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS, 1 },
#else
	{ "_POSIX_V6_LPBIG_OFFBIG_LDFLAGS", 0, 0 },
#endif
#ifdef _CS_POSIX_V6_LPBIG_OFFBIG_LIBS
	{ "_POSIX_V6_LPBIG_OFFBIG_LIBS", _CS_POSIX_V6_LPBIG_OFFBIG_LIBS, 1 },
#else
	{ "_POSIX_V6_LPBIG_OFFBIG_LIBS", 0, 0 },
#endif
#ifdef _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS
	{ "_POSIX_V6_WIDTH_RESTRICTED_ENVS", _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS, 1 },
#else
	{ "_POSIX_V6_WIDTH_RESTRICTED_ENVS", 0, 0 },
#endif
#ifdef _CS_DARWIN_USER_DIR
	{ "DARWIN_USER_DIR", _CS_DARWIN_USER_DIR, 1 },
#else
	{ "DARWIN_USER_DIR", 0, 0 },
#endif
#ifdef _CS_DARWIN_USER_TEMP_DIR
	{ "DARWIN_USER_TEMP_DIR", _CS_DARWIN_USER_TEMP_DIR, 1 },
#else
	{ "DARWIN_USER_TEMP_DIR", 0, 0 },
#endif
#ifdef _CS_DARWIN_USER_CACHE_DIR
	{ "DARWIN_USER_CACHE_DIR", _CS_DARWIN_USER_CACHE_DIR, 1 },
#else
	{ "DARWIN_USER_CACHE_DIR", 0, 0 },
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
find_confstr(const char *name, int *key)
{
	const struct map *rv;

	rv = in_word_set(name);
	if (rv != NULL) {
		if (rv->valid) {
			*key = rv->key;
			return 1;
		}
		return -1;
	}
	return 0;
}
