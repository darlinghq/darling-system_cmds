project(system_cmds-atrun)

include_directories(
	${CMAKE_CURRENT_SOURCE_DIR}/../at.tproj
)

add_compile_definitions(
	DAEMON_UID=1
	DAEMON_GID=1
)

add_darling_executable(atrun
	atrun.c
)

install(TARGETS atrun DESTINATION libexec/darling/usr/libexec)

install(FILES atrun.8 DESTINATION libexec/darling/usr/share/man/man8)

install(FILES com.apple.atrun.plist DESTINATION libexec/darling/System/Library/LaunchDaemons)
