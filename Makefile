# Define the name of the module (without the .ko extension)
obj-m := sample_module.o

# Path to the kernel build directory
KDIR := /lib/modules/$(shell uname -r)/build

# Current directory
PWD := $(shell pwd)

# Default target: Build the module
all:
	make -C $(KDIR) M=$(PWD) modules

# Clean target: Remove compiled files
clean:
	make -C $(KDIR) M=$(PWD) clean
