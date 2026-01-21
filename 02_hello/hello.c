#include<linux/module.h>
#include<linux/init.h>

static int my_init(void)
{
	printk("hello - Hello Kernel Module\n");
	return 0;
}

static void my_exit(void)
{
	printk("hello - Good Bye Kernel Module\n");
}

module_init(my_init);
module_exit(my_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Rakesh Malepu <edeveloper.rakesh@gmail.com>");
MODULE_DESCRIPTION("This is a simple Hello Kernel Module");
