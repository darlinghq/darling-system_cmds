project(system_cmds-memory_pressure)

add_darling_executable(memory_pressure
	memory_pressure.c
)

target_link_libraries(memory_pressure
	util
)

install(TARGETS memory_pressure DESTINATION libexec/darling/usr/bin)

install(FILES memory_pressure.1 DESTINATION libexec/darling/usr/share/man/man1)
