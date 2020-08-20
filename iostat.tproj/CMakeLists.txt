project(system_cmds-iostat)

add_darling_executable(iostat
	iostat.c
)

target_link_libraries(iostat
	IOKit
	CoreFoundation
)

install(TARGETS iostat DESTINATION libexec/darling/usr/sbin)

install(FILES iostat.8 DESTINATION libexec/darling/usr/share/man/man8)
