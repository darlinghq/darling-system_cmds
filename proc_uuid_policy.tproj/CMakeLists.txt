project(system_cmds-proc_uuid_policy)

add_darling_executable(proc_uuid_policy
	proc_uuid_policy.c
)

install(TARGETS proc_uuid_policy DESTINATION libexec/darling/usr/bin)

install(FILES proc_uuid_policy.1 DESTINATION libexec/darling/usr/share/man/man1)
