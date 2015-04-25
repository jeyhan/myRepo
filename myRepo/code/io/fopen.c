#include<stdio.h>

int main()
{
	int state = 0;
	char *buf[100];
	FILE *fp = fopen("file1.txt", "r");
	if(fp != NULL){
		printf("Open success!\n");
	}
	else{
		fputs("Error open file file1.txt\n",stderr);
	}
	if(fp != NULL){
		state = fclose(fp);
		if(state != EOF)
                	printf("Close success!\n");
        	else
                	printf("Close unsuccess!\n");
	}

}
