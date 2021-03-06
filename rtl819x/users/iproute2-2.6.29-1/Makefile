LIBDIR=$(DIR_RSDK)/lib/

# Path to db_185.h include
# DBM_INCLUDE:=/usr/include

DEFINES= -DRESOLVE_HOSTNAMES -DLIBDIR=\"$(LIBDIR)\"

#options if you have a bind>=4.9.4 libresolv (or, maybe, glibc)
#LDLIBS=-lresolv
LDLIBS=
ADDLIB=

#options for decnet
ADDLIB+=dnet_ntop.o dnet_pton.o

#options for ipx
ADDLIB+=ipx_ntop.o ipx_pton.o

#CC = gcc
HOSTCC = gcc
CCOPTS = -D_GNU_SOURCE -Os -Wstrict-prototypes -Wall
CFLAGS := $(CCOPTS) -I../include $(DEFINES) $(CFLAGS)
YACCFLAGS = -d -t -v

LDLIBS += -L../lib -lnetlink -lutil

SUBDIRS=lib ip tc misc netem genl

LIBNETLINK=../lib/libnetlink.a ../lib/libutil.a

KERNEL_VER=$(patsubst $(DIR_ROOT)/%,%,$(DIR_LINUX))
ifeq ($(KERNEL_VER),linux-2.6.30)
CFLAGS += -DKERNEL_2_6_30
endif
ifeq ($(KERNEL_VER),linux-3.10)
CFLAGS += -DKERNEL_3_10
include $(DIR_LINUX)/.config
ifeq ($(CONFIG_RTL_8198C), y)
CFLAGS += -DCONFIG_RTL_8198C
endif
endif
ifeq ($(KERNEL_VER),linux-2.6.36.x)
CFLAGS += -DKERNEL_2_6_36_X
endif

all: Config
	@set -e; \
	for i in $(SUBDIRS); \
	do $(MAKE) $(MFLAGS) -C $$i; done

Config:
	sh configure $(KERNEL_INCLUDE)

romfs:
	make romfs -C tc
ifdef CONFIG_APP_IPROUTE_IPV6
	make romfs -C ip
endif
snapshot:
	echo "static const char SNAPSHOT[] = \""`date +%y%m%d`"\";" \
		> include/SNAPSHOT.h

clean:
	rm -f cscope.*
	@for i in $(SUBDIRS) doc; \
	do $(MAKE) $(MFLAGS) -C $$i clean; done

clobber: clean
	rm -f Config

distclean: clobber

cscope:
	cscope -b -q -R -Iinclude -sip -slib -smisc -snetem -stc

.EXPORT_ALL_VARIABLES:
