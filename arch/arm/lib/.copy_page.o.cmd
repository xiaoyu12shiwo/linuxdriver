cmd_arch/arm/lib/copy_page.o := arm-none-linux-gnueabi-gcc -Wp,-MD,arch/arm/lib/.copy_page.o.d  -nostdinc -isystem /home/leisure/tool/arm-2009q1/bin/../lib/gcc/arm-none-linux-gnueabi/4.3.3/include -I/home/leisure/source/recat-linux/linux-3.3/arch/arm/include -Iarch/arm/include/generated -Iinclude  -include /home/leisure/source/recat-linux/linux-3.3/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-davinci/include -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork  -D__LINUX_ARM_ARCH__=5 -march=armv5te -mtune=arm9tdmi -include asm/unified.h -msoft-float        -c -o arch/arm/lib/copy_page.o arch/arm/lib/copy_page.S

source_arch/arm/lib/copy_page.o := arch/arm/lib/copy_page.S

deps_arch/arm/lib/copy_page.o := \
  /home/leisure/source/recat-linux/linux-3.3/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  include/linux/linkage.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  /home/leisure/source/recat-linux/linux-3.3/arch/arm/include/asm/linkage.h \
  /home/leisure/source/recat-linux/linux-3.3/arch/arm/include/asm/assembler.h \
    $(wildcard include/config/cpu/feroceon.h) \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/smp.h) \
  /home/leisure/source/recat-linux/linux-3.3/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
    $(wildcard include/config/arm/thumb.h) \
  /home/leisure/source/recat-linux/linux-3.3/arch/arm/include/asm/hwcap.h \
  /home/leisure/source/recat-linux/linux-3.3/arch/arm/include/asm/domain.h \
    $(wildcard include/config/io/36.h) \
    $(wildcard include/config/cpu/use/domains.h) \
  /home/leisure/source/recat-linux/linux-3.3/arch/arm/include/asm/asm-offsets.h \
  include/generated/asm-offsets.h \
  /home/leisure/source/recat-linux/linux-3.3/arch/arm/include/asm/cache.h \
    $(wildcard include/config/arm/l1/cache/shift.h) \
    $(wildcard include/config/aeabi.h) \

arch/arm/lib/copy_page.o: $(deps_arch/arm/lib/copy_page.o)

$(deps_arch/arm/lib/copy_page.o):
