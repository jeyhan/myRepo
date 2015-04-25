#include<stdio.h>
typedef int F(void)
F f,g;		//f,g is both function
F* fp;		//fp is not function but is function pointer.
F* e(void);	//it returns a function pointer of type F.
void say_hello(const char *str)
{
	printf("Hello %s\n", str);
}

int main()
{
	void (*f)(const char *) = say_hello;
	//f is a pointer,which points to a function.
	//point to "say_hello"
	f("Guys");
	(*f)("Honey");
	return 0;
}
