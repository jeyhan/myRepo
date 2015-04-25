#include<stdio.h>

int main()
{
	char *str = "25 Dec 1988";
	char str1[50];
	int year, day, month;
	char monthname[20];

	sscanf(str, "%d %s %d", &day, monthname, &year);
	printf("%s\ninput year/month/day\n", str);

	scanf("%d/%d/%d", &year, &month, &day);

        sprintf(str1, "%d %d %d", day, month, year);
        printf("%s\n", str1);

}
