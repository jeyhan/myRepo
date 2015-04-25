#include<stdio.h>
#include<stdlib.h>
int main()
{

	FILE *fp;
	if( (fp = fopen("file2", "r+")) == NULL){
		perror("open file file2");
		exit(1);
	}
	if(fseek(fp, 10, SEEK_SET) != 0){
		perror("Seek file file2");
		exit(1);
	}
	fputc('K',fp);
	fclose(fp);
	return 0;
}
