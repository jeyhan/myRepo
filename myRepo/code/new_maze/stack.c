#include"stack.h"
static item_t stack[512];
static int top = -1;

void push(item_t c)
{
	stack[++top] = c;
}

item_t pop(void)
{
	return stack[top--];
}
int is_empty()
{
	return top == -1;
}
