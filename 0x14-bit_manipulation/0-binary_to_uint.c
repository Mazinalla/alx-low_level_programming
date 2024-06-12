#include <stdio.h>
#include <stddef.h> /* For NULL */

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: Pointer to a string of '0' and '1' chars.
 *
 * This function takes a string representing a binary number and
 * converts it to its equivalent unsigned integer value. If the string
 * contains any character other than '0' or '1', or if the string is NULL,
 * the function returns 0.
 *
 * Return: The converted unsigned integer, or 0 if the input is invalid.
 */
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
