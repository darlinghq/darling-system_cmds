project(system_cmds-vm_purgeable_stat)

add_darling_executable(vm_purgeable_stat
	vm_purgeable_stat.c
)

target_link_libraries(vm_purgeable_stat
	util
)

install(TARGETS vm_purgeable_stat DESTINATION libexec/darling/usr/bin)

install(FILES vm_purgeable_stat.1 DESTINATION libexec/darling/usr/share/man/man1)
