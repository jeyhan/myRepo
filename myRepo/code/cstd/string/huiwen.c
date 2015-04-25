#include<stdio.h>
#include<string.h>
int judge()
{
	char a[50];
	gets(a);
	int i=0;
	const int l = strlen(a);
 	while(i<l/2)
	{

		if(a[i]!=a[l-1-i]) return -1;
		i++;
	}
	return 1;
}
int main(){

	if(judge()>0)
		printf("It is huiwen\n");
	else
		printf("It is not huiwen\n");
}
