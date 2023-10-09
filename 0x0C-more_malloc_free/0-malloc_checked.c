#include "main.h"
#include <stdio.h>

void *malloc_checked(unsigned int b){
	*b = malloc(sizeof(unsigned int)+1);
	return ;
}
