obj-m := sys_call_patcher.o
sys_call_patcher-y := kln_patch.o sys_call_wrapper.o sys_call_wrapper_gen.o

EXTRA_CFLAGS += -std=gnu11

all:
	# python3 generate_sys_call_wrapper.py
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) $(KBUILD_OPTIONS) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
