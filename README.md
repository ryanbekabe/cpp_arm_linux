Install GCC atau G++ untuk Ubuntu atau WSL menggunakan perintah: 
apt install g++-arm-linux-gnueabi
<br>
Cek versi: 
arm-linux-gnueabi-g++ --version
<br>
Compile: 
arm-linux-gnueabi-gcc -static -march=armv7-a bkb.cpp -o bkb.so
<br>
Contoh script prgram C/C++:
<br>
<br>#include <stdio.h>
<br>int main()
<br>{
<br>	printf("Bismillah");
<br>	return 0;
<br>}
<br>
ID Compile sebagai: 
gcc((Ubuntu/Linaro 7.5.0-3ubuntu1~18.04) 7.5.0)[executable ARM-32]
<br>

