project(system_cmds-vm_stat)

add_darling_executable(vm_stat
	vm_stat.c
)

install(TARGETS vm_stat DESTINATION libexec/darling/usr/bin)

install(FILES vm_stat.1 DESTINATION libexec/darling/usr/share/man/man1)
