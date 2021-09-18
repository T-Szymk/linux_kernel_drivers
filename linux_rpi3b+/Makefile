
obj-m := helloworld.o

KERNEL_DIR ?= /lib/modules/$(shell uname -r)/build

all:
	$(MAKE) -C $(KERNEL_DIR) \
		ARCH=arm M=$(PWD) modules

clean:
	$(MAKE) -C $(KERNEL_DIR) \ 
	ARCH=arm M=$(PWD) clean
