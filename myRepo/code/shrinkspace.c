#include<stdio.h>

mystrcpy(char *dest, const char *src)
{
	int i=0,j=0;
	while(src[i]!= '\0'){
		if(src[i]=='\n'||src[i]=='\r'||
			src[i]=='\t'||src[i]==' '){
			while(src[i]=='\n'||src[i]=='\r'||
                        src[i]=='\t'||src[i]==' ')
				i++;
			dest[j++]=' ';
		}
		dest[j++]=src[i++];
	}
	dest[j]='\0';

}


int main(){
	char* src=
	"hello  	abcdef  hhee\
			hehe	ok? 	?	\
	sasfa  sfd          fd";
	char dest[50];
	printf("%s\n",src);
	mystrcpy(dest, src);
	printf("%s\n",dest);
}
