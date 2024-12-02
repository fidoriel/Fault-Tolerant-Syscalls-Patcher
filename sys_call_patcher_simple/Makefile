obj-m := sys_call_patcher.o
sys_call_patcher-y :=  main.o kln_patch.o

# ccflags-y := -std=c11

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) $(KBUILD_OPTIONS) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
