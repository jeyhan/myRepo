#include<string.h>
int main()
{
	char a[20] = "hanjinwei";
	printf("%s\n",strchr(a,'n'));
	printf("%s\n",strrchr(a,'n'));
	printf("%s\n",strstr(a,"njinw"));
}
