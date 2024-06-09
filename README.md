# Sample Kernel Module

This is a basic Linux kernel module that demonstrates the minimal structure required for writing and loading a module. It includes an initialization function, a cleanup function, and support for a module parameter.

## How Kernel Modules Work

Kernel modules are pieces of code that can be dynamically loaded and unloaded into the Linux kernel. They allow developers to add functionality to the kernel without requiring a complete system reboot or recompilation of the kernel.

A kernel module typically contains:
- An **initialization function** (`sample_module_init`) that runs when the module is loaded into the kernel.
- An **exit function** (`sample_module_exit`) that runs when the module is unloaded.
- Metadata such as author, description, and license information.

Modules interact directly with kernel code and run in the same memory space as the kernel, which means they have high privileges but must also be written carefully to avoid crashing the system.

## How to Build and Use

### Build the Module
Use the included `Makefile` to compile the module:
```bash
make
```

Load the module:
```bash
sudo insmod sample_module.ko sampleParam=42
```

Check the kernel logs to ensure the module was loaded:
```bash
dmesg | tail
```

Unload the module:
```bash
sudo rmmod sample_module
```
