project(system_cmds-latency)

add_darling_executable(latency
	latency.c
)

target_link_libraries(latency
	ncurses
	util
)

install(TARGETS latency DESTINATION libexec/darling/usr/bin)

install(FILES latency.1 DESTINATION libexec/darling/usr/share/man/man1)
