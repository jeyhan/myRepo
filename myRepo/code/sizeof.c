#include<stdio.h>
int main(){
	int a[12];
	printf("%d\n", sizeof a/sizeof a[0]);
	printf("%d\n",sizeof a[0]);
}
