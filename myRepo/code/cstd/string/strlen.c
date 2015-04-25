#include<stdio.h>
#include<string.h>

int main()
{
	char *a="hello world!";
	char b[7] = "hello";
	printf("%d\n",strlen(a));
	printf("%d\n",strlen(b));	//dangrous,why?
	//over bound?

}
