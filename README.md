Project C/C++ 64-bit/32-bit CrossPlatform (Intel/AMD <-> ARM/Android)<br>
By HanyaJasa.Com - hanyajasa@gmail.com
<br>
<br>

Install GCC atau G++ (space diperlukan sekitar 106 MB) untuk Ubuntu atau WSL menggunakan perintah: 
```bash
apt install g++-arm-linux-gnueabi
```
<br>
Cek versi: 

```bash
arm-linux-gnueabi-g++ --version
```

<br>atau: 

```bash
arm-linux-gnueabi-gcc --version
```

<br>
*(Ubuntu Linaro 7.5.0-3ubuntu1 18.04) 7.5.0<br>
*Copyright (C) 2017 Free Software Foundation, Inc.<br>

<br>
<br>

Compile untuk C ARM/Android: 

```bash
arm-linux-gnueabi-gcc -static -march=armv7-a c1.c -o c1.armv7.so
```

<br>
Compile untuk C++ ARM/Android:

```bash
arm-linux-gnueabi-g++ -static -march=armv7-a cpp1.cpp -o cpp1.64bitarm.so
arm-linux-gnueabi-gcc -static -march=armv7-a c5.c -o compiled/c5c.arm

```

<br>
Compile untuk non-ARM/Desktop (Intel/AMD):

```bash
gcc cpp1.cpp -o cpp1.64bitdesktop.so
```

<br>
<br>
Contoh script prgram C:
<br>

```C
#include <stdio.h>
int main()
{
	printf("Bismillah");
	return 0;
}
```

<br>
<br>
ID Compile sebagai:<br>
-gcc((Ubuntu/Linaro 7.5.0-3ubuntu1~18.04) 7.5.0)[executable ARM-32]<br>
-gcc((Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0)[shared object AMD64-64]<br>
-gcc((Debian 8.3.0-2) 8.3.0)[executable ARM-32]<br>
-gcc((GNU) 4.9.x 20150123 (prerelease))[shared object ARM-32]<br>

<br>

<br>
<br>Contoh progam C: https://www.programiz.com/c-programming/examples
<br>Contoh program C++: https://www.programiz.com/cpp-programming/examples

<br>
<br>

```git
git init
git add .
git commit -m "Last Update Commit @ 08062021_23.07"
git branch -M main
git remote add origin https://github.com/ryanbekabe/cpp_arm_linux.git
git push -u origin main
```

