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
	{ 0x3ec8886f, "param_ops_int" },
	{ 0xb78c61e8, "param_ops_bool" },
	{ 0x8c6df5ff, "__serio_register_driver" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x1fc1c85, "serio_reconnect" },
	{ 0xe4cbe4a7, "input_event" },
	{ 0xa1b189f9, "ps2_handle_response" },
	{ 0x1c9d3b52, "ps2_handle_ack" },
	{ 0x5c17e671, "kmalloc_caches" },
	{ 0x7f4f2952, "sysfs_create_group" },
	{ 0x70cefced, "serio_open" },
	{ 0xdc798d37, "__mutex_init" },
	{ 0x132a7a5b, "init_timer_key" },
	{ 0xc08a75e4, "ps2_init" },
	{ 0x8dc03191, "kmem_cache_alloc" },
	{ 0x9994c0ca, "ps2_is_keyboard_id" },
	{ 0xab447e50, "dev_warn" },
	{ 0xe16b893b, "mutex_lock" },
	{ 0x83a476ce, "bitmap_scnlistprintf" },
	{ 0x1b015d25, "bitmap_parselist" },
	{ 0x9d669763, "memcpy" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xb9fa4633, "dev_err" },
	{ 0x7d11c268, "jiffies" },
	{ 0x31bd442e, "schedule_delayed_work" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0x72239d7d, "serio_close" },
	{ 0xe1d61c3a, "cancel_delayed_work_sync" },
	{ 0x33cbcdf2, "sysfs_remove_group" },
	{ 0xc138fe88, "input_unregister_device" },
	{ 0xbc22bf57, "input_free_device" },
	{ 0xfd38411b, "input_register_device" },
	{ 0x29b4fd2a, "input_allocate_device" },
	{ 0x69ad2f20, "kstrtouint" },
	{ 0xe647b705, "dev_set_drvdata" },
	{ 0xb81960ca, "snprintf" },
	{ 0x62b72b0d, "mutex_unlock" },
	{ 0x2700b38a, "mutex_lock_interruptible" },
	{ 0x91715312, "sprintf" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x4e0fc1d6, "dev_get_drvdata" },
	{ 0xf65d6d61, "ps2_command" },
	{ 0xa424976, "serio_unregister_driver" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("serio:ty01pr*id*ex*");
MODULE_ALIAS("serio:ty06pr*id*ex*");
MODULE_ALIAS("serio:ty02pr22id*ex*");
