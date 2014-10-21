cmd_drivers/video/logo/logo_linux_mono.o := arm-none-linux-gnueabi-gcc -Wp,-MD,drivers/video/logo/.logo_linux_mono.o.d  -nostdinc -isystem /home/leisure/tool/arm-2009q1/bin/../lib/gcc/arm-none-linux-gnueabi/4.3.3/include -I/home/leisure/source/recat-linux/linux-3.3/arch/arm/include -Iarch/arm/include/generated -Iinclude  -include /home/leisure/source/recat-linux/linux-3.3/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-davinci/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Os -marm -fno-omit-frame-pointer -mapcs -mno-sched-prolog -mabi=aapcs-linux -mno-thumb-interwork -D__LINUX_ARM_ARCH__=5 -march=armv5te -mtune=arm9tdmi -msoft-float -Uarm -fno-stack-protector -fno-omit-frame-pointer -fno-optimize-sibling-calls -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(logo_linux_mono)"  -D"KBUILD_MODNAME=KBUILD_STR(logo_linux_mono)" -c -o drivers/video/logo/.tmp_logo_linux_mono.o drivers/video/logo/logo_linux_mono.c

source_drivers/video/logo/logo_linux_mono.o := drivers/video/logo/logo_linux_mono.c

deps_drivers/video/logo/logo_linux_mono.o := \
  include/linux/linux_logo.h \
    $(wildcard include/config/fb/logo/extra.h) \
  include/linux/init.h \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/hotplug.h) \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc4.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  /home/leisure/source/recat-linux/linux-3.3/arch/arm/include/asm/types.h \
  include/asm-generic/int-ll64.h \
  arch/arm/include/generated/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/linux/posix_types.h \
  include/linux/stddef.h \
  /home/leisure/source/recat-linux/linux-3.3/arch/arm/include/asm/posix_types.h \

drivers/video/logo/logo_linux_mono.o: $(deps_drivers/video/logo/logo_linux_mono.o)

$(deps_drivers/video/logo/logo_linux_mono.o):
