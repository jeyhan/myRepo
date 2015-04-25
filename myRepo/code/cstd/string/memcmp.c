#include<string.h>
#include<stdio.h>
int main()
{
	char *a="hahahanjinwei";
	char *b="hahawutonghui";
	char *c="HAHAWUTONGHUI";
	if(strcmp(a,b) < 0)
	{
		printf("a is smaller than b\n");
	}
	if(strncmp(a,b,4) == 0)
		printf("a is equal to b first 4 bytes\n");
	if(memcmp(a,b,4) == 0)
		printf("a is same to b in memory 4 byte\n");
	if(strcasecmp(b,c) == 0)
		printf("ignore case,b == c\n");
}
