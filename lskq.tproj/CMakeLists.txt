project(system_cmds-lskq)

add_darling_executable(lskq
	lskq.c
)

install(TARGETS lskq DESTINATION libexec/darling/usr/bin)

install(FILES lskq.1 DESTINATION libexec/darling/usr/share/man/man1)
