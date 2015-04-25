#include<stdio.h>

int main(){
	int a = 10, b;

	__asm__("movl %1, %%eax\n\t"	//%1 is a,cause order in consition
		"movl %%eax, %0\n\t"	//%0 is b,
		:"=r"(b)	//output
		:"r"(a)		//input
		:"%eax"		//do not use this register
		);
	printf("Result: %d, %d\n",a, b);
}
