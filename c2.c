#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num;
	FILE *fptr;
	if ((fptr = fopen("/home/bekabe/armproject/num.txt","r")) == NULL){
		printf("Gagal membuka file.");
		exit(1);
	}
	fscanf(fptr,"%d", &num);
	printf("Datanya adalah:\n%d", num);
	fclose(fptr);
	return 0;
}

