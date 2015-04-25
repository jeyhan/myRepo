#include<stdio.h>

int main()
{
	printf("%#x\n", 0xff);
        printf("%x\n", 0xff);
	printf("-%10s-\n", "hello");
        printf("-%-*s-\n", 10, "hello");
        printf("%.4s\n", "hello");
        printf("-%-6.4d-\n", 100);
	printf("%hhd\n", 255);
	printf("%c\n", 512+'A');
	printf("%p\n",main);
	printf("%%\n");
}
