#include <stdio.h>
#include "main.h"

/**
  * *_memset - fills memory with constant type
  * @s: pointer to put the constant
  * @b: constant
  * @n: max bytes to use
  * Return: pointer
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; n > 0; x++, n--)
	{
		s(x) = b;
	}
	return (s);
}
