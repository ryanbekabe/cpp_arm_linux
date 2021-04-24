Project C/C++ Cross Platfrom by HanyaJasa.Com - hanyajasa@gmail.com
<br>
<br>

Install GCC atau G++ (space diperlukan sekitar 106 MB) untuk Ubuntu atau WSL menggunakan perintah: 
apt install g++-arm-linux-gnueabi
<br>
Cek versi: 
arm-linux-gnueabi-g++ --version
<br>atau: 
arm-linux-gnueabi-gcc --version
<br>(Ubuntu Linaro 7.5.0-3ubuntu1 18.04) 7.5.0
<br>Copyright (C) 2017 Free Software Foundation, Inc.
<br>
<br>

Compile untuk C ARM/Android: 

```bash
arm-linux-gnueabi-gcc -static -march=armv7-a c1.c -o c1.so
```

<br>
Compile untuk C++ ARM/Android:

```bash
arm-linux-gnueabi-g++ -static -march=armv7-a cpp1.cpp -o cpp1.so
```

<br>
Compile untuk non-ARM/Desktop (Intel/AMD):

```bash
gcc cpp1.cpp -o cpp1.so
```

<br>
<br>
Contoh script prgram C/C++:
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
ID Compile sebagai: 
gcc((Ubuntu/Linaro 7.5.0-3ubuntu1~18.04) 7.5.0)[executable ARM-32]
<br>

<br>----
<br>Contoh progam C: https://www.programiz.com/c-programming/examples
<br>Contoh program C++: https://www.programiz.com/cpp-programming/examples

<br>----
<br>

```git
git init
git add .
git commit -m "Last Update Commit @ 24042021_17.04"
git branch -M main
git remote add origin https://github.com/ryanbekabe/cpp_arm_linux.git
git push -u origin main
```

