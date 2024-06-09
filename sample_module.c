#include <linux/module.h>

module_param(sampleParam, int, 0);

static int __init sample_module_init(void) {
    pr_info("Sample module loaded.\n");
    return 0;
}

static void __exit sample_module_exit(void) {
    pr_info("Sample module unloaded.\n");
}

module_init(sample_module_init);
module_exit(sample_module_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Your Name");
MODULE_DESCRIPTION("Description");
