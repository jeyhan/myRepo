extern char stack[512];
extern top;

void push(char c)
{
	stack[++top]=c;
}
