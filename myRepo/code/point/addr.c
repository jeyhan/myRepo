#include<stdio.h>
void func(void* pv)
{
	char *pchar = pv;
	*pchar = 'A';
}
int main(){
	char c='X';
	func(&c);
	putchar(c);
}
