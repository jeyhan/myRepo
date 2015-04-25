#include<stdio.h>
#include<string.h>

int main()
{
	char a[20]="hello world\n";
	memmove(a + 1, a, 13);
	char b[20]="hello world\n";
	memcpy(b + 1, b, 13);
	printf("%s\n", b);
	memmove(a - 1, a, 13);
	printf("%s\n", a);
}
