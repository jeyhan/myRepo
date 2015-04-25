#include<stdio.h>

const int A = 10;	//read only@.rodata as "Hello World %d\n"
			//.rodata always combined with .text.
			//must be inited at first of defining.
int a = 20;		//global.data
static int b = 30;	//local.data It didnot in a function,
			//cannot processed by linker.
			//can only used in this object file.
int c;			//.bss cause no init

int main(void){
	static int a = 40;//.data and .bss belong to same segment
	//malloc and free staticly.
	char b[]="Hello World";
	//writed in code.
	register int c = 50;
	//
	printf("Hello World %d\n",c);
		//string here is a kind of rodata

	return 0;
}
