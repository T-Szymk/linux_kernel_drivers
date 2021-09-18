#include <linux/module.h>
#include "test.h"

int double_it(int val) {
  return 2 * val;
}

MODULE_LICENSE("GPL");
