	int (*a)[10];	//it is a pointer first
	int *b[10];	//it is a array first
	//[] have higher prioity than *
	int c[10];
	a=&c;	//c is first element's addr
		//while &c is first addr of array's
