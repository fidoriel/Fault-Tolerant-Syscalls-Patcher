obj-m += overwrite.o

all:
	make -C /lib/modules/6.1.0-26-amd64/build M=$(PWD) modules

clean:
	make -C /lib/modules/6.1.0-26-amd64/build M=$(PWD) clean
