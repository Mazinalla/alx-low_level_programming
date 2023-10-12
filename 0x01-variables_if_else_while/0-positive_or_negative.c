#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Main - entry point.
 * Description: assign a random number to the variable n each time it is executed.
 * Return: always 0(success).
 */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if(n > 0)
	{
		printf("number %d is positive\n",n);
	}else if(n == 0)
	{
		printf("number %d is zero\n",n);
	}else
	{
		printf("number %d is negative\n",n);
	}
	return (0);
}
