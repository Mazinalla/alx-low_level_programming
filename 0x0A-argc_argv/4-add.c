#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    int sum = 0, i = 1, j = 0;

    if (argc == 1) {
        printf("0\n");
        return 0;
    }

    for (; i < argc; i++) {
        for (; argv[i][j] != '\0'; j++) {
            if (!isdigit(argv[i][j])) {
                printf("Error\n");
                return 1;
            }
        }
        int num = atoi(argv[i]);
        if (num <= 0) {
            printf("Error\n");
            return 1;
        }
        sum += num;
    }

    printf("%d\n", sum);
    return 0;
}
