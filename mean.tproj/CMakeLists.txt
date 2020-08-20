project(system_cmds-mean)

add_darling_executable(mean
	mean.c
)

target_link_libraries(mean
	util
)

install(TARGETS mean DESTINATION libexec/darling/usr/bin)
