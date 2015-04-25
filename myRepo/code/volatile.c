#include<stdio.h>
volatile unsigned char recv;
volatile unsigned char send;

unsigned char buf[3];
int main(){
	buf[0] = recv;
	buf[1] = recv;
	buf[2] = recv;
	buf[3] = recv;
	send = ~buf[0];
	send = ~buf[1];
	send = ~buf[2];

	return 0;
}
