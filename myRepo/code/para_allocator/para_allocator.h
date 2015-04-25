#ifndef PARA_ALLOCATOR_H
#define PARA_ALLOCATOR_H

typedef struct{
	int number;
	char* msg;
}unit_t;

extern void alloc_unit(unit_t **);
//only one level pointer is not enough.
//the final object is const,the addr is unchangable
//
extern void free_unit(unit_t *);
#endif
