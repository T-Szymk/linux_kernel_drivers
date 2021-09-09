#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int __init helloworld_init(void) {
  pr_info("Hello World!\n");
  return 0;
}

static void __exit helloworld_exit(void) {
  pr_info("End of the World\n");
}

module_init(helloworld_init);
module_exit(helloworld_exit);
MODULE_AUTHOR("Thomas Szymkowiak <thomas.szymkowiak@tuni.fi>");
MODULE_LICENSE("GPL");

