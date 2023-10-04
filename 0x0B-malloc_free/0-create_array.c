#include "main.h"
#include <stdlib.h>

/**
 *create_array - array for prints a string
 *@size: number elements array
 *@c: char
 *Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)

	{
		return (0);
	}
	while (size--)
	{
		n[size] = c;
	}
	return (n);
}
