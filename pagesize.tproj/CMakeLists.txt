project(system_cmds-pagesize)

install(PROGRAMS pagesize.sh DESTINATION libexec/darling/usr/bin RENAME pagesize)

install(FILES pagesize.1 DESTINATION libexec/darling/usr/share/man/man1)
