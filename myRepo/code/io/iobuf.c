#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	char buf[20];
	printf("hello world");
//	fgets(buf, 20, stdin);	//call fgets makes fflush
	fflush(stdout);	//avoid lose data.
	_exit(0);
//	exit(1);
}
