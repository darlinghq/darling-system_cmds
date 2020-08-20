project(system_cmds-zic)

add_darling_executable(zic
	ialloc.c
	scheck.c
	zic.c
)

install(TARGETS zic DESTINATION libexec/darling/usr/sbin)

install(FILES zic.8 DESTINATION libexec/darling/usr/share/man/man8)
