#include<string.h>
#include<stdio.h>
char *getstr(void)
{
	char a[100];
	gets(a);
	return strdup(a);
}
int main()
{
	char *x=getstr();
	printf("%s\n",x);
	free(x);
}
