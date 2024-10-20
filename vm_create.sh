# arch guestfs-tools package
# list all base images with virt-builder --list

virt-builder debian-10 \
    --size 8G \
    --output $(pwd)/syscall_testarea_10.qcow2 \
    --root-password password:root \
    --format qcow2 \
    --hostname syscall_testarea \
    --network 
