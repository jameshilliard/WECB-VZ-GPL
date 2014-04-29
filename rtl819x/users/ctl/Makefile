# Makefile for Data_center and TR69 software
#
# This Makefile may be run "standalone" to create native software
# for a Linux PC.
# For cross-compiling, some pre-definitions are needed,
# see "buildmips" script as an example.
# (You can still do "make clean" even if cross-compiling).

# Pseudo-targets:
#      clean -- remove all(?) created files
#      firsttime -- do clean, then initialize all subdirectories
#      update (default if .firsttime exists) -- limited rebuild
#                      suitable for typical source file changes
# With no arguments, does update (and firsttime if .firsttime does not exist)
#
# Environmental variables used:
# INSTALL_ROOT=...  where to put output files
#       If missing, uses install subdirectory (useful for development
#       on a linux PC).
#
# Output files:
#      .firsttime -- writtten after "firsttime" make
#              If missing, "update" will do "firsttime"
#      $(INSTALL_ROOT) -- important run-time files copied here,
#              and also some files for cross-module compilation.
#              (By default this is "install").

INSTALL_ROOT = $(DIR_ROMFS)
INSTALL_ROOT	?=	$(shell pwd)/install


all:
	make -C ../boa ctl_config
	if [ ! -f .firsttime ] ; then echo MUST DO FIRSTTIME BUILD FIRST; $(MAKE) firsttime; fi
	@echo DOING UPDATE
	@echo UPDATING tags file
	cd files && make wecb

romfs:
	mkdir -p $(DIR_ROMFS)/sbin
	mkdir -p $(DIR_ROMFS)/etc
	mkdir -p $(DIR_ROMFS)/lib
	mkdir -p $(DIR_ROMFS)/var/rt_conf
	mkdir -p $(DIR_ROMFS)/mnt/rt_conf
	$(ROMFSINST) files/target/wecb/bin/data_center	/sbin/data_center
	$(ROMFSINST) files/target/wecb/bin/ssd	/sbin/ssd
	$(ROMFSINST) files/target/wecb/bin/zip	/bin/zip 
	$(ROMFSINST) files/target/wecb/bin/cli	/sbin/cli 
	$(ROMFSINST) files/target/wecb/bin/system_monitor	/sbin/system_monitor 
ifeq ($(AEI_ZERO_CONF),1)
	$(ROMFSINST) files/target/wecb/bin/zero_conf    /sbin/zero_conf
endif
ifeq ($(AEI_TR69),1)
	$(ROMFSINST) files/target/wecb/bin/tr69	/sbin/tr69
	$(ROMFSINST) files/target/wecb/bin/msg	/sbin/msg
endif
	$(ROMFSINST) files/target/wecb/bin/tr69_cfg	/sbin/tr69_cfg 
	$(ROMFSINST) files/target/wecb/bin/mynetwork	/sbin/mynetwork
	$(ROMFSINST) files/target/wecb/bin/setbasemac	/sbin/setbasemac
ifeq ($(AEI_DBUS),1)
	$(ROMFSINST) files/target/wecb/lib/libdbus.so	/lib/libdbus.so
	$(ROMFSINST) files/target/wecb/lib/libdbusrecv_msg.so	/lib/libdbusrecv_msg.so
	$(ROMFSINST) files/target/wecb/lib/libdbussend_msg.so	/lib/libdbussend_msg.so
endif
	$(ROMFSINST) files/target/wecb/lib/libtr69c_dl.so	/lib/libtr69c_dl.so
	$(ROMFSINST) files/target/wecb/lib/libtslutil_dl.so	/lib/libtslutil_dl.so
	$(ROMFSINST) files/target/wecb/lib/libxml2.so.2	  /lib/libxml2.so.2	
	$(ROMFSINST) -s libxml2.so.2  /lib/libxml2.so
	$(ROMFSINST) files/target/wecb/lib/libdal.so	/lib/libdal.so
	$(ROMFSINST) files/exlib/libcrypto.so.0.9.8	/lib/libcrypto.so.0.9.8
	$(ROMFSINST) files/exlib/libssl.so.0.9.8	/lib/libssl.so.0.9.8
	$(ROMFSINST) -s libssl.so.0.9.8	/lib/libssl.so
	$(ROMFSINST) -s libcrypto.so.0.9.8	/lib/libcrypto.so
	$(ROMFSINST) files/target/wecb/etc/protype.xml	/etc/protype.xml
	$(ROMFSINST) files/target/wecb/etc/cfg.xml	/etc/cfg.xml
	$(ROMFSINST) files/target/wecb/etc/instoid.lst	/etc/instoid.lst

firsttime:  clean
	echo Did first time inits >.firsttime
	@echo DONE with firsttime

clean:
	@echo DOING CLEAN
	-rm -rf install tags .firsttime
	-find . -name 'junk*' -exec rm -rf '{}' ';'
	-find . -name '.deps' -exec rm -rf '{}' ';'
	-find . -name '.dirstamp' -exec rm -rf '{}' ';'
	-find . -name '.obj' -exec rm -rf '{}' ';'
	-find . -name '.moc' -exec rm -rf '{}' ';'
	-find . -name '.ui' -exec rm -rf '{}' ';'
	-find . -name '.rnd' -exec rm -rf '{}' ';'
	-find . -name '.*.swp' -exec rm -rf '{}' ';'
	-find . -name '*.log' -exec rm -rf '{}' ';'
	-(cd files && $(MAKE) clean PLAT=wecb)
	@echo All cleaned
