#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x6b664b27, "module_layout" },
	{ 0x68c753cf, "device_remove_file" },
	{ 0x98082893, "__copy_to_user" },
	{ 0x97255bdf, "strlen" },
	{ 0x62b72b0d, "mutex_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdca4947f, "misc_register" },
	{ 0xd627480b, "strncat" },
	{ 0x2700b38a, "mutex_lock_interruptible" },
	{ 0xe16b893b, "mutex_lock" },
	{ 0x3bdf35c3, "noop_llseek" },
	{ 0x9e185b38, "device_create_file" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0xb81960ca, "snprintf" },
	{ 0x6ebb041c, "misc_deregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

