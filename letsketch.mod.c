#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
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
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x559ff6a2, "__hid_register_driver" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x854c895b, "input_event" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf4a27a83, "_dev_warn" },
	{ 0xe7a097ea, "devm_input_allocate_device" },
	{ 0xd5015850, "hid_hw_close" },
	{ 0xb8c34d34, "hid_hw_open" },
	{ 0x33c32a09, "hid_unregister_driver" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xbf7eeff, "usb_string" },
	{ 0xa0e4255f, "_dev_err" },
	{ 0x2afae7b8, "usb_hid_driver" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbfd1ebb6, "_dev_info" },
	{ 0xa4256e44, "hid_open_report" },
	{ 0x4e4cae3c, "devm_kmalloc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa667d240, "input_set_abs_params" },
	{ 0xc5791808, "input_alloc_absinfo" },
	{ 0xb45626f9, "input_set_capability" },
	{ 0xcf292cc7, "input_register_device" },
	{ 0xd1e91ac9, "hid_hw_start" },
	{ 0xc9d7e676, "module_layout" },
};

MODULE_INFO(depends, "hid,usbcore,usbhid");

MODULE_ALIAS("hid:b0003g*v00006161p00004D15");
