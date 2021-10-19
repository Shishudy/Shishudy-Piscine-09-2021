ifconfig -a | awk '/ether/' | cut -f 2 -d' '
