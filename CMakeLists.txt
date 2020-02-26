project(system_cmds)

include_directories(
	${CMAKE_SOURCE_DIR}/kernel-include
	${CMAKE_SOURCE_DIR}/platform-include
	${CMAKE_SOURCE_DIR}/src/libc/stdtime/FreeBSD
	${CMAKE_SOURCE_DIR}/src/libc/include/NetBSD
	${CMAKE_SOURCE_DIR}/src/libc/include
	${CMAKE_SOURCE_DIR}/src/libc/gen
	${CMAKE_SOURCE_DIR}/src/external/corefoundation/Headers
	${CMAKE_BINARY_DIR}/src/external/corefoundation/Headers
	${CMAKE_SOURCE_DIR}/src/external/foundation/Headers
	${CMAKE_SOURCE_DIR}/src/external/IOKitUser
	${CMAKE_SOURCE_DIR}/kernel-include/iokit
	${CMAKE_SOURCE_DIR}/src/libinfo/include
	${CMAKE_SOURCE_DIR}/src/libc/darwin
	${CMAKE_SOURCE_DIR}/src/external/openpam/include
	${CMAKE_SOURCE_DIR}/src/OpenDirectory
	${CMAKE_SOURCE_DIR}/src/OpenDirectory/CFOpenDirectory
	${CMAKE_SOURCE_DIR}/src/libutil
	${CMAKE_SOURCE_DIR}/src/external/libobjc2
	${CMAKE_SOURCE_DIR}/src/ncurses/include
	${CMAKE_SOURCE_DIR}/platform-include/mach
	${CMAKE_SOURCE_DIR}/src/external/libdispatch/include
	${CMAKE_SOURCE_DIR}/src/libinfo/membership.subproj
	${CMAKE_SOURCE_DIR}/src/kernel/libsyscall/wrappers/libproc
	${CMAKE_SOURCE_DIR}/src/external/corefoundation
	${CMAKE_SOURCE_DIR}/src/external/libclosure
	${CMAKE_SOURCE_DIR}/src/launchd/liblaunch
	${CMAKE_SOURCE_DIR}/src/libinfo/nis.subproj
)

add_compile_options(
	-nostdinc
	-fPIC
	-fblocks
)

add_darling_executable(ac ac.tproj/ac.c)
add_darling_executable(accton accton.tproj/accton.c)
add_darling_executable(arch arch.tproj/arch.c)
target_link_libraries(arch CoreFoundation)
add_darling_executable(at
	at.tproj/at.c
	at.tproj/panic.c
	at.tproj/parsetime.c
	at.tproj/perm.c
)
target_compile_definitions(at PRIVATE
	-DDAEMON_UID=1
	-DDAEMON_GID=1
	-DDEFAULT_AT_QUEUE='a'
	-DDEFAULT_BATCH_QUEUE='b'
	-DPERM_PATH="/usr/lib/cron"
)
add_darling_executable(atrun atrun.tproj/atrun.c)
target_include_directories(atrun PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/at.tproj)
target_compile_definitions(atrun PRIVATE
	-DDAEMON_UID=1
	-DDAEMON_GID=1
)

# Disable until we have remote_cmds (rpc_yppasswd)
#add_darling_executable(chkpasswd
#	chkpasswd.tproj/file_passwd.c
#	chkpasswd.tproj/nis_passwd.c # rpcsvc/yp_prot.h
#	chkpasswd.tproj/od_passwd.c
#	chkpasswd.tproj/pam_passwd.c
#	chkpasswd.tproj/passwd.c
#	chkpasswd.tproj/stringops.c
#)
#target_link_libraries(chkpasswd pam.2)
#add_darling_executable(chpass _PWSCAN_WARN
#	chpass.tproj/chpass.c
#	chpass.tproj/edit.c
#	chpass.tproj/field.c
#	chpass.tproj/open_directory.c
#	chpass.tproj/pw_copy.c
#	chpass.tproj/table.c
#	chpass.tproj/util.c
#)
#target_include_directories(chpass PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/pwd_mkdb.tproj)
add_darling_executable(dmesg dmesg.tproj/dmesg.c)
add_darling_executable(dynamic_pager dynamic_pager.tproj/dynamic_pager.c)
#add_darling_executable(fs_usage fs_usage.tproj/fs_usage.c)
#target_compile_options(fs_usage PRIVATE -include dispatch/dispatch.h)
#target_link_libraries(fs_usage util) # FIXME: Also needs ktrace
#add_darling_executable(gcore compression.h
#	gcore.tproj/corefile.c
#	gcore.tproj/dyld.c
#	gcore.tproj/dyld_shared_cache.c
#	gcore.tproj/main.c
#	gcore.tproj/sparse.c
#	gcore.tproj/threads.c
#	gcore.tproj/utils.c
#	gcore.tproj/vanilla.c
#	gcore.tproj/vm.c
#)
add_darling_executable(getconf getconf.tproj/confstr.c  getconf.tproj/getconf.c  getconf.tproj/limits.c  getconf.tproj/pathconf.c  getconf.tproj/progenv.c  getconf.tproj/sysconf.c)
add_darling_executable(getty
	getty.tproj/chat.c
	getty.tproj/init.c
	getty.tproj/main.c
	getty.tproj/subr.c
)
add_darling_executable(hostinfo hostinfo.tproj/hostinfo.c)
#add_darling_executable(iostat iostat.tproj/iostat.c) # Needs IOKit
#target_compile_options(iostat PRIVATE -include errno.h)
#add_darling_executable(latency latency.tproj/latency.c) ktrace
#target_link_libraries(latency ncurses util)
add_darling_executable(login-exe
	login.tproj/login.c
	login.tproj/login_audit.c
)
set_target_properties(login-exe PROPERTIES OUTPUT_NAME "login")
target_link_libraries(login-exe pam.2 bsm.0)
target_compile_definitions(login-exe PRIVATE USE_PAM USE_BSM_AUDIT)
#add_darling_executable(lskq lskq.tproj/lskq.c) error: incomplete definition of type 'struct kevent_extinfo'
add_darling_executable(lsmp
	lsmp.tproj/lsmp.c
	lsmp.tproj/port_details.c
	lsmp.tproj/task_details.c)
