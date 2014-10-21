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
	{ 0xe90050e4, "d_path" },
	{ 0x68c753cf, "device_remove_file" },
	{ 0x5c17e671, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xa675804c, "utf8s_to_utf16s" },
	{ 0x2b688622, "complete_and_exit" },
	{ 0x58db3f5, "up_read" },
	{ 0x97320df, "dequeue_signal" },
	{ 0x97255bdf, "strlen" },
	{ 0xe647b705, "dev_set_drvdata" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x76cf47f6, "__aeabi_llsl" },
	{ 0x665f710e, "filp_close" },
	{ 0xb78c61e8, "param_ops_bool" },
	{ 0xfbcdbcbb, "vfs_fsync" },
	{ 0xcc733f9f, "usb_gadget_unregister_driver" },
	{ 0x91715312, "sprintf" },
	{ 0xd259b139, "kthread_create_on_node" },
	{ 0x4e748dcd, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x63b87fc5, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5baaba0, "wait_for_completion" },
	{ 0x72aa82c6, "param_ops_charp" },
	{ 0x11a260a3, "vfs_read" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xcd63c845, "__aeabi_lasr" },
	{ 0xe384a102, "usb_speed_string" },
	{ 0x8ac9ceb, "device_register" },
	{ 0x11089ac7, "_ctype" },
	{ 0xb9fa4633, "dev_err" },
	{ 0x34be8317, "freezing_slow_path" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x89ff43f6, "init_uts_ns" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x53ba4e7c, "up_write" },
	{ 0x7bf30fdc, "down_write" },
	{ 0xd255aca4, "fput" },
	{ 0xd79b5a02, "allow_signal" },
	{ 0x9e185b38, "device_create_file" },
	{ 0x3e6ddcb0, "_dev_info" },
	{ 0x9f984513, "strrchr" },
	{ 0x8dc03191, "kmem_cache_alloc" },
	{ 0x55faf413, "put_device" },
	{ 0x1000e51, "schedule" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x2c59ab67, "wake_up_process" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x334cb27a, "usb_gadget_probe_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x69ad2f20, "kstrtouint" },
	{ 0x9d669763, "memcpy" },
	{ 0xf59f197, "param_array_ops" },
	{ 0xc338744b, "send_sig_info" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xb92a9408, "invalidate_mapping_pages" },
	{ 0xab447e50, "dev_warn" },
	{ 0xb4337041, "device_unregister" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x60f71cfa, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x99bb8806, "memmove" },
	{ 0xef8da1e2, "dev_set_name" },
	{ 0xc3fe87c8, "param_ops_uint" },
	{ 0x4e0fc1d6, "dev_get_drvdata" },
	{ 0x796d56bd, "__init_rwsem" },
	{ 0x3dfa9400, "vfs_write" },
	{ 0x42bb6454, "filp_open" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

