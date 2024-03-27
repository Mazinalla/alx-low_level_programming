#include <stdio.h>

/**
 * main - the entry point of the program.
 * @argc: number of arguments.
 * @argv: array that containing the arguments.
 *
 * Return: always 0.
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}
