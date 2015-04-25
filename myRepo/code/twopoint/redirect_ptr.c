#include"redirect_ptr.h"

static const char *msg[] = {"Sunday","Monday",
"Tuesday","Wedesday","Thursday","Friday","Saturday"};

void get_a_day(const char** pp)
{
	static int i = 0;
	*pp = msg[i%7];
	i++;
}
