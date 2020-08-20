project(system_cmds-zprint)

include_directories(
	${CMAKE_SOURCE_DIR}/${DARLING_SDK_RELATIVE_PATH}/usr/include/mach
)

add_compile_definitions(
	KERNEL_PRIVATE
)

add_darling_executable(zprint
	zprint.c
)

target_link_libraries(zprint
	IOKit
	CoreSymbolication
	CoreFoundation
	util
)

install(TARGETS zprint DESTINATION libexec/darling/usr/bin)

install(FILES zprint.1 DESTINATION libexec/darling/usr/share/man/man1)

install(FILES zprint.lua DESTINATION libexec/darling/usr/share/recon)
