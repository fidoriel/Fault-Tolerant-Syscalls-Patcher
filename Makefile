obj-m := sys_call_patcher.o sys_call_table_print.o
sys_call_patcher-y :=  main.o kln_patch.o
sys_call_table_print-y :=  print_table.o kln_patch.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) $(KBUILD_OPTIONS) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
