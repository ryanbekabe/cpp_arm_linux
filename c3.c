#include <stdio.h>
#include <stdlib.h>
int main()
{
	char c[1000];
	FILE *fptr;
	if ((fptr = fopen("/proc/cpuinfo","r")) == NULL){
		printf("Gagal membuka file.");
		exit(1);
	}
	fscanf(fptr,"%[^\n]", c);
	printf("Data dari file:\n%s", c);
	fclose(fptr);
	return 0;
}

