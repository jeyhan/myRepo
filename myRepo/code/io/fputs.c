#include<stdio.h>
#include<stdlib.h>

int main(void){
	FILE* fp;
	char *a = "hanjinwei is learning c\n";
	if((fp = fopen("file2", "w")) ==NULL){
		perror("Open file file2");
		exit(1);
	}

	fputs(a, fp);
}
