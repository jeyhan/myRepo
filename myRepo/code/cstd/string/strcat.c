#include<string.h>
#include<stdio.h>

int main()
{
	char x[25]="hanjin";
	char *y="weihuihui";
//	strcat(x,y);
	strncat(x,y,9);
	printf("%s\n",x);

}
