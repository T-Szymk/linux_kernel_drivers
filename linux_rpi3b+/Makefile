obj-m += helloworld_rpi_3b.o

helloworld_rpi_3b-objs := test.o helloworld_char.o

KERNEL_DIR ?= /lib/modules/$(shell uname -r)/build

all:
	$(MAKE) -C $(KERNEL_DIR) \
		ARCH=arm M=$(PWD) modules
app:
	g++ -g -Wall -Wextra -Wpedantic ioctl_test.cpp -o ioctl_test

clean:
	rm -f *.o *~ core .depend .*.cmd *.ko *.mod.c *.mod
	rm -f Module.markers Module.symvers modules.order
	rm -rf .tmp_versions Modules.symvers
	rm ioctl_test
