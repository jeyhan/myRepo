#include<stdio.h>
#include<time.h>
#include<string.h>
int main()
{
	FILE *fp;
	int i = 0, rd = 0, j=0;
	time_t timer = 0;	// = time(NULL);
	struct tm *tl = NULL;	// = localtime(&timer);
	char buf[50] = {0};
	char num[8] = {0};
	if((fp = fopen("test.txt", "a+")) == NULL)
		perror("Open/Create test.txt");

	fseek(fp, 0,SEEK_END);
	fseek(fp, -50,SEEK_CUR);
	rd = fread(buf, 1, 50, fp);

	while(rd >= 0 && buf[--rd - 1] != '\n');
	while(buf[rd + j] >= '0' && buf[rd + j] <= '9')
	{
		num[j] = buf[rd + j];
		j++;
	}
	j = 0;
	while(num[j] != '\0')
		 i=i*10+(num[j++]-'0');
//	printf("%d\n",i);
	while(++i){
		sleep(1);
		timer = time(NULL);
		tl = localtime(&timer);
	        fprintf(fp, "%d\t%d-%d-%d\t%d:%d:%d\n",
			i,
			tl->tm_year + 1900,
			tl->tm_mon,
			tl->tm_mday,
			tl->tm_hour,
			tl->tm_min,
			tl->tm_sec);
		printf("%d\t%d-%d-%d\t%d:%d:%d\n",
                        i,
                        tl->tm_year,
                        tl->tm_mon,
                        tl->tm_mday,
                        tl->tm_hour,
                        tl->tm_min,
                        tl->tm_sec);

		fflush(fp);
	}
	fclose(fp);
	return 0;
}
