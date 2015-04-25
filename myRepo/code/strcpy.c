#include<stdio.h>

mystrcpy(char *dest, const char *src)
{
	int i=0;
	for(i=0 ;src[i]!= '\0'; i++){
		dest[i] = src[i];
	}
	dest[i] = '\0';
}
int main(){
	char* src="hello";
	char dest[10];
	mystrcpy(dest, src);
	printf("%s\n",dest);
}
