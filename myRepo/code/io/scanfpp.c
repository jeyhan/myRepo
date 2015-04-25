#include<stdio.h>

int main()
{
	int day, year, month;
	char monthname[10];
	char line[100];

	while(fgets(line, sizeof line, stdin) > 0)
	{
	if(sscanf(line,"%d %s %d",&day,monthname,&year)==3)
		printf("valid: %s\n",line);
	else if(sscanf(line,"%d/%d/%d",&year,&month,&day)==3)
		printf("valid: %s\n",line);
	else
		printf("invalid: %s\n",line);
	}
}