#add_darling_executable(memory_pressure memory_pressure.tproj/memory_pressure.c) libdispatch
add_darling_executable(mkfile mkfile.tproj/mkfile.c)
add_darling_executable(newgrp newgrp.tproj/newgrp.c)
add_darling_executable(nologin nologin.tproj/nologin.c)
#add_darling_executable(nvram nvram.tproj/nvram.c)
#target_compile_options(nvram PRIVATE -include errno.h)
#target_link_libraries(nvram CoreFoundation)
#add_darling_executable(passwd # Disabled until we have remote_cmds (yppasswd)
#	passwd.tproj/file_passwd.c
#	passwd.tproj/nis_passwd.c rpcsvc/yp_prot.h
#	passwd.tproj/od_passwd.c open directory problems
#	passwd.tproj/pam_passwd.c
#	passwd.tproj/passwd.c
#)
#target_link_libraries(passwd pam.2)
add_darling_executable(purge purge.tproj/purge.c)
add_darling_executable(pwd_mkdb
	pwd_mkdb.tproj/pw_scan.c
	pwd_mkdb.tproj/pwd_mkdb.c
)
target_compile_definitions(pwd_mkdb PRIVATE _PW_NAME_LEN=MAXLOGNAME _PW_YPTOKEN="__YP!")
add_darling_executable(reboot reboot.tproj/reboot.c)
add_darling_executable(sa
	sa.tproj/db.c
	sa.tproj/main.c
	sa.tproj/pdb.c
	sa.tproj/usrdb.c
)
target_compile_definitions(sa PRIVATE AHZV1=64)
#add_darling_executable(sc_usage sc_usage.tproj/sc_usage.c) kernel debug
#add_darling_executable(shutdown shutdown.tproj/shutdown.c) IOKit, libbsm
add_darling_executable(sync sync.tproj/sync.c)
add_darling_executable(sysctl sysctl.tproj/sysctl.c)
#add_darling_executable(taskpolicy taskpolicy.tproj/taskpolicy.c) POSIX_SPAWN_PROC_CLAMP_NONE
#add_darling_executable(trace trace.tproj/trace.c)
#target_link_libraries(trace util)
add_darling_executable(vifs vifs.tproj/vifs.c)
add_darling_executable(vipw
	vipw.tproj/pw_util.c
	vipw.tproj/vipw.c
)
add_darling_executable(vm_stat vm_stat.tproj/vm_stat.c)
add_darling_executable(wait4path wait4path/wait4path.c)
add_darling_executable(zdump zdump.tproj/zdump.c)
add_darling_executable(zic
	zic.tproj/ialloc.c
	zic.tproj/scheck.c
	zic.tproj/zic.c
)
#add_darling_executable(zprint zprint.tproj/zprint.c) IOKit

install(TARGETS wait4path sync DESTINATION libexec/darling/bin)

install(TARGETS at arch vm_stat getconf lsmp hostinfo login-exe DESTINATION libexec/darling/usr/bin)

install(TARGETS zic ac vipw vifs sysctl zdump pwd_mkdb mkfile accton sa purge sysctl
	DESTINATION libexec/darling/usr/sbin)

install(TARGETS nologin reboot dynamic_pager dmesg DESTINATION libexec/darling/sbin)

install(TARGETS getty atrun DESTINATION libexec/darling/usr/libexec
	PERMISSIONS OWNER_EXECUTE OWNER_WRITE OWNER_READ
                    GROUP_EXECUTE GROUP_READ
		    WORLD_EXECUTE WORLD_READ
)

