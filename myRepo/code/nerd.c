#include<stdio.h>

int main(){
	int i = 0;
	unsigned int sum = 0;
	for(i = 0; i < 16; i++ )
	{
		sum = sum + (1U<<i);
		printf("%x %x\n",1U<<i,sum);
	}
	return 0;
}
//2014.2.5:	Linux_C		P	261/755
