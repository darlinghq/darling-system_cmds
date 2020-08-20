project(system_cmds-getty)

add_darling_executable(getty
	chat.c
	init.c
	main.c
	subr.c
)

install(TARGETS getty DESTINATION libexec/darling/usr/libexec)

install(FILES getty.8 DESTINATION libexec/darling/usr/share/man/man8)

install(FILES gettytab.5 ttys.5 DESTINATION libexec/darling/usr/share/man/man5)
