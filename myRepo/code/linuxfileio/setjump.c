#include<stdio.h>
#include<setjmp.h>
jmp_buf b;
void f()
{
	longjmp(b, 1);
}
void main()
{
	if(setjmp(b))
	{
		printf("World\n");
	}else{
		printf("Hello ");
		f();
	}
}
