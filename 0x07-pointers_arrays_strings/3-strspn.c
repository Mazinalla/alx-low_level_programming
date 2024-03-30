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
	int found;

	while (*s)
	{
		found = 0;

		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				count++;
				found = 1;
				break;
			}

			a++;
		}
		if (!found)
			break;
		s++;
	}
	return (count);
}