install(FILES pagesize.tproj/pagesize.sh DESTINATION libexec/darling/usr/bin
	RENAME pagesize
	PERMISSIONS OWNER_EXECUTE OWNER_WRITE OWNER_READ
                    GROUP_EXECUTE GROUP_READ
		    WORLD_EXECUTE WORLD_READ
)

InstallSymlink(arch ${CMAKE_INSTALL_PREFIX}/libexec/darling/usr/bin/machine)
InstallSymlink(at ${CMAKE_INSTALL_PREFIX}/libexec/darling/usr/bin/atq)
InstallSymlink(at ${CMAKE_INSTALL_PREFIX}/libexec/darling/usr/bin/atrm)
InstallSymlink(at ${CMAKE_INSTALL_PREFIX}/libexec/darling/usr/bin/batch)
InstallSymlink(chpass ${CMAKE_INSTALL_PREFIX}/libexec/darling/usr/bin/chfn)
InstallSymlink(chpass ${CMAKE_INSTALL_PREFIX}/libexec/darling/usr/bin/chsh)
InstallSymlink(reboot ${CMAKE_INSTALL_PREFIX}/libexec/darling/sbin/halt)

#install(FILES chkpasswd.tproj/chkpasswd.pam DESTINATION libexec/darling/etc/pam.d RENAME chkpasswd)
install(FILES passwd.tproj/passwd.pam DESTINATION libexec/darling/etc/pam.d RENAME passwd)
install(DIRECTORY login.tproj/pam.d DESTINATION libexec/darling/etc)

install(FILES atrun.tproj/com.apple.atrun.plist DESTINATION libexec/darling/System/Library/LaunchDaemons)

install(FILES
	arch.tproj/arch.1
	arch.tproj/machine.1
	at.tproj/at.1
	chpass.tproj/chpass.1
	fs_usage.tproj/fs_usage.1
	gcore.tproj/gcore.1
	getconf.tproj/getconf.1
	latency.tproj/latency.1
	login.tproj/login.1
	lskq.tproj/lskq.1
	lsmp.tproj/lsmp.1
	memory_pressure.tproj/memory_pressure.1
	newgrp.tproj/newgrp.1
	pagesize.tproj/pagesize.1
	passwd.tproj/passwd.1
	sc_usage.tproj/sc_usage.1
	trace.tproj/trace.1
	vm_stat.tproj/vm_stat.1
	wait4path/wait4path.1
	zprint.tproj/zprint.1

	DESTINATION libexec/darling/usr/share/man/man1
)
InstallSymlink(at.1 ${CMAKE_INSTALL_PREFIX}/libexec/darling/usr/share/man/man1/atq.1)
InstallSymlink(at.1 ${CMAKE_INSTALL_PREFIX}/libexec/darling/usr/share/man/man1/atrm.1)
InstallSymlink(at.1 ${CMAKE_INSTALL_PREFIX}/libexec/darling/usr/share/man/man1/batch.1)
InstallSymlink(chpass.1 ${CMAKE_INSTALL_PREFIX}/libexec/darling/usr/share/man/man1/chfn.1)
InstallSymlink(chpass.1 ${CMAKE_INSTALL_PREFIX}/libexec/darling/usr/share/man/man1/chsh.1)

install(FILES
	getty.tproj/gettytab.5
	getty.tproj/ttys.5
	nologin.tproj/nologin.5
	sysctl.tproj/sysctl.conf.5

	DESTINATION libexec/darling/usr/share/man/man5
)

install(FILES
	ac.tproj/ac.8
	accton.tproj/accton.8
	atrun.tproj/atrun.8
	chkpasswd.tproj/chkpasswd.8
	dmesg.tproj/dmesg.8
	dynamic_pager.tproj/dynamic_pager.8
	getty.tproj/getty.8
	hostinfo.tproj/hostinfo.8
	iostat.tproj/iostat.8
	mkfile.tproj/mkfile.8
	nologin.tproj/nologin.8
	nvram.tproj/nvram.8
	purge.tproj/purge.8
	pwd_mkdb.tproj/pwd_mkdb.8
	reboot.tproj/reboot.8
	sa.tproj/sa.8
	shutdown.tproj/shutdown.8
	sync.tproj/sync.8
	sysctl.tproj/sysctl.8
	taskpolicy.tproj/taskpolicy.8
	vifs.tproj/vifs.8
	vipw.tproj/vipw.8
	zdump.tproj/zdump.8
	zic.tproj/zic.8

	DESTINATION libexec/darling/usr/share/man/man8
)
InstallSymlink(reboot.8 ${CMAKE_INSTALL_PREFIX}/libexec/darling/usr/share/man/man8/halt.8)
