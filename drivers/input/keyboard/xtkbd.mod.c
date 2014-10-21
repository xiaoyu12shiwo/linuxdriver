#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x6b664b27, "module_layout" },
	{ 0x8c6df5ff, "__serio_register_driver" },
	{ 0x27e1a049, "printk" },
	{ 0xe4cbe4a7, "input_event" },
	{ 0x5c17e671, "kmalloc_caches" },
	{ 0xbc22bf57, "input_free_device" },
	{ 0xfd38411b, "input_register_device" },
	{ 0x70cefced, "serio_open" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x9d669763, "memcpy" },
	{ 0xb81960ca, "snprintf" },
	{ 0x29b4fd2a, "input_allocate_device" },
	{ 0x8dc03191, "kmem_cache_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xc138fe88, "input_unregister_device" },
	{ 0xe647b705, "dev_set_drvdata" },
	{ 0x72239d7d, "serio_close" },
	{ 0x4e0fc1d6, "dev_get_drvdata" },
	{ 0xa424976, "serio_unregister_driver" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("serio:ty00pr*id*ex*");
