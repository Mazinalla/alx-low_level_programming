#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: The array of arguments.
 *
 * Return: A pointer to the new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, total_length;
	char *result;
	/* Check if the number of arguments is 0 or the argument array is NULL */
	if (ac == 0 || av == NULL)
		return (NULL);
	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			total_length++;
		}
		total_length++; /* For the newline character */
	}
	/* Allocate memory for the new string */
	result = (char *)malloc(sizeof(char) * (total_length + 1));
	if (result == NULL)
		return (NULL);
	/* Concatenate the arguments into the new string */
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			result[k++] = av[i][j];
		result[k++] = '\n';
	}
	result[k] = '\0';
	return (result);
}
