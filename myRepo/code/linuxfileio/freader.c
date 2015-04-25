#include<stdio.h>
#include<string.h>
int main()
{
	FILE* fp;
	char buf[500] = {0};
	fp = fopen("test.txt","r");
	while(1)
	{
		sleep(1);
		fread(buf, 500, 1, fp);
		printf("reader:\t%s\n",buf);
		memset(buf, 0, 500);
	}
}
