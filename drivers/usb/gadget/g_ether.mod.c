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
	{ 0x68c753cf, "device_remove_file" },
	{ 0x5c17e671, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xa675804c, "utf8s_to_utf16s" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x97255bdf, "strlen" },
	{ 0xe647b705, "dev_set_drvdata" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x3556fa05, "netif_carrier_on" },
	{ 0x3a9bf17d, "skb_clone" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x8949858b, "schedule_work" },
	{ 0x99dda6b0, "netif_carrier_off" },
	{ 0xb78c61e8, "param_ops_bool" },
	{ 0xcc733f9f, "usb_gadget_unregister_driver" },
	{ 0x91715312, "sprintf" },
	{ 0x16e0fbe9, "skb_realloc_headroom" },
	{ 0x7d11c268, "jiffies" },
	{ 0x82f42641, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe09480c6, "netif_rx" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x72aa82c6, "param_ops_charp" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xe384a102, "usb_speed_string" },
	{ 0x11089ac7, "_ctype" },
	{ 0xb9fa4633, "dev_err" },
	{ 0x27e1a049, "printk" },
	{ 0xf874ac31, "ethtool_op_get_link" },
	{ 0xf8e177d5, "free_netdev" },
	{ 0x3b366a71, "register_netdev" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xca924907, "skb_push" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0x89ff43f6, "init_uts_ns" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x1e028b27, "skb_pull" },
	{ 0x94bfb850, "dev_kfree_skb_any" },
	{ 0x9e185b38, "device_create_file" },
	{ 0x24e1307e, "flush_work_sync" },
	{ 0xb9b3a476, "skb_queue_tail" },
	{ 0xb65779e6, "skb_copy_expand" },
	{ 0x3e6ddcb0, "_dev_info" },
	{ 0x9f984513, "strrchr" },
	{ 0x8dc03191, "kmem_cache_alloc" },
	{ 0xe467167f, "__alloc_skb" },
	{ 0xd09d44ef, "eth_type_trans" },
	{ 0x41b45c92, "eth_validate_addr" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x334cb27a, "usb_gadget_probe_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x91eb3cce, "skb_dequeue" },
	{ 0xab447e50, "dev_warn" },
	{ 0xe93d1ce6, "unregister_netdev" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x77187348, "__netif_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x8436f8e3, "param_ops_ushort" },
	{ 0x38434f95, "skb_put" },
	{ 0xc6882be7, "eth_mac_addr" },
	{ 0xc3fe87c8, "param_ops_uint" },
	{ 0x5c41948d, "skb_copy_bits" },
	{ 0x4e0fc1d6, "dev_get_drvdata" },
	{ 0xd18ebc36, "dev_get_stats" },
	{ 0xe914e41e, "strcpy" },
	{ 0xd7f133e5, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

