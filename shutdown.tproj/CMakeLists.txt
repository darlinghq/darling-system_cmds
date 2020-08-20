project(system_cmds-shutdown)

mig(kextmanager.defs)

include_directories(
	${CMAKE_CURRENT_BINARY_DIR}
)

add_darling_executable(shutdown
	shutdown.c

	${CMAKE_CURRENT_BINARY_DIR}/kextmanagerUser.c
)

target_link_libraries(shutdown
	bsm.0
	IOKit
)

install(TARGETS shutdown DESTINATION libexec/darling/sbin)

install(FILES shutdown.8 DESTINATION libexec/darling/usr/share/man/man8)
