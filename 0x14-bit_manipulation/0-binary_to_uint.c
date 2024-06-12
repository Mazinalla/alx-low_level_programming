#include <stdio.h>
#include <stddef.h> /* For NULL */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int i;

	/* Check for NULL pointer */
	if (b == NULL)
	{
		return (0);
	}

	result = 0;

	/* Iterate over each character in the string */
	for (i = 0; b[i] != '\0'; i++)
	{
		/* Check if the character is not '0' or '1' */
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		/* Shift result left by 1 bit and add current bit */
		result = result * 2 + (b[i] - '0');
	}

	return (result);
}
