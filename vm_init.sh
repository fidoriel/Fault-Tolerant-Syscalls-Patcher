# every time
mount -t 9p -o trans=virtio code /code
ip link set ens4 up
dhclient ens4

# once
apt-get update -y
apt-get upgrade -y
reboot
apt-get install build-essential linux-headers-$(uname -r)


# overcommit
/etc/sysctl.conf


vm.overcommit_memory=1


sysctl -p
