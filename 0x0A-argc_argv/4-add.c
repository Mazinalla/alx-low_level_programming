#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - the intro to the program.
 * @argc: the number of arguments.
 * @argv: array of arguments.
 *
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int sum = 0, i = 1, j = 0, num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (; i < argc; i++)
	{
		for (; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[i]);
		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
