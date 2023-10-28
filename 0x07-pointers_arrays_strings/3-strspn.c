#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string.
 * @accept: string.
 * Return:always 0(success).
 */

unsigned int _strspn(char *s, char *accept)
{
	int x, z, n = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (z = 0; accept[z] != '\0'; z++)
		{
			if (s[x] == accept[z])
			{
				n++;
			}
		}
	}
	return (n);
}
