#include<stdio.h>
#include<math.h>
int is_prime(int x){
	int i;
	for(i=2;i<x;i++)
		if(x%i==0)
			break;
	if(i==x)
		return 1;
	else
		return 0;
}
int factorial(int x){
	if(x<0)	return -1;
	else if(x==0)
		return 1;
	else
		return factorial(x-1)*x;
}
int abs_value(int x){
	if(x<0){
		return -x;
	}else if(x>0){
		return x;
	}
}
int is_leapyear(){
	int x;
	printf("Please input a year!\n");
	scanf("%d",&x);
	if(x<=0) return -1;//error
	if(x%4==0&&x%100!=0||x%400==0)
		return 1;
	else
		return 0;

}
int is_even(int x){
	//it is a kind of predicate
	return !(x%2==0);
}

void print_day(char day){
	switch(day){
	case 'a':
	case 'b':
		printf("WeekDay!!\n");
		break;
	default:
		printf("Illegal day number!\n");
		break;
	}
}

void print_logarithm(double x){
	if(x<=0.0){
		printf("Positive number only,please.\n");
		return;
	}
	printf("The log of x is %f\n",log(x));
}

int main(void){
	int i;
	for(i=1;i<100;i++){
		if(!is_prime(i))
			continue;
		printf("%d\n",i);
	}
	return 0;
}
