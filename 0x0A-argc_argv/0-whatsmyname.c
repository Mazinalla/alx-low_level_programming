#include <stdio.h>

/**
<<<<<<< HEAD
 * main - the entry point of the program.
 * @argc: number of arguments.
 * @argv: array containing the arguments.
 * 
 * Return: always 0.
*/

int main(int argc , char* argv[]) {
    (void)argc;
    printf("%s\n", argv[0]);
    return 0;
=======
  * main - the starting point of a C program.
  * @argc: the count of command-line arguments.
  * @argv: an array of strings containing the arguments themselves.
  *
  * Return: Always 0.
  */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
>>>>>>> ef15a5f4c1b4c23f3497e0d5c3ab346f3f72b888
}
