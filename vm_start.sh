qemu-system-x86_64 \
    -hda syscall_testarea_10.qcow2 \
    -m 2048 \
    -virtfs local,id=myfs,path=$(pwd),security_model=passthrough,mount_tag=code \
    -nographic \
    -netdev user,id=net0 \
    -device e1000,netdev=net0

# mount after boot with
# mkdir -p /code
# mount -t 9p -o trans=virtio code /code

# network
# ip link set ens4 up
# dhclient ens4

# module
# insmod overwrite.ko
# rmmod overwrite

# clang-format -i **/*.c **/*.h
