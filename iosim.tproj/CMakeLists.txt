project(system_cmds-iosim)

include_directories(
	../at.tproj
)

add_darling_executable(iosim
	iosim.c
)

target_link_libraries(iosim
	IOKit
	CoreFoundation
	util
)

install(TARGETS iosim DESTINATION libexec/darling/usr/bin)

install(FILES iosim.1 DESTINATION libexec/darling/usr/share/man/man1)
