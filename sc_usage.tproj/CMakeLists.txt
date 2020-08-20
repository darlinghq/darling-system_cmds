project(system_cmds-sc_usage)

add_darling_executable(sc_usage
	sc_usage.c
)

target_link_libraries(sc_usage
	util
	ncurses
)

install(TARGETS sc_usage DESTINATION libexec/darling/usr/bin)

install(FILES sc_usage.1 DESTINATION libexec/darling/usr/share/man/man1)
