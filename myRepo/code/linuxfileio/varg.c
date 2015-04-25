#include<stdio.h>

int sum(unsigned int num,...)
{
	int *p = &num + 1;
	int ret = 0;
	while(num--)
	{
		ret += *p++;
	}
	return ret;
}

void main()
{
	printf("%d\n",sum(3,16,38,53));
}
