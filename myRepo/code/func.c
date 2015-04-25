#include<stdio.h>
void myfunc(void)
{
	printf("%s\n", __func__);
}
int main(){
	myfunc();
	printf("%s\n",__func__);
	return 0;
}
