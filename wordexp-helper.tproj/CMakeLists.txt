project(system_cmds-wordexp-helper)

add_darling_executable(wordexp-helper
	wordexp-helper.c
)

install(TARGETS wordexp-helper DESTINATION libexec/darling/usr/lib/system)
