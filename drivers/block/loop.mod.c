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
	{ 0x5c17e671, "kmalloc_caches" },
	{ 0xd6dc700c, "alloc_disk" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x17a142df, "__copy_from_user" },
	{ 0x51ff0fb1, "blk_cleanup_queue" },
	{ 0x35ce54ce, "mem_map" },
	{ 0x61cb8431, "bio_alloc" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0x98082893, "__copy_to_user" },
	{ 0x97255bdf, "strlen" },
	{ 0x3a9b6fb9, "blk_unregister_region" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x6a8fcf4f, "kobject_uevent" },
	{ 0x62b72b0d, "mutex_unlock" },
	{ 0xfbcdbcbb, "vfs_fsync" },
	{ 0x92465417, "blk_queue_flush" },
	{ 0xc45ef616, "idr_for_each" },
	{ 0x91715312, "sprintf" },
	{ 0x33cbcdf2, "sysfs_remove_group" },
	{ 0x15364678, "__alloc_pages_nodemask" },
	{ 0xd259b139, "kthread_create_on_node" },
	{ 0x6ccf7bd7, "__pv_phys_offset" },
	{ 0x3426ad21, "nonseekable_open" },
	{ 0x4484e650, "splice_direct_to_actor" },
	{ 0xc3b6bf72, "invalidate_bdev" },
	{ 0x63b87fc5, "__init_waitqueue_head" },
	{ 0x5baaba0, "wait_for_completion" },
	{ 0xdca4947f, "misc_register" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x467f60fa, "set_device_ro" },
	{ 0x5f754e5a, "memset" },
	{ 0x5f03d510, "blk_alloc_queue" },
	{ 0x302c48b, "idr_destroy" },
	{ 0xdc798d37, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x33c51da6, "kthread_stop" },
	{ 0x7f4f2952, "sysfs_create_group" },
	{ 0xf4843a69, "del_gendisk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa52b1049, "blk_register_region" },
	{ 0xe16b893b, "mutex_lock" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x3bdf35c3, "noop_llseek" },
	{ 0xff8fbb68, "__splice_from_pipe" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xd255aca4, "fput" },
	{ 0xb1d5682c, "get_disk" },
	{ 0xadd11344, "contig_page_data" },
	{ 0xb2f4c083, "bio_endio" },
	{ 0x83104b42, "bio_put" },
	{ 0x80de231a, "idr_remove" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x221dfde0, "idr_pre_get" },
	{ 0xcd1b978f, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0x8dc03191, "kmem_cache_alloc" },
	{ 0x368df0c0, "__free_pages" },
	{ 0x813ed040, "idr_remove_all" },
	{ 0x78b0ad37, "bd_set_size" },
	{ 0x22beb644, "blk_queue_make_request" },
	{ 0x1000e51, "schedule" },
	{ 0x333f9612, "put_disk" },
	{ 0x2c59ab67, "wake_up_process" },
	{ 0xc2e058a4, "idr_get_new_above" },
	{ 0xb9e52429, "__wake_up" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x75a17bed, "prepare_to_wait" },
	{ 0xe5105541, "add_disk" },
	{ 0x76c22cb7, "set_user_nice" },
	{ 0x1f838dd7, "fget" },
	{ 0x8893fa5d, "finish_wait" },
	{ 0xba339e60, "ioctl_by_bdev" },
	{ 0x60f71cfa, "complete" },
	{ 0x99bb8806, "memmove" },
	{ 0x6085c34e, "set_blocksize" },
	{ 0x7194519d, "zero_fill_bio" },
	{ 0xded3de9b, "vfs_getattr" },
	{ 0xb81fd3be, "idr_find" },
	{ 0x50c71330, "idr_get_new" },
	{ 0x6ebb041c, "misc_deregister" },
	{ 0x4004c594, "flush_dcache_page" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

