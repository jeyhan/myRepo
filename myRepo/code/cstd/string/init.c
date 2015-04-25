#include<stdio.h>
#include<string.h>
//void *memset(void *s, int c, size_t n);
int main()
{
	int i;
	char buf[10];
	memset(buf, 0, 10);

	for(i = 0;i<10;i++)
		printf("%x\n",*(buf + i));
}

