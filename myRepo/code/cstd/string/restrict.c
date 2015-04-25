#include<stdio.h>
#include<string.h>
#include<time.h>
/*void vector_add(const int *restrict x, const int *restrict y,
 int *restrict result)*/
void vector_add(const int * x, const int *y,
 int *result)

{
	int i;
	for(i = 0; i < 64; i++)
	{
		printf("%d\n",x[i]+y[i]);
		result[i] = x[i] + y[i];
	}
}
int main()
{
	int x[64];
	int y[64];
	int result[64];
	int i;
	srand((unsigned)time(NULL));
	for(i =0; i<64; i++)
	{

//		x[i] = rand()%100;
//		y[i] = rand()%100;
		x[i] = 1;
		y[i] = 1;
	}
	vector_add(x, y, x+1);
	for(i = 0; i< 64; i++)
	{
		printf("x[%d]=%d,y[%d]=%d,result[%d]=%d\n"
		, i, x[i], i, y[i], i, x[i+1]);
	}


}
