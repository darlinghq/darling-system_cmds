project(system_cmds-taskpolicy)

add_darling_executable(taskpolicy
	taskpolicy.c
)

install(TARGETS taskpolicy DESTINATION libexec/darling/usr/sbin)

install(FILES taskpolicy.8 DESTINATION libexec/darling/usr/share/man/man8)
