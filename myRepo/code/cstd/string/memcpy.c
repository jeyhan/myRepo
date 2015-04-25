#include<string.h>
#include<stdio.h>
int main()
{
	char *a="hello world!";
	char b[20];
	char c[20];
	memcpy(b,a,strlen(a));
	b[strlen(a)]='\0';
	printf("%s\n",b);
	memmove(c,a,strlen(a));
//	c[strlen(a)]='\0';
	printf("%s\n",c);
	printf("%d %d %d\n",strlen(a),strlen(b),strlen(c));
}
