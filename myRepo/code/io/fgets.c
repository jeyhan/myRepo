#include<stdio.h>
#include<stdlib.h>

int main(void){
	FILE* fp;
	char a[8];
	if((fp = fopen("file2", "r+")) ==NULL){
		perror("Open file file2");
		exit(1);
	}

	while(fgets(a, 8, fp))
		printf("%s",a);
}
