#include <stdio.h>
#include <stdlib.h>

/**
 * main - the intro to the program.
 * @argc: the count of the arguments.
 * @argv: array countaining argument.
 * 
 * Return: always 0.
*/

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 1;
    }

    int num1 = atoi(argv[1]);  // Convert first argument to integer
    int num2 = atoi(argv[2]);  // Convert second argument to integer

    int result = num1 * num2;  // Perform multiplication

    printf("%d\n", result);    // Print the result
    return 0;
}
