project(system_cmds-wait4path)

add_darling_executable(wait4path
	wait4path.c

	../gen/wait4path/x86_64/darwin_version.c
)

install(TARGETS wait4path DESTINATION libexec/darling/bin)

install(FILES wait4path.1 DESTINATION libexec/darling/usr/share/man/man1)
