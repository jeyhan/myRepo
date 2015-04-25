#include<stdio.h>
#include<stdlib.h>

int main(void){
	int ch;
	//when using stdin getchar() will return only if
	//you type enter or ctrl-D.
	printf("Now system at the mode of\
\"stty cooked\"\n");

	while((ch = getchar()) != EOF)
		putchar(ch);
	printf("Now system changed to\
mode of\"stty raw\"\n");

	system("stty raw");
	ch = getchar();
	putchar(ch);
	printf("\nNow system backto cooked mode\n");
	system("stty cooked");
	return 0;

}
