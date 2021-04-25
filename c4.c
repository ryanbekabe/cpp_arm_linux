#include <stdio.h>
FILE *fp;
const char EOL = '\n';

//void main() //for 64bit
int main() //for arm
{
	fp = fopen("num.txt","r");
	//fp = fopen("/proc/cpuinfo","r");
	char buffer[128];
	int a[100];
	int i = 0;
	freopen("num.txt","r",stdin);
	while(scanf("%i",&a[i])==1 && buffer[i] != EOF)
		++i;
	for(int j=0; j<i; ++j)
	printf("[%i]: %i\n",j,a[j]);
	fclose(stdin);
}

