project(system_cmds-stackshot)

add_darling_executable(stackshot
	stackshot.c
)

install(TARGETS stackshot DESTINATION libexec/darling/usr/bin)
