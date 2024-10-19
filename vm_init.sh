mount -t 9p -o trans=virtio code /code
ip link set ens4 up
dhclient ens4
