merrahal@merrahal42:~$ cat monitoring.sh
#!/bin/sh
architecture=$(uname -a)
CPU=$(lscpu | grep "Socket(s):" | awk '{printf("%d",$2)}')
vCPU=$(nproc)
usageRAM=$(free -m | grep Mem | awk '{printf("%d/%dMB", $4,$2)}')
percentRAM=$(free -m | grep Mem | awk '{printf("%.2f%%", ($4/$2)*100)}')
avlbDisk=$(df -h | grep '^/dev/' | grep -v '/boot$' | awk '{total += $4} END {print total}')
totalDisk=$(lsblk | awk '/sda5_crypt/ {print $4}')
percentDisk=$(echo " scale=2; ($avlbDisk / $totalDisk) * 100" | bc)
CPULoad=$(mpstat | grep all | awk '{printf("%.2f", 100 - $13)}')
lastboot=$(who -b | awk '$1 == "system" {print $3" "$4}')
LVM=$(if [ $(lsblk | grep "lvm" | wc -l) -eq 0 ]; then echo no; else echo yes; fi)
ConnectionsTCP=$(netstat -an | grep ESTABLISHED | wc -l)
users=$(who | awk '{print $1}' | sort -u | wc -l)
IP=$(hostname -I)
mac=$(ip link | grep "ether" | awk '{print $2}')
Sudoo=$(journalctl _COMM=sudo | grep COMMAND | wc -l)
wall "	#Architecture: $architecture
	#CPU pysical: $CPU
	#vCPU: $vCPU
	#Memory Usage: $usageRAM ($percentRAM)
	#Disk Usage: $avlbDisk/${totalDisk}b ($percentDisk%)
	#CPU load: $CPULoad
	#Last boot: $lastboot
	#LVM use: $LVM
	#Connections TCP : $ConnectionsTCP ESTABLISHED
	#User log: $users
	#Network: IP $IP ($mac)
	#Sudo: $Sudoo cmd"