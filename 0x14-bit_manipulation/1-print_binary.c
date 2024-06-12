#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be converted to binary.
 *
 * This function prints the binary representation of an unsigned long int
 * without using arrays, malloc, %, or / operators.
 */
void print_binary(unsigned long int n)
{
	int bit, started = 0;
	unsigned long int mask;

	for (mask = 1UL << (sizeof(unsigned long int) * 8 - 1); mask > 0; mask >>= 1)
	{
		/* Check if the current bit is set */
		bit = n & mask ? 1 : 0;

		/* Print the bit if it's set or if we have already started printing */
		if (bit || started)
		{
			putchar(bit ? '1' : '0');
			started = 1; /* Set the flag indicating that we've started printing */
		}
	}

	/* If n was 0, we need to print '0' */
	if (!started)
	{
		putchar('0');
	}
}
