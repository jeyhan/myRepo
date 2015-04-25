#include<stdio.h>
int main(){
	int a = 0x12345678;
	int *p=&a;
	char *t = (char*)p;
	if(*t == 0x12)
		printf("%x\tbig endian\n",*t);
	else if(*t == 0x78)
		printf("%x\tlittle endian\n",*t);
	return 0;
}
