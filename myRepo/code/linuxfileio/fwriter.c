#include<stdio.h>
#include<string.h>
int main()
{
	FILE* fp;
	fp = fopen("test.txt","w+");
	if(fp == NULL)	perror("cannot open test.txt");
	char buf[500] = {0};
	while(1)
	{
		sleep(1);
		strcpy(buf,"hanjinwei");
		puts(buf);
		fwrite(buf,5,1,fp);
		fflush(fp);
	}

}
