
#include<stdio.h>

int a[10][10]={0};
int i=1,j=1;
int main(){
	while(i<10)
	{a[i][0]=i;a[0][i]=i;i++;}

	for(i=0;i<10;i++,putchar('\n'))
		for(j=0;j<=10;j++)
		{
			if(i&&j&&i>=j)
			printf("%d*%d=%d\t",i,j,i*j);
			if(i==0&&j!=0)
			printf("%d\t",j);
			if(i!=0&&j==0)
			printf("%d\t",i);
			if(i==0&&j==0)
			putchar('\t');
		}
}



/*



int i,j;
int main()
{
	for(i = 1 ,putchar('\t');i <= 9; i++)
		printf("%d\t",i);
	for(i = 1,putchar('\n');i <= 9; i++)
	{
		printf("%d\t",i);
		for(j = 1; j<=i; j++)
		{
			printf("%d\t",i*j);
		}
		putchar('\n');
	}
}

*/
