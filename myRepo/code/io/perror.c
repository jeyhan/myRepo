#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
int main()
{
	FILE* fp = fopen("abcde.txt", "r");
	if(fp == NULL){
		perror("Open file abcde.txt");
		printf("errno is %d\n",errno);
		printf("error: %s\n",strerror(errno));
		exit(1);
	}
	return 0;
}
