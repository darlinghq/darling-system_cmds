project(system_cmds-trace)

add_darling_executable(trace
	trace.c
)

target_link_libraries(trace
	util
)

install(TARGETS trace DESTINATION libexec/darling/usr/bin)

install(FILES trace.1 DESTINATION libexec/darling/usr/share/man/man1)
