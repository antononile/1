#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL/GNU");
MODULE_AUTHOR("Kim, Security Researcher");
MODULE_DESCRIPTION("Kernal Testing Sample");
MUDULE_VERSION("1.01");
static int __init hello_start(void){
printk(KERN_INFO "Loading X modue...\n");
printk(KERN_INFO "Hello World!\n");
}
static void __exit hello_end(void){
printk(KERN_INFO "Welcome Mr Gyu...\n");
}
