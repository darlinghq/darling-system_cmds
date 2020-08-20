project(system_cmds-dynamic_pager)

add_compile_definitions(
	NO_DIRECT_RPC
)

add_darling_executable(dynamic_pager
	dynamic_pager.c
)

target_link_libraries(dynamic_pager
	SystemConfiguration
	CoreFoundation
)

install(TARGETS dynamic_pager DESTINATION libexec/darling/sbin)

install(FILES dynamic_pager.8 DESTINATION libexec/darling/usr/share/man/man8)

#install(FILES com.apple.dynamic_pager.plist DESTINATION libexec/darling/System/Library/LaunchDaemons)
