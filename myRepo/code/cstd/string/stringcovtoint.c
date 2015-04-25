#include<stdio.h>
#include<string.h>
int trans(char *a)
{
	int i=0;
	while(a[i]!='\0')
	{
		if(a[i] < '0' || a[i] > '9'||a[0]=='0')
		{
			printf("Wrong input!\n");
			return -1;
		}
		if(a[i] > '0' && a[i] <= '9')
			a[i] = '9'+'0'-a[i]+1;
		i++;
	}
	return 1;
}
int toint(char *a)
{
	int i=0,sum=0;
	int l=strlen(a);
	for(i==0;i<l;i++)
		sum=a[i]-'0'+sum*10;
	return sum;
}


int main(void)
{
	char a[50];
	char b[50];
	int sum;
	scanf("%s %s",a,b);
	trans(a);
	trans(b);
	sum=toint(a)+toint(b);;
	printf("%d\n",sum);


}
