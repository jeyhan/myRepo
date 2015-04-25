#include<stdio.h>
#include<time.h>

int main()
{
	time_t timer;
	struct tm *tl = NULL;
	timer = time(NULL);
	tl = localtime(&timer);
	printf("%d\n",tl->tm_year+1900);
}
