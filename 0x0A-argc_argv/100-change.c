#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;
	/* Check for the correct number of arguments */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	/* Convert argument to integer */
	cents = atoi(argv[1]);
	/* If the number of cents is negative, print 0 */
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	/* Calculate the minimum number of coins */
	coins += cents / 25;
	cents %= 25;
	coins += cents / 10;
	cents %= 10;
	coins += cents / 5;
	cents %= 5;
	coins += cents / 2;
	cents %= 2;
	coins += cents / 1;
	/* Print the result */
	printf("%d\n", coins);
	return (0);
}
