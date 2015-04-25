
typedef void (*sort)(int*);

int (*(*fp)(void *))[10];
//fp is a pointer first,point to T1
typedef int (*T1(void *))[10];
T1 *fp;
//T1 is a function type,return T2,(void*) is a arg.
typedef int (*T2)[10];
typedef T2 T1(void*);
T1 *fp;
//T2 is a pointer,cause is binding with the star,
//pointing to a array.
typedef int T3[10];
typedef T3 *T2;
typedef T2 T1(void*);
T1 *fp;


