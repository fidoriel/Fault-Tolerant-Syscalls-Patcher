obj-m := overwrite.o print.o
overwrite-y :=  main.o kln_patch.o
print-y :=  print_table.o kln_patch.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) $(KBUILD_OPTIONS) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
