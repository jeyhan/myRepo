#include<string.h>
#include"populator.h"

void set_unit(unit_t *p){
	if(p == NULL)
		return;//ignore it.
	p->number = 3;
	strcpy(p->msg,"Hello world!");
}
