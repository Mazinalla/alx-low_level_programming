#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string.
 * @accept: string.
 * Return:always 0(success).
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a;

	while (*s)
	{
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				break;
			}
		}
		if (!*a)
		{
			return (count);
		}
		count++;
		s++;
	}
	return (count);
}
