project(system_cmds-nologin)

add_darling_executable(nologin
	nologin.c
)

install(TARGETS nologin DESTINATION libexec/darling/sbin)

install(FILES nologin.8 DESTINATION libexec/darling/usr/share/man/man8)

install(FILES nologin.5 DESTINATION libexec/darling/usr/share/man/man5)
