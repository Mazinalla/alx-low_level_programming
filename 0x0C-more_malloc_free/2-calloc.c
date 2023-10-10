#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function allocates memory for an array and returns a pointer to the allocated memory.
 * @nmemb: number of memory bytes.
 * Return: NULL If nmemb or size is 0 or malloc fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size){
	char *a;
	unsigned int d;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (d = 0; d < (nmemb * size); d++)
		a[d] = 0;
	return (a);
}
