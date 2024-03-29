#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x2f398466, "module_layout" },
	{ 0x1b5889a6, "single_release" },
	{ 0xc88fae6a, "seq_read" },
	{ 0x36ede248, "seq_lseek" },
	{ 0xbc94214b, "remove_proc_entry" },
	{ 0x2c62a1ed, "proc_create" },
	{ 0x7c32d0f0, "printk" },
	{ 0x744d4841, "init_task" },
	{ 0x3350e527, "seq_printf" },
	{ 0x4df30e84, "single_open" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7241F0AB1F9CD38E84F2375");
