#include<stdio.h>
#define HASH_HASH # ## #
#define STR(s)	#s
#define CONCAT(a, b) a##b
#define showlist(...) printf(#__VA_ARGS__)
#define report(test, ...) ((test)? printf(#test):printf(__VA_ARGS__))
int main(){

	FILE* s;
	int ab = 1234,x = 12, y=34;
	s = fopen("haha.txt","w+");
	fputs(STR(strncmp("ab\"c\0d","abc",'\4"')==0) STR(: @\n),s);
	fclose(s);
	printf("%d\n", CONCAT(a,b));
	showlist(The First, second, and thrid items.);
	report(x>y, "x is %d but y is %d\n", x, y);
	printf(__FILE__);
	printf("\n");
	printf("%d\n",__LINE__);
	return 0;
}
