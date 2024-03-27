#include <stdio.h>

/**
 * main - the intro to the program.
 * @argc: number of arguments.
 * @argv: array of strings.
 *
 * Return: always 0.
*/

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
