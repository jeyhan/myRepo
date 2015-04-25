#include<stdio.h>
#include<stdlib.h>

int main()
{
	char *a = "111111111222222222222222";
	int ans, ans1;
	ans = atoi(a);
	ans1 = strtol(a, (char **)NULL, 10);
	perror("strtol");
	printf("%d %d\n",ans, ans1);
}
