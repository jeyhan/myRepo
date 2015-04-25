#include<stdio.h>
#include<string.h>

int main(){
	char str[] = "root:x::0:root:/root:/bin/bash:";
	char *token;

	token = strtok(str, ":");
	//first call of strtok needs pass str as first argu
	printf("%s\n", token);
	while((token = strtok(NULL, ":"))!= NULL)
	//then NULL is enough in other call
	//strtok will remember its local in string.
	//definitly by a static pointer.
		printf("%s\n", token);
	return 0;
}
