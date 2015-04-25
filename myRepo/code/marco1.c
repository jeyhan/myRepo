#define VERSION 2
#if defined x || y || VERSION < 3
#define sh(x) printf("n" #x "=%d, or %d\n",n##x,alt[x])
#define sub_z	26
#define CONCAT(a,b) a##b
#define FOO(a,b,c,...) a##b##c##__VA_ARGS__
#define x 3
#define f(a) f(x * (a))
#undef x
#define x 2
#define g f
#define t(a) a
t(t(g)(0) + t)(1);
FOO(1,2,3,4,5,6,)
FOO(1,,2)
sh(sub_z)
CONCAT(con,cat)
