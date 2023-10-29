#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: pointer.
 * @needle: pointer.
 * Return:(0)always.
 */

char *_strstr(char *haystack, char *needle)
{
	int x, y;

	for (x = 0; needle[x] != '\0'; x++)
	{
		if (needle[x] == NULL)
		{
			return (NULL);
		}
		for (y = 0; haystack[y] != '\0'; y++)
		{
			if (needle[x] == haystack[y])
			{
				haystack[y] = needle[x];
			}
		}
	}
	return (haystack[y]);
}
