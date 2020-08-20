project(system_cmds-nvram)

add_darling_executable(nvram
	nvram.c
)

target_link_libraries(nvram
	IOKit
	CoreFoundation
)

install(TARGETS nvram DESTINATION libexec/darling/usr/sbin)

install(FILES nvram.8 DESTINATION libexec/darling/usr/share/man/man8)
