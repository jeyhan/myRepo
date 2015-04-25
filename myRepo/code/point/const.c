#include<stdio.h>

int main(){
	const int *a;
	int const *b;
	//the above two have same function,
	//pointing to a const thing
	int * const c;
	//it is a const pointer,*c can be modified
	//while c cann't be modified as a const pointer
	int const * const d;
	//*d and d are both unmodifiable,as a const pointer
	//which points to a const int.

	//a const int or char cannot cast to a normal one
	//a normal one can cast to a const one.
	const char * p="abcd";
	const char str1[5]="abcd";
	char str2[5] = "abcd";
	printf(p);
	printf(str2);
	printf(str1);
	printf("abcd");
}
