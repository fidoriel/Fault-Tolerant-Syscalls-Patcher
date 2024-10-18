# arch guestfs-tools package
# list all base images with virt-builder --list

virt-builder debian-12 \
    --size 8G \
    --output $(pwd)/syscall_testarea.qcow2 \
    --root-password password:root \
    --format qcow2 \
    --hostname syscall_testarea \
    --network \
    --install build-essential \
    --install sudo \
    --install linux-headers-generic

